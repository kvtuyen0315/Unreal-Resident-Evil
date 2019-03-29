// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetInSightInfo.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UTargetInSightInfo : public UObject
{
	GENERATED_BODY()
	
public:
	UTargetInSightInfo();
private:
	// Is seeing target?
	UPROPERTY(VisibleDefaultsOnly)
	bool bIsTargetInSight;
	// The location last saw the target
	UPROPERTY(VisibleDefaultsOnly)
	FVector LastKnowLocation;
public:
	UFUNCTION()
	void SetIsTargetInSight(bool Flag)
	{
		bIsTargetInSight = Flag;
	}
	UFUNCTION()
	bool IsTargetInSight() const
	{
		return bIsTargetInSight;
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
