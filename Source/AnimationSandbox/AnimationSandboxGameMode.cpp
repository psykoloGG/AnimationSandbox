// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimationSandboxGameMode.h"
#include "AnimationSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimationSandboxGameMode::AAnimationSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
