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
	// Float.
	float _speedWalk;

	// Bool.
	bool _isSprint;
	bool _isCrouch;
	bool _isFalling;

	// FVector.
	FVector _locationSkeletalHunk;
	FVector _locationCamera;
	FVector _directionMoving;

	// FRotator.
	FRotator _rotationSkeletalHunk;
	FRotator _rotationHunk;
	FRotator _yawRotationHunk;

	// Class.
	UCapsuleComponent *_capsuleCollisionHunk;
	USkeletalMesh *_skeletalMeshHunk;
	USkeletalMeshComponent *_meshHunk;
	UCharacterMovementComponent *_characterMovementHunk;

	class USpringArmComponent *_spaceCameraToHunk;
	class UCameraComponent *_followCamera;

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
#pragma endregion

#pragma endregion
};
