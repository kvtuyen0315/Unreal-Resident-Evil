// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetHearingInfo.h"

UTargetHearingInfo::UTargetHearingInfo() : bIsHearingTargetSound(false), LastKnowLocation(FVector::ZeroVector)
{

}

void UTargetHearingInfo::SetIsHearingTargetSound(bool Flag)
{
	bIsHearingTargetSound = Flag;
}

bool UTargetHearingInfo::IsHearingTargetSound() const
{
	return bIsHearingTargetSound;
}

void UTargetHearingInfo::SetLastKnowLocation(const FVector& Location)
{
	LastKnowLocation = Location;
}

FVector UTargetHearingInfo::GetLastKnownLocation() const
{
	return LastKnowLocation;
}

void UTargetHearingInfo::SetTimeHeardSound(float Timestamp)
{
	TimeHeardSound = Timestamp;
}

float UTargetHearingInfo::GetTimeHeardSound() const
{
	return TimeHeardSound;
}

