// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterAttackPattern.h"
#include "Structures/GameEnumName.h"

TMap<EMonsterType, TArray<UMonsterAttackPattern*>> UMonsterAttackPattern::sMapAttackPatternData;

void UMonsterAttackPattern::Set(EMonsterAttackType Type, int32 BaseDamage /*= 0*/, float Range /*= 0.f*/, float Delay /*= 0.f*/)
{
	AttackType = Type;
	BaseAttackDamage = BaseDamage;
	AttackRange = Range;
	AttackCoolDown = Delay;
}

void UMonsterAttackPattern::Initialize()
{
	// Zombie Attack Data
	TArray<UMonsterAttackPattern*> ArrayAttack;
	UMonsterAttackPattern* Object = NewObject<UMonsterAttackPattern>(UMonsterAttackPattern::StaticClass());
	Object->Set(EMonsterAttackType::ZOMBIE_ATTACK_NORMAL, 10, 100.f, 5.f);
	Object->AddToRoot();
	ArrayAttack.Add(Object);
	sMapAttackPatternData.Add(EMonsterType::ZOMBIE, ArrayAttack);
}

void UMonsterAttackPattern::Destroy()
{
	sMapAttackPatternData.Reset();
}

const TArray<UMonsterAttackPattern*>& UMonsterAttackPattern::GetMonsterAttackPatternArray(EMonsterType Type)
{
	static TArray<UMonsterAttackPattern*> ReturnArray;
	if (sMapAttackPatternData.Contains(Type))
	{
		return sMapAttackPatternData[Type];
	}
	return ReturnArray;
}
