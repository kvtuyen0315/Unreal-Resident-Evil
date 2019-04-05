// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EnemyAnimNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UEnemyAnimNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	class UEnemyAnimInstance* EnemyAnimInstance;
protected:
	UFUNCTION()
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration);
	UFUNCTION()
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime);
	UFUNCTION()
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation);
	
public:
	UPROPERTY(EditAnywhere)
	int Type;
};
