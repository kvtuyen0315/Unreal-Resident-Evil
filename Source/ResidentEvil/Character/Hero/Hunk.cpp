// Fill out your copyright notice in the Description page of Project Settings.

#include "Hunk.h"
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
#include "ResidentEvil/Weaponts/Weaponts.h"
#include "ResidentEvil/Weaponts/Rifle/Assault_Rifle.h"
#include "ResidentEvil/Weaponts/Shotgun/Shotgun.h"
#include "ResidentEvil/Weaponts/Pistol/Pistol.h"
#include "Perception/AISense_Hearing.h"
#include "Structures/GameEnumName.h"

// Sets default values
AHunk::AHunk() :
	SpeedWalk (_Fzero),

	IsSprint	(false),
	IsFalling	(false),
	IsAim		(false),
	IsFiring	(false),
	IsReload	(false),

	eWeaponts	(EWeaponts::NONE)
{
	// Tuyển.
	// Set null class.
	CapsuleCollisionHunk = NULL;
	MeshHunk = NULL;
	SkeletalMeshHunk = NULL;
	SpaceCameraToHunk = NULL;
	FollowCamera = NULL;
	CharacterMovementHunk = NULL;
	SpawnAssaultRifle = NULL;
	SpawnShotgun = NULL;
	SpawnPistol = NULL;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Tuyển.
	SetRotationHunk();
	SetCapsuleCollisionHunk();
	SetSkeletalMeshHunk();
	SetCameraFollowToHunk();
	SetCharacterMovement();
	SetAssaultRifle();
	SetShotgun();
	SetPistol();
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
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh(TEXT("/Game/MyCharacter/Hunk/Swat/Hunk"));
	SkeletalMeshHunk = skeletalMesh.Object;
	MeshHunk->SetSkeletalMesh(SkeletalMeshHunk);
	LocationSkeletalHunk = LOCALTION_SKELETAL_HUNK;
	RotationSkeletalHunk = ROTATION_SKELETAL_HUNK;
	MeshHunk->SetRelativeLocationAndRotation(LocationSkeletalHunk, RotationSkeletalHunk);
	
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> AnimationBlueprintAsset(TEXT("/Game/MyCharacter/Hunk/Swat/Hunk_Animation"));
	if (AnimationBlueprintAsset.Succeeded())
	{
		MeshHunk->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		MeshHunk->SetAnimInstanceClass(AnimationBlueprintAsset.Object->GeneratedClass);
	}
}

void AHunk::SetCameraFollowToHunk()
{
	SpaceCameraToHunk = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpaceCameraToHunk"));
	SpaceCameraToHunk->SetupAttachment(RootComponent);
	SpaceCameraToHunk->TargetArmLength = TARGET_ARM_LENGTH_NORMAL;
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
}

void AHunk::SetCameraArmLengthNormal(float DeltaTime)
{
	SpaceCameraToHunk->TargetArmLength = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->TargetArmLength, TARGET_ARM_LENGTH_NORMAL, DeltaTime, 10.0f);
	//SpaceCameraToHunk->SocketOffset.Y = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->SocketOffset.Y, SOCKET_OFFSET_Y, DeltaTime, 15.0f);
	SpaceCameraToHunk->SocketOffset.Z = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->SocketOffset.Z, SOCKET_OFFSET_Z, DeltaTime, 15.0f);
}

void AHunk::SetCameraArmLengthToAim(float DeltaTime)
{
	if ((eWeaponts == EWeaponts::NONE) || IsSprint)
	{
		return;
	}

	SpaceCameraToHunk->TargetArmLength = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->TargetArmLength, TARGET_ARM_LENGTH_TO_AIM, DeltaTime, 10.0f);
	//SpaceCameraToHunk->SocketOffset.Y = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->SocketOffset.Y, SOCKET_OFFSET_TO_AIM_Y, DeltaTime, 15.0f);
	SpaceCameraToHunk->SocketOffset.Z = UKismetMathLibrary::FInterpTo(SpaceCameraToHunk->SocketOffset.Z, SOCKET_OFFSET_TO_AIM_Z, DeltaTime, 15.0f);
}

