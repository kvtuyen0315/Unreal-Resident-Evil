// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Structures/GameEnumName.h"
#include "MonsterAnimInstance.generated.h"
/**
 * The base class for control the Monster's animation blueprint
 * We will change variables in C++ to make State Machince in BluePrint work
 */

class UAnimSequenceBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMonsterAnimNotifyBegin, UAnimSequenceBase*, Animation, float, TotalDuration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMonsterAnimNotifyTick, UAnimSequenceBase*, Animation, float, FrameDeltaTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMonsterAnimNotifyEnd, UAnimSequenceBase*, Animation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMonsterAnimNotify, EAnimationType, AnimationType);

UCLASS()
class RESIDENTEVIL_API UMonsterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	class AMonsterBase* OwningPawn;

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
	FMonsterAnimNotifyBegin OnAnimNotifyBegin;

	UPROPERTY(BlueprintAssignable)
	FMonsterAnimNotifyTick OnAnimNotifyTick;

	UPROPERTY(BlueprintAssignable)
	FMonsterAnimNotifyEnd OnAnimNotifyEnd;

	UPROPERTY(BlueprintAssignable)
	FMonsterAnimNotify OnAnimNotify;

public:
	UMonsterAnimInstance(const FObjectInitializer& ObjectInitializer);

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
