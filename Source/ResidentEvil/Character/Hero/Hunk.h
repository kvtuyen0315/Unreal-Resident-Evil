// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hunk.generated.h"

UCLASS()
class RESIDENTEVIL_API AHunk : public ACharacter
{
	GENERATED_BODY()

#pragma region Variable.
private:
	float SpeedWalk;

	bool IsSprint;
	bool IsCrouch;
	bool IsFalling;
	bool IsRifle;
	bool IsAim;
	bool IsFiring;

private:
	FVector LocationSkeletalHunk;
	FVector LocationCamera;
	FVector DirectionMoving;

	FRotator RotationSkeletalHunk;
	FRotator RotationHunk;
	FRotator YawRotationHunk;

	UCapsuleComponent *CapsuleCollisionHunk;
	USkeletalMesh *SkeletalMeshHunk;
	USkeletalMeshComponent *MeshHunk;
	UCharacterMovementComponent *CharacterMovementHunk;

	class USpringArmComponent *SpaceCameraToHunk;
	class UCameraComponent *FollowCamera;

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
#pragma endregion

#pragma region Get Functions.
public:
	bool GetIsSprint();
	bool GetIsCrouch();
	bool GetIsFalling();
	bool GetIsRifle();
	bool GetIsAim();
	bool GetIsFire();
#pragma endregion


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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

	void PressedCrouch();
	void ReleasedCrouch();

	void PressedEquipOrUnEquipWeapont();

	void PressedAim();
	void ReleasedAim();

	void PressedFire();
	void ReleasedFire();
#pragma endregion

#pragma endregion
};
