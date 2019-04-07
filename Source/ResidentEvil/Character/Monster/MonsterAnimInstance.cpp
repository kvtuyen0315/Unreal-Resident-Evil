// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterAnimInstance.h"
#include "MonsterBase.h"

void UMonsterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwningPawn = Cast<AMonsterBase>(TryGetPawnOwner());
}

UMonsterAnimInstance::UMonsterAnimInstance(const FObjectInitializer & ObjectInitializer) : Super(ObjectInitializer)
{
	Speed = 0.f;
	Direction = 0.f;
	bIsAttacking = false;
}

// Update animation.
void UMonsterAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (OwningPawn)
	{
		FVector Velocity = OwningPawn->GetVelocity();
		Speed = Velocity.Size();
		Direction = CalculateDirection(Velocity, OwningPawn->GetActorRotation());
		bIsAttacking = OwningPawn->IsAttacking();
	}
}

void UMonsterAnimInstance::ReceiveAnimNotifyBegin(UAnimSequenceBase * Animation, float TotalDuration)
{
	if (OnAnimNotifyBegin.IsBound())
	{
		OnAnimNotifyBegin.Broadcast(Animation, TotalDuration);
	}
}

void UMonsterAnimInstance::ReceiveAnimNotifyTick(UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	if (OnAnimNotifyTick.IsBound())
	{
		OnAnimNotifyTick.Broadcast(Animation, FrameDeltaTime);
	}
}

void UMonsterAnimInstance::ReceiveAnimNotifyEnd(UAnimSequenceBase * Animation)
{
	if (OnAnimNotifyEnd.IsBound())
	{
		OnAnimNotifyEnd.Broadcast(Animation);
	}
}

void UMonsterAnimInstance::ReceiveAnimNotify(EAnimationType AnimationType)
{
	if (OnAnimNotify.IsBound())
	{
		OnAnimNotify.Broadcast(AnimationType);
	}
}

void UMonsterAnimInstance::SetSpeed(float Value)
{
	this->Speed = Value;
}
float UMonsterAnimInstance::GetSpeed() const
{
	return Speed;
}

void UMonsterAnimInstance::SetDirection(float Value)
{
	Direction = Value;
}

float UMonsterAnimInstance::GetDirection() const
{
	return Direction;
}

void UMonsterAnimInstance::SetIsAttacking(bool Value)
{
	bIsAttacking = Value;
}

bool UMonsterAnimInstance::IsAttacking() const
{
	return bIsAttacking;
}


