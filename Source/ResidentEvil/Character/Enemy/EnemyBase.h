// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyBase.generated.h"

UCLASS()
class RESIDENTEVIL_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyBase();
	AEnemyBase(const FObjectInitializer& ObjectInitializer);
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override {};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	// Reference to target, will be set on begin play function
	ACharacter* CharacterTarget;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
