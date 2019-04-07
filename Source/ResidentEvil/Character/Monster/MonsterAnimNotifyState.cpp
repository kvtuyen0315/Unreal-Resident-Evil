// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterAnimNotifyState.h"
#include "Components/SkeletalMeshComponent.h"
#include "MonsterAnimInstance.h"

void UMonsterAnimNotifyState::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	MonsterAnimInstance = Cast<UMonsterAnimInstance>(MeshComp->GetAnimInstance());
	if (MonsterAnimInstance)
	{
	}
}

void UMonsterAnimNotifyState::NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	if (MonsterAnimInstance)
	{
	}
}

void UMonsterAnimNotifyState::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	if (MonsterAnimInstance)
	{
	}
}


