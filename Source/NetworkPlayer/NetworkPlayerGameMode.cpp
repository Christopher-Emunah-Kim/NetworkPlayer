// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkPlayerGameMode.h"
#include "NetworkPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkPlayerGameMode::ANetworkPlayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
