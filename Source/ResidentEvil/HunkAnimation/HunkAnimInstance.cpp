// Fill out your copyright notice in the Description page of Project Settings.

#include "HunkAnimInstance.h"
#include "ResidentEvil/Character/Hero/Hunk.h"
#include "EngineUtils.h"
#include "Kismet/KismetMathLibrary.h"

UHunkAnimInstance::UHunkAnimInstance() :
	Speed		(_Fzero),
	Direction	(_Fzero),
	Pitch		(_Fzero),

	IsSprint	(false),
	IsFalling	(false),
	IsAim		(false),
	IsFiring	(false),
	IsReload	(false),

	eWeaponts (EWeaponts::NONE)
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
		eWeaponts = this->Hunk->GetEWeaponts();
		Speed = this->Hunk->GetVelocity().Size();
		IsSprint = this->Hunk->GetIsSprint();
		IsFalling = this->Hunk->GetIsFalling();
		IsAim = this->Hunk->GetIsAim();
		IsFiring = this->Hunk->GetIsFire();
		IsReload = this->Hunk->GetIsReload();

		//this->TryGetPawnOwner()->NotifyActorBeginOverlap(this->Hunk);

		HunkRotationAimOffset = UKismetMathLibrary::NormalizedDeltaRotator(this->Hunk->GetControlRotation(), this->Hunk->GetActorRotation());
		Pitch = HunkRotationAimOffset.Pitch;

		Direction = this->CalculateDirection(this->Hunk->GetVelocity(), this->Hunk->GetActorRotation());
	}
}