void AHunk::SetAssaultRifle()
{
	static ConstructorHelpers::FClassFinder<AAssault_Rifle> AssaultRifleActor(TEXT("/Script/ResidentEvil.Assault_Rifle"));
	this->AssaultRifle = AssaultRifleActor.Class;
}

void AHunk::SetShotgun()
{
	static ConstructorHelpers::FClassFinder<AShotgun> ShotgunActor(TEXT("/Script/ResidentEvil.Shotgun"));
	this->Shotgun = ShotgunActor.Class;
}

void AHunk::SetPistol()
{
	static ConstructorHelpers::FClassFinder<APistol> PistolActor(TEXT("/Script/ResidentEvil.Pistol"));
	this->Pistol = PistolActor.Class;
}
#pragma endregion

#pragma region Get Functions.
bool AHunk::GetIsSprint()
{
	return IsSprint;
}

bool AHunk::GetIsFalling()
{
	return IsFalling;
}

bool AHunk::GetIsAim()
{
	return IsAim;
}

bool AHunk::GetIsFire()
{
	return IsFiring;
}

bool AHunk::GetIsReload()
{
	return IsReload;
}

EWeaponts AHunk::GetEWeaponts()
{
	return eWeaponts;
}
#pragma endregion

// Called when the game starts or when spawned
void AHunk::BeginPlay()
{
	Super::BeginPlay();

	// Spawn Weaponts.
	SpawnGunAssaultRifle();
	SpawnGunShotgun();
	SpawnGunPistol();
}

#pragma region Spawn Waeponts.
void AHunk::SpawnGunAssaultRifle()
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Owner = this;
	SpawnParameters.Instigator = this->Instigator;
	SpawnAssaultRifle = this->GetWorld()->SpawnActor<AAssault_Rifle>(AssaultRifle, SpawnParameters);

	if (SpawnAssaultRifle)
	{
		SpawnAssaultRifle->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Assault_Rifle_Slot"));
	}

}

void AHunk::SpawnGunShotgun()
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Owner = this;
	SpawnParameters.Instigator = this->Instigator;
	SpawnShotgun = this->GetWorld()->SpawnActor<AShotgun>(Shotgun, SpawnParameters);

	if (SpawnShotgun)
	{
		SpawnShotgun->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Shotgun_Slot"));
	}
}

void AHunk::SpawnGunPistol()
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Owner = this;
	SpawnParameters.Instigator = this->Instigator;
	SpawnPistol = this->GetWorld()->SpawnActor<APistol>(Pistol, SpawnParameters);

	if (SpawnPistol)
	{
		SpawnPistol->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Pistol_Slot"));
	}

}
#pragma endregion


// Called every frame
void AHunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	IsFalling = CharacterMovementHunk->IsFalling();

	if (IsAim)
	{
		SetCameraArmLengthToAim(DeltaTime);
	}
	else
	{
		SetCameraArmLengthNormal(DeltaTime);
	}

	// Danny test noise
	if (IsSprint && this->GetVelocity().SizeSquared() > 0)
	{
		UAISense_Hearing::ReportNoiseEvent(this, GetActorLocation(), 1.0, this);
	}
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
	PlayerInputComponent->BindAction("Equip Or UnEquip Weapont", IE_Pressed, this, &AHunk::PressedEquipOrUnEquipWeapont);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AHunk::PressedAim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AHunk::ReleasedAim);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHunk::PressedFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AHunk::ReleasedFire);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AHunk::PressedReload);
	PlayerInputComponent->BindAction("Number 1", IE_Pressed, this, &AHunk::PressedNumber1);
	PlayerInputComponent->BindAction("Number 2", IE_Pressed, this, &AHunk::PressedNumber2);
	PlayerInputComponent->BindAction("Number 3", IE_Pressed, this, &AHunk::PressedNumber3);

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

		this->AddMovementInput(DirectionMoving, value, true);
	}
}

