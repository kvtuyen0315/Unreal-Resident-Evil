// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "ResidentEvil/Character/Hero/Hunk.h"
#include "UObject/ConstructorHelpers.h"

// Tuyển.
#pragma region Create.
AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AHunk> hunk(TEXT("/Script/ResidentEvil.Hunk"));

	this->DefaultPawnClass = hunk.Class;
}
#pragma endregion
