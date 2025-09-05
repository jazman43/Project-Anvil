// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DwarfLord_PlayerController.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EPlayerControlMode : uint8
{
	ThirdPerson UMETA(DisplayName="ThirdPerson"),
	TopDown UMETA(DisplayName="TopDown")
};

UCLASS()
class PROJECT_ANVIL_API ADwarfLord_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	EPlayerControlMode currentControlMode;
	
	
	
};
