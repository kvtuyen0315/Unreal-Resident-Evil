// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ResidentEvil/GameConstValue.h"
#include "HunkAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UHunkAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

//Tuyển.
#pragma region Variable.
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Speed")
		float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Direction")
		float Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pitch")
		float Pitch;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Sprint")
		bool IsSprint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Falling")
		bool IsFalling;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Aim")
		bool IsAim;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Aim")
		bool IsFiring;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Reload")
		bool IsReload;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enum Weaponts")
		EWeaponts eWeaponts;

private:
	FRotator HunkRotationAimOffset;

protected:
	class AHunk* Hunk;

#pragma endregion

// Tuyển.
#pragma region Functions.
public:
	UHunkAnimInstance();

	// Update animation.
	virtual void NativeUpdateAnimation(float DeltaTime) override;

#pragma endregion

	
};
