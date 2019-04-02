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
#define	LOCALTION_SKELETAL_HUNK FVector(_Fzero, _Fzero, -83.0f)
#define ROTATION_SKELETAL_HUNK	FRotator(_Fzero, -90.0f, _Fzero)

/*SetCameraFollowToHunk*/
#define TARGET_ARM_LENGTH (130.0f)
#define SOCKET_OFFSET_Y (45.0f)
#define SOCKET_OFFSET_Z (10.0f)
#define LOCATION_CAMERA FVector(_Fzero, _Fzero, 60.0f)

/*SetCharacterMovement*/
#define MAX_WALK_SPEED (150.0f)
#define MAX_WALK_RIFLE_SPEED (200.0)
#define MAX_WALK_SPRINT_SPEED (400.0f)
#define MAX_WALK_CROUCH_SPEED (100.0f)

// Zombie Configuration
// 0.1m/s
#define ZOMBIE_WALK_SPEED (100.f)
// 0.08m
#define ZOMBIE_ATTACK_RANGE (80.f)
// In second
#define ZOMBIE_TIME_FOLLOW_SOUND (10.f)
// end

/*LookPicth & LookYaw*/
#define LOOKRATE (45.0f)

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
