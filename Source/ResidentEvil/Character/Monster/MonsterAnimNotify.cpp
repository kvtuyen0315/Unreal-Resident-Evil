// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterAnimNotify.h"
#include "Components/SkeletalMeshComponent.h"
#include "MonsterAnimInstance.h"

void UMonsterAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	MonsterAnimInstance = Cast<UMonsterAnimInstance>(MeshComp->GetAnimInstance());
	if (MonsterAnimInstance)
	{
		MonsterAnimInstance->ReceiveAnimNotify(Type);
	}
}


