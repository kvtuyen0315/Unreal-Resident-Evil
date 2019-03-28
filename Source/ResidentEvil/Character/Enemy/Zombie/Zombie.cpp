// Fill out your copyright notice in the Description page of Project Settings.

#include "Zombie.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/Enemy/EnemyAIController.h"

AZombie::AZombie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie Constructor called"));
	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(TEXT("/Game/MyAssets/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));
	SkeletalMeshComponent->SetSkeletalMesh(SkeletalMeshAsset.Object);
	SkeletalMeshComponent->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -83.0f), FRotator(0.0f, -90.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BehaviorTreeAsset(TEXT("BehaviorTree'/Game/AI/ZombieBT.ZombieBT'"));
	AIBehaviorTree = BehaviorTreeAsset.Object;

	this->AIControllerClass = AEnemyAIController::StaticClass();

	static ConstructorHelpers::FObjectFinder<UAnimSequence> anim(TEXT("AnimSequence'/Game/MyAssets/AnimStarterPack/Aim_Space_Hip.Aim_Space_Hip'"));
	Anim = anim.Object;
}

void AZombie::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Zombie BeginPlay called"));
	Super::BeginPlay();
	GetMesh()->PlayAnimation(Anim, true);
}

void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (CharacterTarget != nullptr)
	//{
	//	FVector ActorLocation = this->GetActorLocation();
	//	FVector CharacterLocation = CharacterTarget->GetActorLocation();
	//	FVector Direction = CharacterLocation - ActorLocation;
	//	Direction.Normalize();
	//	FRotator RotationDelta = UKismetMathLibrary::FindLookAtRotation(ActorLocation, CharacterLocation);
	//	FRotator NewRot = FMath::RInterpTo(this->GetActorRotation(), RotationDelta, DeltaTime, 2);
	//	this->AddMovementInput(Direction, 0.2f, false);
	//	this->FaceRotation(NewRot);
	//}
}
