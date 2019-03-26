// Fill out your copyright notice in the Description page of Project Settings.

#include "HunkAnimInstance.h"
#include "ResidentEvil/GameConstValue.h"
#include "ResidentEvil/Character/Hero/Hunk.h"
#include "EngineUtils.h"

UHunkAnimInstance::UHunkAnimInstance() :
	// Float.
	_speed		(_Fzero),
	_direction	(_Fzero)
{
	// Set null class.
	_hunk = NULL;
}

void UHunkAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	for (TActorIterator<AHunk> hunk(this->GetWorld()); hunk; ++hunk)
	{
		_hunk = *hunk;
		_speed = _hunk->GetVelocity().Size();

	}
}
