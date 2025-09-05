// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_AnvilGameMode.h"
#include "Project_AnvilCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_AnvilGameMode::AProject_AnvilGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}
