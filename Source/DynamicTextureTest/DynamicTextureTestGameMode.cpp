// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DynamicTextureTestGameMode.h"
#include "DynamicTextureTestHUD.h"
#include "DynamicTextureTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADynamicTextureTestGameMode::ADynamicTextureTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADynamicTextureTestHUD::StaticClass();
}
