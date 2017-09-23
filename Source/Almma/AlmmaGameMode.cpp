// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AlmmaGameMode.h"
#include "AlmmaHUD.h"
#include "AlmmaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlmmaGameMode::AAlmmaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAlmmaHUD::StaticClass();
}
