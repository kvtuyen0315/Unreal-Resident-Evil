// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
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
	// Float.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Speed")
		float _speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Direction")
		float _direction;

	// Bool.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Sprint")
		bool _isSprint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Crouch")
		bool _isCrouch;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Is Falling")
		bool _isFalling;

	// Class.
	class AHunk *_hunk;

#pragma endregion

// Tuyển.
#pragma region Functions.
public:
	UHunkAnimInstance();

	// Update animation.
	virtual void NativeUpdateAnimation(float DeltaTime) override;

#pragma endregion

	
};
