// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGAM415GameMode.h"
#include "FirstPersonGAM415Character.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonGAM415GameMode::AFirstPersonGAM415GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
