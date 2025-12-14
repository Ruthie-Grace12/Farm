// Copyright Epic Games, Inc. All Rights Reserved.

#include "FarmGameMode.h"
#include "FarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFarmGameMode::AFarmGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
