// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// Tuyển.
/*Word*/
#define _Fzero (0.0f)
#define _Izero (0)
#define Delta_Secons GetWorld()->DeltaTimeSeconds

#pragma region Hunk.
/*SetCapsuleCollisionHunk*/
#define RADIUS_CAPSULE (34.0f)
#define HEIGHT_CAPSULE (88.0f)

/*SetSkeletalMeshHunk*/
#define	LOCALTION_SKELETAL_HUNK FVector(_Fzero, _Fzero, -90.0f)
#define ROTATION_SKELETAL_HUNK	FRotator(_Fzero, -90.0f, _Fzero)

/*SetCameraFollowToHunk*/
#define TARGET_ARM_LENGTH_NORMAL (130.0f)
#define TARGET_ARM_LENGTH_TO_AIM (40.0f)
#define SOCKET_OFFSET_Y (50.0f)
#define SOCKET_OFFSET_TO_AIM_Y (55.0f)
#define SOCKET_OFFSET_Z (10.0f)
#define SOCKET_OFFSET_TO_AIM_Z (10.0f)
#define RELATIVE_LOCATION_Z (40.0f)
#define LOCATION_CAMERA FVector(_Fzero, _Fzero, RELATIVE_LOCATION_Z)

/*SetCharacterMovement*/
#define MAX_WALK_SPEED (150.0f)
#define MAX_WALK_RIFLE_SPEED (200.0)
#define MAX_WALK_SPRINT_SPEED (400.0f)

/*LookPicth & LookYaw*/
#define LOOKRATE (45.0f)

#pragma endregion

#pragma region Enum Value.
/*Weaponts*/
UENUM(BlueprintType)
enum class EWeaponts : uint8
{
	PISTOL,
	RIFLE,
	SHOTGUN,
	NONE
};
#pragma endregion

/**
 * 
 */
class RESIDENTEVIL_API GameConstValue
{
public:
	GameConstValue();
	~GameConstValue();
};
