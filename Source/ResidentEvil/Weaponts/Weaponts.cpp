// Fill out your copyright notice in the Description page of Project Settings.

#include "Weaponts.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AWeaponts::AWeaponts()
{
	// Set null class.
	SceneComponentGun = NULL;
	SkeletalMeshComponentGun = NULL;

	SetDefaultScene();
	SetSkeletalMeshComponentGun();
}

#pragma region Set Functions.
void AWeaponts::SetDefaultScene()
{
	SceneComponentGun = CreateDefaultSubobject<USceneComponent>(TEXT("Default Scene"));
	SceneComponentGun->SetupAttachment(RootComponent);

}

void AWeaponts::SetSkeletalMeshComponentGun()
{
	SkeletalMeshComponentGun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Weapont"));
	SkeletalMeshComponentGun->SetupAttachment(SceneComponentGun);
	
}
#pragma endregion