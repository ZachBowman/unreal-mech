// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechGameMode.h"
#include "MechGameState.h"
#include "MechCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechGameMode::AMechGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	GameStateClass = AMechGameState::StaticClass();
}
