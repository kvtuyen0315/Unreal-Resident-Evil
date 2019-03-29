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
	UPROPERTY(VisibleDefaultsOnly)
	bool bIsHearingTargetSound;
	// The location last saw the target
	UPROPERTY(VisibleDefaultsOnly)
	FVector LastKnowLocation;
public:
	UFUNCTION()
	void SetIsHearingTargetSound(bool Flag)
	{
		bIsHearingTargetSound = Flag;
	}
	UFUNCTION()
	bool IsHearingTargetSound() const
	{
		return bIsHearingTargetSound;
	}
	UFUNCTION()
	void SetLastKnowLocation(const FVector& Location)
	{
		LastKnowLocation = Location;
	}
	UFUNCTION()
	FVector GetLastKnownLocation()
	{
		return LastKnowLocation;
	}
	
	
};
