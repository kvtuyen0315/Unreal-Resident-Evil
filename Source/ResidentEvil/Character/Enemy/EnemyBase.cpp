// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimBlueprint.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Engine.h"
#include "EnemyAnimInstance.h"

AEnemyBase::AEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}


void AEnemyBase::InitializeSkeletaMesh(const char* Path)
{
	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(ANSI_TO_TCHAR(Path));
	if (SkeletalMeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(SkeletalMeshAsset.Object);
		SkeletalMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	}
}

void AEnemyBase::InitializeBehaviorTree(const char * Path)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BehaviorTreeAsset(ANSI_TO_TCHAR(Path));
	if (BehaviorTreeAsset.Succeeded())
	{
		AIBehaviorTree = BehaviorTreeAsset.Object;
	}
}

void AEnemyBase::InitializeAnimationBluePrint(const char * Path)
{
	USkeletalMeshComponent* SkeletalMeshComponent = GetMesh();
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> AnimationBlueprint(ANSI_TO_TCHAR(Path));
	if (AnimationBlueprint.Succeeded())
	{
		SkeletalMeshComponent->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		SkeletalMeshComponent->SetAnimInstanceClass(AnimationBlueprint.Object->GetAnimBlueprintGeneratedClass());
	}
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	// Cache reference for later use
	AnimInstance = Cast<UEnemyAnimInstance>(this->GetMesh()->GetAnimInstance());
}

void AEnemyBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyBase::CalculateVariableForAnimation(float DeltaTime)
{
	FVector Velocity = this->GetVelocity();
	float Speed = Velocity.Size();
	if (AnimInstance)
	{
		AnimInstance->SetSpeed(Speed);
		float Direction = this->AnimInstance->CalculateDirection(Velocity, this->GetActorRotation());
		this->AnimInstance->SetDirection(Direction);
	}
}

