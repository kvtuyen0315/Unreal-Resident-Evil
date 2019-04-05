// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Structures/GameEnumName.h"
#include "EnemyAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UEnemyAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	class UEnemyAnimInstance* EnemyAnimInstance;
protected:
	UFUNCTION()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	EAnimationType Type;
};
