// Fill out your copyright notice in the Description page of Project Settings.

#include "Zombie.h"
#include "Components/SkeletalMeshComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/Monster/MonsterAIController.h"
#include "Engine.h"
#include "Character/Hero/Hunk.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Character/Monster/TargetInSightInfo.h"
#include "Character/Monster/TargetHearingInfo.h"
#include "GameConstValue.h"
#include "Animation/AnimBlueprint.h"
#include "Character/Monster/MonsterStat.h"

#define ASSET_PATH_SKELETAL_MESH "SkeletalMesh'/Game/MyCharacter/Monster/Zombie2/Zombie_idle.Zombie_idle'"
#define ASSET_PATH_ANIM_BLUEPRINT "AAnimBlueprint'/Game/MyCharacter/Monster/Zombie2/ZombieNormal.ZombieNormal'"
#define ASSET_PATH_BEHAVIOR_TREE "BehaviorTree'/Game/AI/ZombieBT.ZombieBT'"
#define ZOMBIE_ATTACK_RANGE 200.f
#define ZOMBIE_WALK_SPEED 70.f
#define ZOMBIE_TIME_FOLLOW_SOUND 7.f
#define ZOMBIE_SCALING 1.f

AZombie::AZombie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie Constructor called"));
	MonsterStat->AttackRange = ZOMBIE_ATTACK_RANGE;
	MonsterStat->TimeFollowLastSound = ZOMBIE_TIME_FOLLOW_SOUND;
	this->GetCharacterMovement()->MaxWalkSpeed = ZOMBIE_WALK_SPEED;

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set Default AI Controller Class. You can custom it by inherit AEnemyAIController Class
	this->AIControllerClass = AMonsterAIController::StaticClass();

	// Create and setup sensing comonent
	SetupMonsterSensingComponent();

	InitializeSkeletaMesh(ASSET_PATH_SKELETAL_MESH);
	InitializeBehaviorTree(ASSET_PATH_BEHAVIOR_TREE);
	InitializeAnimationBluePrint(ASSET_PATH_ANIM_BLUEPRINT);

	AutoPossessAI = EAutoPossessAI::Spawned;
}

void AZombie::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie BeginPlay called"));
	Super::BeginPlay();

	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	SkeletalMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	FRotator SkeletalMeshRotation = SkeletalMeshComponent->RelativeRotation;
	SkeletalMeshRotation.Add(0.f, -90.f, 0.f);
	SkeletalMeshComponent->SetRelativeRotation(SkeletalMeshRotation);
	SkeletalMeshComponent->SetRelativeScale3D(FVector(ZOMBIE_SCALING));

	// register events for AI such as sight and hearing
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, AISightConfig->GetSenseImplementation(), this);
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, AIHearingConfig->GetSenseImplementation(), this);
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
		if (Stimulus.Type == this->AISightConfig->GetSenseID())
		{
			if (Stimulus.WasSuccessfullySensed())
			{
				if (this->TargetInSightInfo)
				{
					this->TargetInSightInfo->SetIsTargetInSight(true);
					this->TargetInSightInfo->SetLastKnowLocation(Stimulus.StimulusLocation);
					this->TargetInSightInfo->SetShouldChaseTarget(true);
					GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("AZombie see Player"));
				}
			}
			else
			{
				if (this->TargetInSightInfo)
				{
					this->TargetInSightInfo->SetIsTargetInSight(false);
					this->TargetInSightInfo->SetLastKnowLocation(Stimulus.StimulusLocation);
					GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Emerald, "AZombie lose sigh of Player");
				}
			}
		}
	}

	if (Stimulus.Type == this->AIHearingConfig->GetSenseID())
	{
		if (Stimulus.WasSuccessfullySensed())
		{
			if (this->TargetHearingInfo)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("AZombie hear player"));
				this->TargetHearingInfo->SetIsHearingTargetSound(true);
				this->TargetHearingInfo->SetLastKnowLocation(Stimulus.StimulusLocation);
				this->TargetHearingInfo->SetTimeHeardSound(0.f);
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("AZombie SenseStuff"));
}

void AZombie::OnAttackEnd()
{
	MonsterStat->bIsAttacking = false;
}

void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (TargetHearingInfo && TargetHearingInfo->IsHearingTargetSound())
	{
		float NewTime = TargetHearingInfo->GetTimeHeardSound() + DeltaTime; // Increase time we had heard
		if (NewTime > MonsterStat->TimeFollowLastSound) // if it exceed the time, reset it to 0 and set hearing = false
		{
			TargetHearingInfo->SetIsHearingTargetSound(false);
			TargetHearingInfo->SetTimeHeardSound(0.f);
		}
		else
		{
			TargetHearingInfo->SetTimeHeardSound(NewTime);
		}
	}

	//CalculateVariableForAnimation(DeltaTime);
}

void AZombie::OnAnimNotify(EAnimationType AnimationType)
{
	switch (AnimationType)
	{
	case EAnimationType::ZOMBIE_ATTACK_END:
	{
		OnAttackEnd();
	}
		break;
	default:
		break;
	}
}

void AZombie::SetupMonsterSensingComponent()
{
	AIPereptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	// Set Sigh Config
	this->TargetInSightInfo = CreateDefaultSubobject<UTargetInSightInfo>(TEXT("Target Sight Info"));
	AISightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	AIPereptionComp->ConfigureSense(*AISightConfig);
	// set Hearing Config
	this->TargetHearingInfo = CreateDefaultSubobject<UTargetHearingInfo>(TEXT("Target Hearing Info"));
	AIHearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	AIPereptionComp->ConfigureSense(*AIHearingConfig);
	AIPereptionComp->SetDominantSense(AIHearingConfig->GetSenseImplementation());
	// Register event when sense actor
	AIPereptionComp->OnPerceptionUpdated.AddDynamic(this, &AZombie::OnSenseActors);
	AIPereptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AZombie::OnUpdatedSenseActor);
}

void AZombie::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	//SkeletalMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	//FRotator SkeletalMeshRotation = SkeletalMeshComponent->RelativeRotation;
	//SkeletalMeshRotation.Add(0.f, -90.f, 0.f);
	//SkeletalMeshComponent->SetRelativeRotation(SkeletalMeshRotation);
	//SkeletalMeshComponent->SetRelativeScale3D(FVector(ZOMBIE_SCALING));

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
