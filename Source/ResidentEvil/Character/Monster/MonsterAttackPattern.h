// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MonsterAttackPattern.generated.h"

enum class EMonsterAttackType : uint8;
enum class EMonsterType : uint8;
/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UMonsterAttackPattern : public UObject
{
	GENERATED_BODY()
	
protected:
	// Give us the info of which attack
	UPROPERTY()
	EMonsterAttackType AttackType;

	UPROPERTY()
	int32 BaseAttackDamage;

	UPROPERTY()
	float AttackRange;

	UPROPERTY()
	float AttackCoolDown;

	static TMap<EMonsterType, TArray<UMonsterAttackPattern*>> sMapAttackPatternData;
protected:
	UFUNCTION()
	void Set(EMonsterAttackType Type, int32 BaseDamage = 0, float Range = 0.f, float Delay = 0.f);
public:
	UFUNCTION()
	static void Initialize();
	UFUNCTION()
	static void Destroy();
	UFUNCTION()
	static const TArray<UMonsterAttackPattern*>& GetMonsterAttackPatternArray(EMonsterType Type);

	FORCEINLINE EMonsterAttackType GetAttackType() const { return AttackType; }
	FORCEINLINE int32 GetBaseAttackDamage() const { return BaseAttackDamage; }
	FORCEINLINE float GetAttackRange() const { return AttackRange; }
	FORCEINLINE int32 GetAttackCoolDown() const { return AttackCoolDown; }

};
