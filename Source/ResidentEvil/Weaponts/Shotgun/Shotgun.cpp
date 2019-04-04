// Fill out your copyright notice in the Description page of Project Settings.

#include "Shotgun.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimBlueprint.h"
#include "Components/SkeletalMeshComponent.h"

#pragma region Functions
AShotgun::AShotgun()
{
	// Set null class.
	SkeletalMeshShotgun = NULL;

	SetSkeletalMeshGun();
}
#pragma endregion

#pragma region SetFunctions.
void AShotgun::SetSkeletalMeshGun()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Shotgun(TEXT("/Game/MyAssets/MilitaryWeapSilver/Weapons/Shotgun_A"));
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> ShotgunAnimation(TEXT("/Game/MyCharacter/Hunk/Swat/Shotgun/Shotgun_Animation"));
	SkeletalMeshShotgun = Shotgun.Object;
	SkeletalMeshComponentGun->SetSkeletalMesh(SkeletalMeshShotgun);
	SkeletalMeshComponentGun->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	SkeletalMeshComponentGun->SetAnimInstanceClass(ShotgunAnimation.Object->GetAnimBlueprintGeneratedClass());
}
#pragma endregion