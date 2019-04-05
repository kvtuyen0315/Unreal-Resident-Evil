// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAnimNotifyState.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnemyAnimInstance.h"

void UEnemyAnimNotifyState::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	EnemyAnimInstance = Cast<UEnemyAnimInstance>(MeshComp->GetAnimInstance());
	if (EnemyAnimInstance)
	{
		EnemyAnimInstance->ReceiveAnimNotifyBegin(Animation, TotalDuration);
	}
}

void UEnemyAnimNotifyState::NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	if (EnemyAnimInstance)
	{
		EnemyAnimInstance->ReceiveAnimNotifyTick(Animation, FrameDeltaTime);
	}
}

void UEnemyAnimNotifyState::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	if (EnemyAnimInstance)
	{
		EnemyAnimInstance->ReceiveAnimNotifyEnd(Animation);
	}
}


