// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Structures/GameEnumName.h"
#include "EnemyAnimInstance.generated.h"
/**
 * The base class for control the enemy's animation blueprint
 * We will change variables in C++ to make State Machince in BluePrint work
 */

class UAnimSequenceBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyAnimNotifyBegin, UAnimSequenceBase*, Animation, float, TotalDuration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyAnimNotifyTick, UAnimSequenceBase*, Animation, float, FrameDeltaTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAnimNotifyEnd, UAnimSequenceBase*, Animation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAnimNotify, EAnimationType, AnimationType);

UCLASS()
class RESIDENTEVIL_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	class AEnemyBase* OwningPawn;

	virtual void NativeInitializeAnimation() override;

	// Actor Speed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed;
	// The Actor Direction
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Direction;
	// Is Actor Attacking?
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsAttacking;

public:
	// Delegate Animation events
	UPROPERTY(BlueprintAssignable)
	FEnemyAnimNotifyBegin OnAnimNotifyBegin;

	UPROPERTY(BlueprintAssignable)
	FEnemyAnimNotifyTick OnAnimNotifyTick;

	UPROPERTY(BlueprintAssignable)
	FEnemyAnimNotifyEnd OnAnimNotifyEnd;

	UPROPERTY(BlueprintAssignable)
	FEnemyAnimNotify OnAnimNotify;

public:
	UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
	void SetSpeed(float Value);
	UFUNCTION(BlueprintCallable)
	float GetSpeed() const;

	UFUNCTION()
	void SetDirection(float Value);
	UFUNCTION(BlueprintCallable)
	float GetDirection() const;

	UFUNCTION()
	void SetIsAttacking(bool Value);
	UFUNCTION(BlueprintCallable)
	bool IsAttacking() const;

	// Update animation.
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	// Receive Events from animation
	virtual void ReceiveAnimNotifyBegin(UAnimSequenceBase * Animation, float TotalDuration);
	virtual void ReceiveAnimNotifyTick(UAnimSequenceBase * Animation, float FrameDeltaTime);
	virtual void ReceiveAnimNotifyEnd(UAnimSequenceBase * Animation);
	virtual void ReceiveAnimNotify(EAnimationType AnimationType);
};
