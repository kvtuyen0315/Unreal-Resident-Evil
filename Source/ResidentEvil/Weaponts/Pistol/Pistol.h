// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weaponts/Weaponts.h"
#include "Pistol.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API APistol : public AWeaponts
{
	GENERATED_BODY()
	
#pragma region Variable.
private:
	USkeletalMesh* SkeletalMeshPistol;

#pragma endregion

#pragma region Functions.
private:
	APistol();

#pragma region SetFunctions.
private:
	void SetSkeletalMeshGun();
#pragma endregion

#pragma endregion
};
