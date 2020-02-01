// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MultiplayerPrototypeGameMode.h"
#include "MultiplayerPrototypePlayerController.h"
#include "MultiplayerPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerPrototypeGameMode::AMultiplayerPrototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMultiplayerPrototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}