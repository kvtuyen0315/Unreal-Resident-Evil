// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MonsterStat.generated.h"

/**
 * 
 */
enum class EMonsterAttackType : uint8;
enum class EMonsterType : uint8;

UCLASS()
class RESIDENTEVIL_API UMonsterStat : public UActorComponent
{
	GENERATED_BODY()
protected:
	UMonsterStat(const FObjectInitializer& ObjectInitializer);

	class AMonsterBase* OwningMonster;
	// Time follow the sound, after this time, the AI won't go to the location of the last known sound.
	UPROPERTY(EditAnywhere)
	float TimeFollowLastSound;

	// The Attack Range, in this range AI can attack
	UPROPERTY(EditAnywhere)
	float AttackRange;

	// Variable to control attacking animation
	UPROPERTY(EditAnywhere)
	bool bIsAttacking;

	UPROPERTY(EditAnywhere)
	TMap<EMonsterAttackType, float> MapAttackCoolDown;

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

public:
	// Set OwningMonster and search related data
	void SetOwningMonster(AMonsterBase* Monster, bool bInitData);

	FORCEINLINE void SetOwningMonster(AMonsterBase* Monster) { OwningMonster = Monster; };
	FORCEINLINE AMonsterBase* GetOwningMonster() const { return OwningMonster; };

	FORCEINLINE void SetTimeFollowLastSound(float Value) { TimeFollowLastSound = Value; };
	FORCEINLINE float GetTimeFollowLastSound() const { return TimeFollowLastSound; };

	FORCEINLINE void SetAttackRange(float Value) { AttackRange = Value; };
	FORCEINLINE float GetAttackRange() const { return AttackRange; };

	FORCEINLINE void SetIsAttacking(bool Value) { bIsAttacking = Value; };
	FORCEINLINE bool IsAttacking() const { return bIsAttacking; };

	// Find Info Attack pattern base on type and initialize the map
	void SetAttackCoolDownDefault(EMonsterType Type);
	// Will set Default Data 
	void SetAttackCoolDown(EMonsterAttackType Type);
	void SetAttackCoolDown(EMonsterAttackType Type, float Delay);
	float GetAttackCoolDown(EMonsterAttackType AttackType);
	FORCEINLINE TMap<EMonsterAttackType, float> GetMapAttackCoolDown() const { return MapAttackCoolDown; }
};
