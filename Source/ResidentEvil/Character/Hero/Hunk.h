// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ResidentEvil/GameConstValue.h"
#include "Hunk.generated.h"

UCLASS()
class RESIDENTEVIL_API AHunk : public ACharacter
{
	GENERATED_BODY()

#pragma region Variable.
private:
	float SpeedWalk;

	bool IsSprint;
	bool IsFalling;
	bool IsAim;
	bool IsFiring;
	bool IsReload;

private:
	FVector LocationSkeletalHunk;
	FVector LocationCamera;
	FVector DirectionMoving;

	FRotator RotationSkeletalHunk;
	FRotator RotationHunk;
	FRotator YawRotationHunk;

	FAttachmentTransformRules* AttachRules;

	UCapsuleComponent* CapsuleCollisionHunk;
	USkeletalMesh* SkeletalMeshHunk;
	USkeletalMeshComponent* MeshHunk;
	UCharacterMovementComponent* CharacterMovementHunk;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpaceCameraToHunk;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	TSubclassOf<class AAssault_Rifle> AssaultRifle;
	class AAssault_Rifle* SpawnAssaultRifle;

	TSubclassOf<class AShotgun> Shotgun;
	class AShotgun* SpawnShotgun;

	TSubclassOf<class APistol> Pistol;
	class APistol* SpawnPistol;

private:
	EWeaponts eWeaponts;

#pragma endregion

#pragma region Functions.
public:
	// Sets default values for this character's properties
	AHunk();

	// Tuyển.
#pragma region Set Functions.
private:
	void SetRotationHunk();
	void SetCapsuleCollisionHunk();
	void SetSkeletalMeshHunk();
	void SetCameraFollowToHunk();
	void SetCharacterMovement();
	void SetCameraArmLengthNormal(float DeltaTime);
	void SetCameraArmLengthToAim(float DeltaTime);
	void SetAssaultRifle();
	void SetShotgun();
	void SetPistol();
#pragma endregion

#pragma region Get Functions.
public:
	bool GetIsSprint();
	bool GetIsFalling();
	bool GetIsAim();
	bool GetIsFire();
	bool GetIsReload();
	EWeaponts GetEWeaponts();
#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region Spawn weaponts.
private:
	void SpawnGunAssaultRifle();
	void SpawnGunShotgun();
	void SpawnGunPistol();
#pragma endregion

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Tuyển.
#pragma region Moving.
private:
	void MoveForward(float value);
	void MoveRight(float value);

	void LookPicth(float rate);
	void LookYaw(float rate);

	void PressedSprint();
	void ReleasedSprint();

	void PressedEquipOrUnEquipWeapont();

	void PressedAim();
	void ReleasedAim();

	void PressedFire();
	void ReleasedFire();

	void PressedReload();

	void PressedNumber1();
	void PressedNumber2();
	void PressedNumber3();
#pragma endregion

#pragma endregion
};
