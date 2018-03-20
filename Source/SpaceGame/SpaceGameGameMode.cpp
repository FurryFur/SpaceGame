// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SpaceGameGameMode.h"
#include "SpaceGameHUD.h"
#include "SpaceGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceGameGameMode::ASpaceGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpaceGameHUD::StaticClass();
}
