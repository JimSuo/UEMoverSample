// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEMoverSampleGameMode.h"
#include "UEMoverSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEMoverSampleGameMode::AUEMoverSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
