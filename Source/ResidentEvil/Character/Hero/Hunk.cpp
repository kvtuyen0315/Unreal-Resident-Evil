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
	SpeedWalk (_Fzero),

	IsSprint	(false),
	IsCrouch	(false),
	IsFalling	(false),
	IsRifle		(false),
	IsAim		(false),
	IsFiring	(false)
{
	// Tuyển.
	// Set null class.
	CapsuleCollisionHunk = NULL;
	MeshHunk = NULL;
	SkeletalMeshHunk = NULL;
	SpaceCameraToHunk = NULL;
	FollowCamera = NULL;
	CharacterMovementHunk = NULL;

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
	CapsuleCollisionHunk = this->GetCapsuleComponent();
	CapsuleCollisionHunk->SetCapsuleSize(RADIUS_CAPSULE, HEIGHT_CAPSULE, true);
	CapsuleCollisionHunk->bHiddenInGame = false;
	
}

void AHunk::SetSkeletalMeshHunk()
{
	MeshHunk = this->GetMesh();
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh(TEXT("/Game/MyCharacter/Hero/genAssault"));
	SkeletalMeshHunk = skeletalMesh.Object;
	MeshHunk->SetSkeletalMesh(SkeletalMeshHunk);
	LocationSkeletalHunk = LOCALTION_SKELETAL_HUNK;
	RotationSkeletalHunk = ROTATION_SKELETAL_HUNK;
	MeshHunk->SetRelativeLocationAndRotation(LocationSkeletalHunk, RotationSkeletalHunk);

	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> animationBlueprint(TEXT("/Game/MyCharacter/Hero/HunkAnimation"));
	MeshHunk->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	MeshHunk->SetAnimInstanceClass(animationBlueprint.Object->GetAnimBlueprintGeneratedClass());
}

void AHunk::SetCameraFollowToHunk()
{
	SpaceCameraToHunk = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpaceCameraToHunk"));
	SpaceCameraToHunk->SetupAttachment(RootComponent);
	SpaceCameraToHunk->TargetArmLength = TARGET_ARM_LENGTH;
	LocationCamera = LOCATION_CAMERA;
	SpaceCameraToHunk->SetRelativeLocation(LocationCamera);
	SpaceCameraToHunk->bUsePawnControlRotation = true;
	SpaceCameraToHunk->SocketOffset.Y = SOCKET_OFFSET_Y;
	SpaceCameraToHunk->SocketOffset.Z = SOCKET_OFFSET_Z;

	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpaceCameraToHunk, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
}

void AHunk::SetCharacterMovement()
{
	CharacterMovementHunk = this->GetCharacterMovement();
	CharacterMovementHunk->bOrientRotationToMovement = true;
	CharacterMovementHunk->NavAgentProps.bCanCrouch = true;
	CharacterMovementHunk->MaxWalkSpeed = SpeedWalk = MAX_WALK_SPEED;
	CharacterMovementHunk->MaxWalkSpeedCrouched = MAX_WALK_CROUCH_SPEED;
}
#pragma endregion

#pragma region Get Functions.
bool AHunk::GetIsSprint()
{
	return IsSprint;
}

bool AHunk::GetIsCrouch()
{
	return IsCrouch;
}

bool AHunk::GetIsFalling()
{
	return IsFalling;
}

bool AHunk::GetIsRifle()
{
	return IsRifle;
}

bool AHunk::GetIsAim()
{
	return IsAim;
}

bool AHunk::GetIsFire()
{
	return IsFiring;
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

	IsFalling = CharacterMovementHunk->IsFalling();
	IsCrouch = CharacterMovementHunk->IsCrouching();

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
	PlayerInputComponent->BindAction("Equip Or UnEquip Weapont", IE_Pressed, this, &AHunk::PressedEquipOrUnEquipWeapont);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AHunk::PressedAim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AHunk::ReleasedAim);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHunk::PressedFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AHunk::ReleasedFire);

}

