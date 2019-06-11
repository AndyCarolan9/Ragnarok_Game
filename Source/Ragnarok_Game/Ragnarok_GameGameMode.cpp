// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Ragnarok_GameGameMode.h"
#include "Ragnarok_GameHUD.h"
#include "Ragnarok_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARagnarok_GameGameMode::ARagnarok_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARagnarok_GameHUD::StaticClass();
}
