// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAnimInstance.h"

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

// Update animation.
void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
}


