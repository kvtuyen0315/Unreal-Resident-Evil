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
	bReplicates = true;
	bIsAttacking = false;
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
	if (AnimInstance)
	{
		AnimInstance->OnAnimNotifyEnd.AddDynamic(this, &AEnemyBase::OnAnimNotifyEnd);
		AnimInstance->OnAnimNotify.AddDynamic(this, &AEnemyBase::OnAnimNotify);
	}
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

void AEnemyBase::AttackTarget(AActor * Target)
{
	bIsAttacking = true;
}

void AEnemyBase::OnAnimNotifyBegin(UAnimSequenceBase * Animation, float TotalDuration)
{
}

void AEnemyBase::OnAnimNotifyTick(UAnimSequenceBase * Animation, float FrameDeltaTime)
{
}

void AEnemyBase::OnAnimNotifyEnd(UAnimSequenceBase * Animation)
{
	FString Name = Animation->GetName();
	if (Name.IsEmpty() == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("On Anim Notify End Name %s"), *Name);
	}
}

void AEnemyBase::OnAnimNotify(EAnimationType AnimationType)
{
	if (AnimationType == EAnimationType::ZOMBIE_ATTACK_END)
	{
		UE_LOG(LogTemp, Warning, TEXT("On Anim Notify End Name ZOMBIE_ATTACK_END"));
	}
}

