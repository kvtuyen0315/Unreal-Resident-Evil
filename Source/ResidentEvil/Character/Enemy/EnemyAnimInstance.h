// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

/**
 * The base class for control the enemy's animation blueprint
 * We will change variables in C++ to make State Machince in BluePrint work
 */

UCLASS()
class RESIDENTEVIL_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	// Actor Speed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed;
	// The Actor Direction
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Direction;
public:
	UFUNCTION()
	void SetSpeed(float Value);
	UFUNCTION(BlueprintCallable)
	float GetSpeed() const;

	UFUNCTION()
	void SetDirection(float Value);
	UFUNCTION(BlueprintCallable)
	float GetDirection() const;
};
