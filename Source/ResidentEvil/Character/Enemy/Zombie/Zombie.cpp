// Fill out your copyright notice in the Description page of Project Settings.

#include "Zombie.h"
#include "Components/SkeletalMeshComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/Enemy/EnemyAIController.h"
#include "Engine.h"
#include "Character/Hero/Hunk.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Character/Enemy/TargetInSightInfo.h"


AZombie::AZombie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie Constructor called"));
	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(TEXT("/Game/MyAssets/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));
	SkeletalMeshComponent->SetSkeletalMesh(SkeletalMeshAsset.Object);
	SkeletalMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -90.f));

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BehaviorTreeAsset(TEXT("BehaviorTree'/Game/AI/ZombieBT.ZombieBT'"));
	AIBehaviorTree = BehaviorTreeAsset.Object;

	static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimSequenceAsset(TEXT("AnimSequence'/Game/MyAssets/AnimStarterPack/Idle_Pistol.Idle_Pistol'"));
	Anim = AnimSequenceAsset.Object;

	SetupEnemySensingComponent();
}

void AZombie::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie BeginPlay called"));
	Super::BeginPlay();
	// play default animation
	GetMesh()->PlayAnimation(Anim, true);

	// register events for AI such as sight and hearing
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, AISightConfig->GetSenseImplementation(), this);
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, AIHearingConfig->GetSenseImplementation(), this);
}

void AZombie::SetupEnemySensingComponent()
{
	AIPereptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	// Set Sigh Config
	AISightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	AIPereptionComp->ConfigureSense(*AISightConfig);
	// set Hearing Config
	AIHearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	AIPereptionComp->ConfigureSense(*AIHearingConfig);
	AIPereptionComp->SetDominantSense(AIHearingConfig->GetSenseImplementation());
	// Register event when sense actor
	AIPereptionComp->OnPerceptionUpdated.AddDynamic(this, &AZombie::OnSenseActors);
	AIPereptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AZombie::OnUpdatedSenseActor);
}

void AZombie::OnSenseActors(const TArray<AActor*>& TestActors)
{
	UE_LOG(LogTemp, Warning, TEXT("AZombie OnSenseActors"));
	for (AActor* Actor : TestActors)
	{
		AHunk* Hunk = Cast<AHunk>(Actor);
		if (Hunk)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("AZombie see Player %s"));
		}
	}
}

void AZombie::OnUpdatedSenseActor(AActor * UpdatedActor, FAIStimulus Stimulus)
{
	AHunk* Hunk = Cast<AHunk>(UpdatedActor);
	if (Hunk)
	{
		if (Stimulus.WasSuccessfullySensed())
		{
			if (Stimulus.Type == this->AISightConfig->GetSenseID())
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("AZombie see Player"));
				this->TargetInSightInfo->SetIsTargetInSight(true);
				this->TargetInSightInfo->SetLastKnowLocation(Stimulus.StimulusLocation);
			}
			else if (Stimulus.Type == this->AIHearingConfig->GetSenseID())
			{
				//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("AZombie hear player"));
			}
		}
		else
		{
			this->TargetInSightInfo->SetIsTargetInSight(false);
			this->TargetInSightInfo->SetLastKnowLocation(Stimulus.StimulusLocation);
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "AZombie lose sigh of Player");
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("AZombie SenseStuff"));
}

void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AZombie::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	FRotator SkeletalMeshRotation = SkeletalMeshComponent->RelativeRotation;
	SkeletalMeshRotation.Add(0.f, -90.f, 0.f);
	SkeletalMeshComponent->SetRelativeRotation(SkeletalMeshRotation);

	if (AISightConfig)
	{
		AISightConfig->SightRadius = 2000.f;
		AISightConfig->LoseSightRadius = 2100.f;
		AISightConfig->PeripheralVisionAngleDegrees = 40.0f;
		AISightConfig->DetectionByAffiliation.bDetectEnemies = true;
		AISightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AISightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		AIPereptionComp->ConfigureSense(*AISightConfig);
	}

	if (AIHearingConfig)
	{
		AIHearingConfig->HearingRange = 1000.f;
		AIHearingConfig->DetectionByAffiliation.bDetectEnemies = true;
		AIHearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AIHearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
		AIPereptionComp->ConfigureSense(*AIHearingConfig);
	}
}
