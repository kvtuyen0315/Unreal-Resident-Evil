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
	UPROPERTY(VisibleAnywhere)
	bool bIsTargetInSight;
	// The location last saw the target
	UPROPERTY(VisibleAnywhere)
	FVector LastKnowLocation;

	// Flag to chase the target, is lost sight, should check at last seen location
	UPROPERTY(VisibleAnywhere)
	bool bShouldChaseTarget;
public:
	UFUNCTION()
	void SetIsTargetInSight(bool Flag);
	UFUNCTION()
	bool IsTargetInSight() const;
	UFUNCTION()
	void SetLastKnowLocation(const FVector& Location);
	UFUNCTION()
	FVector GetLastKnownLocation() const;
	UFUNCTION()
	void SetShouldChaseTarget(bool Flag);
	UFUNCTION()
	bool ShouldChaseTarget() const;
};
