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
	ZOMBIE_ATTACK_END UMETA(DisplayName = "Zombie Attack End")
};

class RESIDENTEVIL_API FGameEnumName 
{
public:
	FGameEnumName();
	~FGameEnumName();
};

