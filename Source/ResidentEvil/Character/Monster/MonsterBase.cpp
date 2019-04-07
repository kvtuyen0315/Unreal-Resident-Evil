// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimBlueprint.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Engine.h"
#include "MonsterAnimInstance.h"
#include "MonsterStat.h"
#include "Structures/GameEnumName.h"

AMonsterBase::AMonsterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bReplicates = true;
	MonsterStat = CreateDefaultSubobject<UMonsterStat>(TEXT("Monster Info"));
	MonsterStat->OwnerMonster = this;
	MonsterStat->bIsAttacking = false;
}

void AMonsterBase::InitializeSkeletaMesh(const char* Path)
{
	USkeletalMeshComponent* SkeletalMeshComponent = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(ANSI_TO_TCHAR(Path));
	if (SkeletalMeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(SkeletalMeshAsset.Object);
		SkeletalMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	}
}

void AMonsterBase::InitializeBehaviorTree(const char * Path)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BehaviorTreeAsset(ANSI_TO_TCHAR(Path));
	if (BehaviorTreeAsset.Succeeded())
	{
		AIBehaviorTree = BehaviorTreeAsset.Object;
	}
}

void AMonsterBase::InitializeAnimationBluePrint(const char * Path)
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
void AMonsterBase::BeginPlay()
{
	Super::BeginPlay();
	// Cache reference for later use
	AnimInstance = Cast<UMonsterAnimInstance>(this->GetMesh()->GetAnimInstance());
	if (AnimInstance)
	{
		AnimInstance->OnAnimNotifyEnd.AddDynamic(this, &AMonsterBase::OnAnimNotifyEnd);
		AnimInstance->OnAnimNotify.AddDynamic(this, &AMonsterBase::OnAnimNotify);
	}
}

void AMonsterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void AMonsterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMonsterBase::CalculateVariableForAnimation(float DeltaTime)
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

void AMonsterBase::AttackTarget(AActor * Target)
{
	MonsterStat->bIsAttacking = true;
}

void AMonsterBase::OnAnimNotifyBegin(UAnimSequenceBase * Animation, float TotalDuration)
{
}

void AMonsterBase::OnAnimNotifyTick(UAnimSequenceBase * Animation, float FrameDeltaTime)
{
}

void AMonsterBase::OnAnimNotifyEnd(UAnimSequenceBase * Animation)
{
	FString Name = Animation->GetName();
	if (Name.IsEmpty() == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("On Anim Notify End Name %s"), *Name);
	}
}

void AMonsterBase::OnAnimNotify(EAnimationType AnimationType)
{
	if (AnimationType == EAnimationType::ZOMBIE_ATTACK_END)
	{
		UE_LOG(LogTemp, Warning, TEXT("On Anim Notify End Name ZOMBIE_ATTACK_END"));
	}
}

bool AMonsterBase::IsAttacking() const
{
	return MonsterStat->bIsAttacking;
}

float AMonsterBase::GetAttackRange() const
{
	return MonsterStat->AttackRange;
}

