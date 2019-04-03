// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weaponts/Weaponts.h"
#include "Shotgun.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AShotgun : public AWeaponts
{
	GENERATED_BODY()
	
#pragma region Variable.
private:
	USkeletalMesh* SkeletalMeshShotgun;

#pragma endregion

#pragma region Functions.
private:
	AShotgun();

#pragma region SetFunctions.
private:
	void SetSkeletalMeshGun();
#pragma endregion

#pragma endregion
	
	
};