void AHunk::MoveRight(float value)
{
	if (IsSprint) return;

	if ((this->Controller != NULL) && (value != _Fzero))
	{
		RotationHunk = this->Controller->GetControlRotation();
		YawRotationHunk = FRotator(_Fzero, RotationHunk.Yaw, _Fzero);
		DirectionMoving = FRotationMatrix(YawRotationHunk).GetUnitAxis(EAxis::Y);

		CharacterMovementHunk->MaxWalkSpeed = UKismetMathLibrary::FInterpTo(CharacterMovementHunk->MaxWalkSpeed, SpeedWalk, Delta_Secons, 5.0f);

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
	if (IsAim) return;

	IsSprint = true;
	SpeedWalk = MAX_WALK_SPRINT_SPEED;
	this->bUseControllerRotationYaw = true;
	CharacterMovementHunk->bOrientRotationToMovement = false;
}

void AHunk::ReleasedSprint()
{
	if (IsAim) return;

	IsSprint = false;

	eWeaponts == EWeaponts::NONE? SpeedWalk = MAX_WALK_SPEED : SpeedWalk = MAX_WALK_RIFLE_SPEED;

	this->bUseControllerRotationYaw = false;
	CharacterMovementHunk->bOrientRotationToMovement = true;
}

void AHunk::PressedEquipOrUnEquipWeapont()
{
	eWeaponts = EWeaponts::NONE;

	SpawnAssaultRifle->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Assault_Rifle_Slot"));
	SpawnShotgun->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Shotgun_Slot"));
	SpawnPistol->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Pistol_Slot"));

	if (IsAim) return;

	if (!IsSprint) SpeedWalk = MAX_WALK_SPEED;
	
}

void AHunk::PressedAim()
{
	if ((eWeaponts == EWeaponts::NONE) || IsSprint)
	{
		return;
	}

	IsAim = true;
	this->bUseControllerRotationYaw = true;
	CharacterMovementHunk->bOrientRotationToMovement = false;

	// Fire Event Player Press Aim
	if (OnPressAim.IsBound())
	{
		OnPressAim.Broadcast();
	}
}

void AHunk::ReleasedAim()
{
	IsAim = false;
	this->bUseControllerRotationYaw = false;
	CharacterMovementHunk->bOrientRotationToMovement = true;

	// Fire Event Player Release Aim
	if (OnReleaseAim.IsBound())
	{
		OnReleaseAim.Broadcast();
	}
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

void AHunk::PressedReload()
{
	IsReload = true;
	
}

void AHunk::PressedNumber1()
{
	IsFiring = false;

	if (!IsSprint) SpeedWalk = MAX_WALK_RIFLE_SPEED;
	
	eWeaponts = EWeaponts::PISTOL;

	if (eWeaponts == EWeaponts::PISTOL)
	{
		SpawnPistol->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Hold_Pistol"));

		SpawnAssaultRifle->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Assault_Rifle_Slot"));
		SpawnShotgun->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Shotgun_Slot"));
	}
}

void AHunk::PressedNumber2()
{
	IsFiring = false;

	if (!IsSprint) SpeedWalk = MAX_WALK_RIFLE_SPEED;

	eWeaponts = EWeaponts::SHOTGUN;

	if (eWeaponts == EWeaponts::SHOTGUN)
	{
		SpawnShotgun->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Hold_Shotgun"));

		SpawnAssaultRifle->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Assault_Rifle_Slot"));
		SpawnPistol->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Pistol_Slot"));
	}
}

void AHunk::PressedNumber3()
{
	IsFiring = false;

	if (!IsSprint) SpeedWalk = MAX_WALK_RIFLE_SPEED;

	eWeaponts = EWeaponts::RIFLE;

	if (eWeaponts == EWeaponts::RIFLE)
	{
		SpawnAssaultRifle->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Hold_Assault_Rilfe"));

		SpawnShotgun->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Shotgun_Slot"));
		SpawnPistol->AttachToComponent(MeshHunk, AttachRules->KeepRelativeTransform, FName("Pistol_Slot"));
	}
}
#pragma endregion
