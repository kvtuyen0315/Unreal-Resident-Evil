// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weaponts.generated.h"

UCLASS()
class RESIDENTEVIL_API AWeaponts : public AActor
{
	GENERATED_BODY()

#pragma region Variable.
protected:
	class USceneComponent* SceneComponentGun;
	class USkeletalMeshComponent* SkeletalMeshComponentGun;

#pragma endregion

#pragma region Functions.
public:
	AWeaponts();

#pragma region SetFunctions.
private:
	void SetDefaultScene();
	void SetSkeletalMeshComponentGun();
#pragma endregion


#pragma endregion
};
