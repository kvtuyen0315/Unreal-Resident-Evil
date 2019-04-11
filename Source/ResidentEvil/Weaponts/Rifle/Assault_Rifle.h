// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weaponts/Weaponts.h"
#include "Assault_Rifle.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AAssault_Rifle : public AWeaponts
{
	GENERATED_BODY()
	
#pragma region Variable.
private:
	class USkeletalMesh* SkeletalMeshAssaultRifle;

#pragma endregion

#pragma region Functions.
private:
	AAssault_Rifle();

#pragma region SetFunctions.
private:
	void SetSkeletalMeshGun();
#pragma endregion

#pragma endregion
};
