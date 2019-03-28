// Fill out your copyright notice in the Description page of Project Settings.

#include "HunkAnimInstance.h"
#include "ResidentEvil/GameConstValue.h"
#include "ResidentEvil/Character/Hero/Hunk.h"
#include "EngineUtils.h"

UHunkAnimInstance::UHunkAnimInstance() :
	Speed		(_Fzero),
	Direction	(_Fzero),

	IsSprint	(false),
	IsCrouch	(false),
	IsFalling	(false),
	IsRifle		(false),
	IsAim		(false),
	IsFiring	(false)

{
	// Set null class.
	Hunk = NULL;
}

void UHunkAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	for (TActorIterator<AHunk> Hunk(this->GetWorld()); Hunk; ++Hunk)
	{
		this->Hunk = *Hunk;
		Speed = this->Hunk->GetVelocity().Size();
		IsSprint = this->Hunk->GetIsSprint();
		IsCrouch = this->Hunk->GetIsCrouch();
		IsFalling = this->Hunk->GetIsFalling();
		IsRifle = this->Hunk->GetIsRifle();
		IsAim = this->Hunk->GetIsAim();
		IsFiring = this->Hunk->GetIsFire();
		Direction = this->CalculateDirection(this->Hunk->GetVelocity(), this->Hunk->GetActorRotation());
	}
}
