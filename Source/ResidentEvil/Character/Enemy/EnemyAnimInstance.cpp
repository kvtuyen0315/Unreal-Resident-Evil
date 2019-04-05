// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAnimInstance.h"
#include "EnemyBase.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwningPawn = Cast<AEnemyBase>(TryGetPawnOwner());
}

UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer & ObjectInitializer) : Super(ObjectInitializer)
{
	Speed = 0.f;
	Direction = 0.f;
	bIsAttacking = false;
}

// Update animation.
void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaTime)
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

void UEnemyAnimInstance::ReceiveAnimNotifyBegin(UAnimSequenceBase * Animation, float TotalDuration)
{
	if (OnAnimNotifyBegin.IsBound())
	{
		OnAnimNotifyBegin.Broadcast(Animation, TotalDuration);
	}
}

void UEnemyAnimInstance::ReceiveAnimNotifyTick(UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	if (OnAnimNotifyTick.IsBound())
	{
		OnAnimNotifyTick.Broadcast(Animation, FrameDeltaTime);
	}
}

void UEnemyAnimInstance::ReceiveAnimNotifyEnd(UAnimSequenceBase * Animation)
{
	if (OnAnimNotifyEnd.IsBound())
	{
		OnAnimNotifyEnd.Broadcast(Animation);
	}
}

void UEnemyAnimInstance::ReceiveAnimNotify(EAnimationType AnimationType)
{
	if (OnAnimNotify.IsBound())
	{
		OnAnimNotify.Broadcast(AnimationType);
	}
}

void UEnemyAnimInstance::SetSpeed(float Value)
{
	this->Speed = Value;
}
float UEnemyAnimInstance::GetSpeed() const
{
	return Speed;
}

void UEnemyAnimInstance::SetDirection(float Value)
{
	Direction = Value;
}

float UEnemyAnimInstance::GetDirection() const
{
	return Direction;
}

void UEnemyAnimInstance::SetIsAttacking(bool Value)
{
	bIsAttacking = Value;
}

bool UEnemyAnimInstance::IsAttacking() const
{
	return bIsAttacking;
}


