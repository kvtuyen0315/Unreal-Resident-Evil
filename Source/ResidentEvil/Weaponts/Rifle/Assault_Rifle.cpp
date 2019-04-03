// Fill out your copyright notice in the Description page of Project Settings.

#include "Assault_Rifle.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"

#pragma region Functions
AAssault_Rifle::AAssault_Rifle()
{
	// Set null class.
	SkeletalMeshAssaultRifle = NULL;

	SetSkeletalMeshGun();
}
#pragma endregion

#pragma region SetFunctions.
void AAssault_Rifle::SetSkeletalMeshGun()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> AssaultRifle(TEXT("/Game/MyAssets/MilitaryWeapSilver/Weapons/Assault_Rifle_A"));
	SkeletalMeshAssaultRifle = AssaultRifle.Object;
	SkeletalMeshComponentGun->SetSkeletalMesh(SkeletalMeshAssaultRifle);
}
#pragma endregion