// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAnimNotify.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnemyAnimInstance.h"

void UEnemyAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	EnemyAnimInstance = Cast<UEnemyAnimInstance>(MeshComp->GetAnimInstance());
	if (EnemyAnimInstance)
	{
		EnemyAnimInstance->ReceiveAnimNotify(Type);
	}
}


