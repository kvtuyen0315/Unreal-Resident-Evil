// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MonsterStat.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UMonsterStat : public UObject
{
	GENERATED_BODY()
public:
	class AMonsterBase* OwnerMonster;
	// Time follow the sound, after this time, the AI won't go to the location of the last known sound.
	UPROPERTY(EditAnywhere)
	float TimeFollowLastSound;

	// The Attack Range, in this range AI can attack
	UPROPERTY(EditAnywhere)
	float AttackRange;

	// Variable to control attacking animation
	UPROPERTY(EditAnywhere)
	bool bIsAttacking;

public:
	FORCEINLINE void SetTimeFollowLastSound(float Value) { TimeFollowLastSound = Value; };
	FORCEINLINE float GetTimeFollowLastSound() const { return TimeFollowLastSound; };

	FORCEINLINE void SetAttackRange(float Value) { AttackRange = Value; };
	FORCEINLINE float GetAttackRange() const { return AttackRange; };

	FORCEINLINE void SetIsAttacking(bool Value) { bIsAttacking = Value; };
	FORCEINLINE bool IsAttacking() const { return bIsAttacking; };
};
