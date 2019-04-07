// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterStat.h"
#include "MonsterAttackPattern.h"
#include "MonsterBase.h"

UMonsterStat::UMonsterStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UMonsterStat::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	static EMonsterAttackType TempKey;
	static TArray<EMonsterAttackType> ArrayKeys;
	ArrayKeys.Reset();
	MapAttackDelay.GetKeys(ArrayKeys);
	for (int32 i = 0; i < ArrayKeys.Num(); i++)
	{
		TempKey = ArrayKeys[i];
		if (MapAttackDelay[TempKey] > 0.f)
		{
			MapAttackDelay[TempKey] -= DeltaTime;
			// Maybe no need, just in case someone check delay == 0.f
			if (MapAttackDelay[TempKey] < 0.f)
			{
				MapAttackDelay[TempKey] = 0.f;
			}
		}
	}
}

void UMonsterStat::SetOwningMonster(AMonsterBase * Monster, bool bInitData)
{
	SetOwningMonster(Monster);
	if (bInitData)
	{
		SetAttackDelayDefault(Monster->GetMonsterType());
	}
}

void UMonsterStat::SetAttackDelayDefault(EMonsterType Type)
{
	MapAttackDelay.Reset(); // just make sure
	const TArray<UMonsterAttackPattern*>& ArrayAttackPattern = UMonsterAttackPattern::GetMonsterAttackPatternArray(Type);
	for (int32 i = 0; i < ArrayAttackPattern.Num(); i++)
	{
		UMonsterAttackPattern* Info = ArrayAttackPattern[i];
		MapAttackDelay.Add(Info->GetAttackType(), 0.f);
	}
}

void UMonsterStat::SetAttackDelay(EMonsterAttackType Type)
{
	const TArray<UMonsterAttackPattern*>& ArrayAttackPattern = UMonsterAttackPattern::GetMonsterAttackPatternArray(OwningMonster->GetMonsterType());
	for (int32 i = 0; i < ArrayAttackPattern.Num(); i++)
	{
		UMonsterAttackPattern* Info = ArrayAttackPattern[i];
		if (Info->GetAttackType() == Type)
		{
			MapAttackDelay[Type] = Info->GetAttackDelay();
			break;
		}
	}
}

void UMonsterStat::SetAttackDelay(EMonsterAttackType Type, float Delay)
{
	MapAttackDelay[Type] = Delay;
}

float UMonsterStat::GetAttackDelay(EMonsterAttackType AttackType)
{
	if (MapAttackDelay.Contains(AttackType))
	{
		return MapAttackDelay[AttackType];
	}
	return 0.0f;
}
