// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetHearingInfo.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UTargetHearingInfo : public UObject
{
	GENERATED_BODY()
	
public:
	UTargetHearingInfo();
private:
	// Is seeing target?
	UPROPERTY(VisibleAnywhere)
	bool bIsHearingTargetSound;

	// The location last saw the target
	UPROPERTY(VisibleAnywhere)
	FVector LastKnowLocation;

	// The time that AI heard sound, when heard the sound, reset to 0
	UPROPERTY(VisibleAnywhere)
	float TimeHeardSound;

public:
	UFUNCTION()
	void SetIsHearingTargetSound(bool Flag);
	UFUNCTION()
	bool IsHearingTargetSound() const;
	UFUNCTION()
	void SetLastKnowLocation(const FVector& Location);
	UFUNCTION()
	FVector GetLastKnownLocation() const;
	UFUNCTION()
	void SetTimeHeardSound(float Timestamp);
	UFUNCTION()
	float GetTimeHeardSound() const;
};
