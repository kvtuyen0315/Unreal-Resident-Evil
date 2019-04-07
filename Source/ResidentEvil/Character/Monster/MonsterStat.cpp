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
	MapAttackCoolDown.GetKeys(ArrayKeys);
	for (int32 i = 0; i < ArrayKeys.Num(); i++)
	{
		TempKey = ArrayKeys[i];
		if (MapAttackCoolDown[TempKey] > 0.f)
		{
			MapAttackCoolDown[TempKey] -= DeltaTime;
			// Maybe no need, just in case someone check delay == 0.f
			if (MapAttackCoolDown[TempKey] < 0.f)
			{
				MapAttackCoolDown[TempKey] = 0.f;
			}
		}
	}
}

void UMonsterStat::SetOwningMonster(AMonsterBase * Monster, bool bInitData)
{
	SetOwningMonster(Monster);
	if (bInitData)
	{
		SetAttackCoolDownDefault(Monster->GetMonsterType());
	}
}

void UMonsterStat::SetAttackCoolDownDefault(EMonsterType Type)
{
	MapAttackCoolDown.Reset(); // just make sure
	const TArray<UMonsterAttackPattern*>& ArrayAttackPattern = UMonsterAttackPattern::GetMonsterAttackPatternArray(Type);
	for (int32 i = 0; i < ArrayAttackPattern.Num(); i++)
	{
		UMonsterAttackPattern* Info = ArrayAttackPattern[i];
		MapAttackCoolDown.Add(Info->GetAttackType(), 0.f);
	}
}

void UMonsterStat::SetAttackCoolDown(EMonsterAttackType Type)
{
	const TArray<UMonsterAttackPattern*>& ArrayAttackPattern = UMonsterAttackPattern::GetMonsterAttackPatternArray(OwningMonster->GetMonsterType());
	for (int32 i = 0; i < ArrayAttackPattern.Num(); i++)
	{
		UMonsterAttackPattern* Info = ArrayAttackPattern[i];
		if (Info->GetAttackType() == Type)
		{
			MapAttackCoolDown[Type] = Info->GetAttackCoolDown();
			break;
		}
	}
}

void UMonsterStat::SetAttackCoolDown(EMonsterAttackType Type, float Delay)
{
	MapAttackCoolDown[Type] = Delay;
}

float UMonsterStat::GetAttackCoolDown(EMonsterAttackType AttackType)
{
	if (MapAttackCoolDown.Contains(AttackType))
	{
		return MapAttackCoolDown[AttackType];
	}
	return 0.0f;
}
