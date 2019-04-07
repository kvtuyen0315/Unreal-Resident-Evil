// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetInSightInfo.h"

UTargetInSightInfo::UTargetInSightInfo() : bIsTargetInSight(false), LastKnowLocation(FVector::ZeroVector), bShouldChaseTarget(false)
{
	
}

void UTargetInSightInfo::SetIsTargetInSight(bool Flag)
{
	bIsTargetInSight = Flag;
}

bool UTargetInSightInfo::IsTargetInSight() const
{
	return bIsTargetInSight;
}

void UTargetInSightInfo::SetLastKnowLocation(const FVector& Location)
{
	LastKnowLocation = Location;
}

FVector UTargetInSightInfo::GetLastKnownLocation() const
{
	return LastKnowLocation;
}

void UTargetInSightInfo::SetShouldChaseTarget(bool Flag)
{
	bShouldChaseTarget = Flag;
}
bool UTargetInSightInfo::ShouldChaseTarget() const
{
	return bShouldChaseTarget;
}
