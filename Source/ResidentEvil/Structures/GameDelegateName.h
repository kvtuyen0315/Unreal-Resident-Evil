// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameEnumName.h"
#include "GameDelegateName.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMonsterAnimNotify, EAnimationType, AnimationType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerPressAimDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerReleaseAimDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerMovingDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerShootingDelegate);

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UGameDelegateName : public UObject
{
	GENERATED_BODY()
};