// Tuyển.
#pragma region Moving.
void AHunk::MoveForward(float value)
{
	if ((value < _Fzero) && (IsSprint))
	{
		return;
	}

	if ((this->Controller != NULL) && (value != _Fzero))
	{
		RotationHunk = this->Controller->GetControlRotation();
		YawRotationHunk = FRotator(_Fzero, RotationHunk.Yaw, _Fzero);
		DirectionMoving = FRotationMatrix(YawRotationHunk).GetUnitAxis(EAxis::X);

		CharacterMovementHunk->MaxWalkSpeed = UKismetMathLibrary::FInterpTo(CharacterMovementHunk->MaxWalkSpeed, SpeedWalk, Delta_Secons, 5.0f);
		CharacterMovementHunk->MaxWalkSpeedCrouched = UKismetMathLibrary::FInterpTo(CharacterMovementHunk->MaxWalkSpeedCrouched, MAX_WALK_CROUCH_SPEED, Delta_Secons, 5.0f);

		this->AddMovementInput(DirectionMoving, value, true);
	}
}

void AHunk::MoveRight(float value)
{
	if (IsSprint)
	{
		return;
	}

	if ((this->Controller != NULL) && (value != _Fzero))
	{
		RotationHunk = this->Controller->GetControlRotation();
		YawRotationHunk = FRotator(_Fzero, RotationHunk.Yaw, _Fzero);
		DirectionMoving = FRotationMatrix(YawRotationHunk).GetUnitAxis(EAxis::Y);

		CharacterMovementHunk->MaxWalkSpeed = UKismetMathLibrary::FInterpTo(CharacterMovementHunk->MaxWalkSpeed, SpeedWalk, Delta_Secons, 5.0f);
		CharacterMovementHunk->MaxWalkSpeedCrouched = UKismetMathLibrary::FInterpTo(CharacterMovementHunk->MaxWalkSpeedCrouched, MAX_WALK_CROUCH_SPEED, Delta_Secons, 5.0f);

		this->AddMovementInput(DirectionMoving, value, true);
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
	if (IsAim)
	{
		return;
	}

	IsSprint = true;
	SpeedWalk = MAX_WALK_SPRINT_SPEED;
	this->bUseControllerRotationYaw = true;
	CharacterMovementHunk->bOrientRotationToMovement = false;
}

void AHunk::ReleasedSprint()
{
	if (IsAim)
	{
		return;
	}

	IsSprint = false;
	IsRifle? SpeedWalk = MAX_WALK_RIFLE_SPEED : SpeedWalk = MAX_WALK_SPEED;
	this->bUseControllerRotationYaw = false;
	CharacterMovementHunk->bOrientRotationToMovement = true;
}

void AHunk::PressedCrouch()
{
	if (IsSprint)
	{
		return;
	}

	this->Crouch();

}

void AHunk::ReleasedCrouch()
{
	this->UnCrouch();

	if (IsSprint)
	{
		SpeedWalk = MAX_WALK_SPRINT_SPEED;
	}
	else
	{
		IsRifle? SpeedWalk = MAX_WALK_RIFLE_SPEED : SpeedWalk = MAX_WALK_SPEED;
	}
}

void AHunk::PressedEquipOrUnEquipWeapont()
{
	IsRifle = !IsRifle;

	if (!IsSprint)
	{
		IsRifle? SpeedWalk = MAX_WALK_RIFLE_SPEED : SpeedWalk = MAX_WALK_SPEED;
	}
}

void AHunk::PressedAim()
{
	if (!IsRifle || IsSprint)
	{
		return;
	}

	IsAim = true;
	this->bUseControllerRotationYaw = true;
	CharacterMovementHunk->bOrientRotationToMovement = false;
}

void AHunk::ReleasedAim()
{
	IsAim = false;
	this->bUseControllerRotationYaw = false;
	CharacterMovementHunk->bOrientRotationToMovement = true;
}

void AHunk::PressedFire()
{
	if (IsAim)
	{
		IsFiring = true;
	}
}

void AHunk::ReleasedFire()
{
	IsFiring = false;
}
#pragma endregion
