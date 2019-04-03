// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

// Tuyển.
#pragma region Create.
		AMyGameModeBase();
#pragma endregion

	virtual void StartPlay();
};
