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

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BehaviorTreeAsset(TEXT("BehaviorTree'/Game/AI/ZombieBT.ZombieBT'"));
	AIBehaviorTree = BehaviorTreeAsset.Object;

	this->AIControllerClass = AEnemyAIController::StaticClass();

	static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimSequenceAsset(TEXT("AnimSequence'/Game/MyAssets/AnimStarterPack/Aim_Space_Hip.Aim_Space_Hip'"));
	Anim = AnimSequenceAsset.Object;
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
}
