// Fill out your copyright notice in the Description page of Project Settings.

#include "Hunk.h"
#include "ResidentEvil/GameConstValue.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimBlueprint.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AHunk::AHunk() :
	// Float.
	_speedWalk (_Fzero),

	// Bool.
	_isSprint	(false),
	_isCrouch	(false),
	_isFalling	(false)
{
	// Tuyển.
	// Set null class.
	_capsuleCollisionHunk = NULL;
	_meshHunk = NULL;
	_skeletalMeshHunk = NULL;
	_spaceCameraToHunk = NULL;
	_followCamera = NULL;
	_characterMovementHunk = NULL;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Tuyển.
	SetRotationHunk();
	SetCapsuleCollisionHunk();
	SetSkeletalMeshHunk();
	SetCameraFollowToHunk();
	SetCharacterMovement();
}

// Tuyển.
#pragma region Set Functions.
void AHunk::SetRotationHunk()
{
	this->bUseControllerRotationPitch = false;
	this->bUseControllerRotationRoll = false;
	this->bUseControllerRotationYaw = false;
}

void AHunk::SetCapsuleCollisionHunk()
{
	_capsuleCollisionHunk = this->GetCapsuleComponent();
	_capsuleCollisionHunk->SetCapsuleSize(RADIUS_CAPSULE, HEIGHT_CAPSULE, true);
	_capsuleCollisionHunk->bHiddenInGame = false;
	
}

void AHunk::SetSkeletalMeshHunk()
{
	_meshHunk = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh(TEXT("/Game/MyCharacter/Hero/genAssault"));
	_skeletalMeshHunk = skeletalMesh.Object;
	_meshHunk->SetSkeletalMesh(_skeletalMeshHunk);
	_locationSkeletalHunk = LOCALTION_SKELETAL_HUNK;
	_rotationSkeletalHunk = ROTATION_SKELETAL_HUNK;
	_meshHunk->SetRelativeLocationAndRotation(_locationSkeletalHunk, _rotationSkeletalHunk);

	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> animationBlueprint(TEXT("/Game/MyCharacter/Hero/HunkAnimation"));
	_meshHunk->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	_meshHunk->SetAnimInstanceClass(animationBlueprint.Object->GetAnimBlueprintGeneratedClass());
}

void AHunk::SetCameraFollowToHunk()
{
	_spaceCameraToHunk = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpaceCameraToHunk"));
	_spaceCameraToHunk->SetupAttachment(RootComponent);
	_spaceCameraToHunk->TargetArmLength = TARGET_ARM_LENGTH;
	_locationCamera = LOCATION_CAMERA;
	_spaceCameraToHunk->SetRelativeLocation(_locationCamera);
	_spaceCameraToHunk->bUsePawnControlRotation = true;
	
	_followCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	_followCamera->SetupAttachment(_spaceCameraToHunk, USpringArmComponent::SocketName);
	_followCamera->bUsePawnControlRotation = false;
}

void AHunk::SetCharacterMovement()
{
	_characterMovementHunk = this->GetCharacterMovement();
	_characterMovementHunk->bOrientRotationToMovement = true;
	_characterMovementHunk->NavAgentProps.bCanCrouch = true;
	_characterMovementHunk->MaxWalkSpeed = _speedWalk = MAX_WALK_SPEED;
	_characterMovementHunk->MaxWalkSpeedCrouched = MAX_WALK_CROUCH_SPEED;
}
#pragma endregion

#pragma region Get Functions.
bool AHunk::GetIsSprint()
{
	return _isSprint;
}

bool AHunk::GetIsCrouch()
{
	return _isCrouch;
}

bool AHunk::GetIsFalling()
{
	return _isFalling;
}
#pragma endregion


// Called when the game starts or when spawned
void AHunk::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	_isFalling = _characterMovementHunk->IsFalling();
	_isCrouch = _characterMovementHunk->IsCrouching();

}

// Called to bind functionality to input
void AHunk::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Input Axis moving.
	PlayerInputComponent->BindAxis("Move Forward", this, &AHunk::MoveForward);
	PlayerInputComponent->BindAxis("Move Right", this, &AHunk::MoveRight);
	PlayerInputComponent->BindAxis("Look Pitch", this, &AHunk::LookPicth);
	PlayerInputComponent->BindAxis("Look Yaw", this, &AHunk::LookYaw);

	// Input keycode.
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AHunk::PressedSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AHunk::ReleasedSprint);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AHunk::PressedCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AHunk::ReleasedCrouch);
}

// Tuyển.
#pragma region Moving.
void AHunk::MoveForward(float value)
{
	if ((this->Controller != NULL) && (value != _Fzero))
	{
		_rotationHunk = this->Controller->GetControlRotation();
		_yawRotationHunk = FRotator(_Fzero, _rotationHunk.Yaw, _Fzero);
		_directionMoving = FRotationMatrix(_yawRotationHunk).GetUnitAxis(EAxis::X);

		_characterMovementHunk->MaxWalkSpeed = UKismetMathLibrary::FInterpTo(_characterMovementHunk->MaxWalkSpeed, _speedWalk, Delta_Secons, 5.0f);
		_characterMovementHunk->MaxWalkSpeedCrouched = UKismetMathLibrary::FInterpTo(_characterMovementHunk->MaxWalkSpeedCrouched, MAX_WALK_CROUCH_SPEED, Delta_Secons, 5.0f);

		this->AddMovementInput(_directionMoving, value, true);
	}
}

void AHunk::MoveRight(float value)
{
	if ((this->Controller != NULL) && (value != _Fzero))
	{
		_rotationHunk = this->Controller->GetControlRotation();
		_yawRotationHunk = FRotator(_Fzero, _rotationHunk.Yaw, _Fzero);
		_directionMoving = FRotationMatrix(_yawRotationHunk).GetUnitAxis(EAxis::Y);

		_characterMovementHunk->MaxWalkSpeed = UKismetMathLibrary::FInterpTo(_characterMovementHunk->MaxWalkSpeed, _speedWalk, Delta_Secons, 5.0f);
		_characterMovementHunk->MaxWalkSpeedCrouched = UKismetMathLibrary::FInterpTo(_characterMovementHunk->MaxWalkSpeedCrouched, MAX_WALK_CROUCH_SPEED, Delta_Secons, 5.0f);

		this->AddMovementInput(_directionMoving, value, true);
	}
}

void AHunk::LookPicth(float rate)
{
	if (rate != _Fzero)
	{
		this->AddControllerPitchInput(rate * LOOKRATE * Delta_Secons);
	}
}

void AHunk::LookYaw(float rate)
{
	if (rate != _Fzero)
	{
		this->AddControllerYawInput(rate * LOOKRATE * Delta_Secons);
	}
}

void AHunk::PressedSprint()
{
	_isSprint = true;
	_speedWalk = MAX_WALK_SPRINT_SPEED;
}

void AHunk::ReleasedSprint()
{
	_isSprint = false;
	_speedWalk = MAX_WALK_SPEED;
}

void AHunk::PressedCrouch()
{
	if (_isSprint)
	{
		return;
	}

	this->Crouch();

}

void AHunk::ReleasedCrouch()
{
	this->UnCrouch();

	if (_isSprint)
	{
		_speedWalk = MAX_WALK_SPRINT_SPEED;
	}
	else
	{
		_speedWalk = MAX_WALK_SPEED;
	}
}
#pragma endregion
