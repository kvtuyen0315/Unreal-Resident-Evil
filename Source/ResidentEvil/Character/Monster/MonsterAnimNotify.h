// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "MonsterAnimNotify.generated.h"

enum class EAnimationType : uint8;
/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UMonsterAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	class UMonsterAnimInstance* MonsterAnimInstance;
protected:
	UFUNCTION()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	EAnimationType Type;
};