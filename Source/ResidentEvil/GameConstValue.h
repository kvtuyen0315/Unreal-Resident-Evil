﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// Tuyển.
/*Word*/
#define _Fzero (0.0f)
#define _Izero (0)

#pragma region Hunk.
/*SetCapsuleCollisionHunk*/
#define RADIUS_CAPSULE (34.0f)
#define HEIGHT_CAPSULE (88.0f)

/*SetSkeletalMeshHunk*/
#define	LOCALTION_SKELETAL_HUNK FVector(_Fzero, _Fzero, -83.0f)
#define ROTATION_SKELETAL_HUNK	FRotator(_Fzero, -90.0f, _Fzero)

/*SetCameraFollowToHunk*/
#define TARGET_ARM_LENGTH (130.0f)
#define LOCATION_CAMERA FVector(_Fzero, _Fzero, 60.0f)

/*SetCharacterMovement*/
#define MAX_WALK_SPEED (150.0f)

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
