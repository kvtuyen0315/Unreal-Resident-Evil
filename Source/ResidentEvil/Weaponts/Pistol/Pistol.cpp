// Fill out your copyright notice in the Description page of Project Settings.

#include "Pistol.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimBlueprint.h"
#include "Components/SkeletalMeshComponent.h"

#pragma region Functions
APistol::APistol()
{
	// Set null class.
	SkeletalMeshPistol = NULL;

	SetSkeletalMeshGun();
}
#pragma endregion

#pragma region SetFunctions.
void APistol::SetSkeletalMeshGun()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Pistol(TEXT("/Game/MyAssets/MilitaryWeapSilver/Weapons/Pistols_A"));
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> PistolAnimation(TEXT("/Game/MyCharacter/Hunk/Swat/Pistol/Pistol_Animation"));
	SkeletalMeshPistol = Pistol.Object;
	SkeletalMeshComponentGun->SetSkeletalMesh(SkeletalMeshPistol);
	SkeletalMeshComponentGun->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	SkeletalMeshComponentGun->SetAnimInstanceClass(PistolAnimation.Object->GetAnimBlueprintGeneratedClass());
}
#pragma endregion


