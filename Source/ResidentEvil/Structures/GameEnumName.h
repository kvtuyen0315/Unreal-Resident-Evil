// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameEnumName.generated.h"
/**
 * 
 */


UENUM(BlueprintType)
enum class EAnimationType : uint8
{
	NONE UMETA(DisplayName = "None"),
	ZOMBIE_ATTACK_END UMETA(DisplayName = "Zombie Attack End")
};

UENUM(BlueprintType)
enum class EMonsterAttackType : uint8
{
	NONE UMETA(DisplayName = "None"),
	ZOMBIE_ATTACK_NORMAL UMETA(DisplayName = "Zombie Attack Normal")
};

UENUM(BlueprintType)
enum class EMonsterType : uint8
{
	NONE UMETA(DisplayName = "None"),
	ZOMBIE UMETA(DisplayName = "Zombie")
};

UENUM(BlueprintType)
enum class EMonsterAttackResult : uint8
{
	NONE UMETA(DisplayName = "None"),
	SUCCEED UMETA(DisplayName = "Zombie"),
	FAILED_ON_COOLDOWN UMETA(DisplayName = "Failed On Cool Down"),
};

class RESIDENTEVIL_API FGameEnumName 
{
public:
	FGameEnumName();
	~FGameEnumName();
};

