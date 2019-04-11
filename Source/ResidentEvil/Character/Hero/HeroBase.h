// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Structures/GameDelegateName.h"
#include "HeroBase.generated.h"


UCLASS()
class RESIDENTEVIL_API AHeroBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region Delegate Aiming
	UPROPERTY()
	FPlayerPressAimDelegate OnPressAim;
	UPROPERTY()
	FPlayerReleaseAimDelegate OnReleaseAim;
	UPROPERTY()
	FPlayerMovingDelegate OnMoving;
	UPROPERTY()
	FPlayerShootingDelegate OnShooting;
#pragma endregion
};
