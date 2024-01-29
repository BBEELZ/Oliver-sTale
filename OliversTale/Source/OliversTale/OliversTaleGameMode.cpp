// Copyright Epic Games, Inc. All Rights Reserved.

#include "OliversTaleGameMode.h"
#include "OliversTaleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOliversTaleGameMode::AOliversTaleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
