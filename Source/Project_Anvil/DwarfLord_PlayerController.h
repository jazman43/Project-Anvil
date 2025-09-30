// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DwarfLord_PlayerController.generated.h"

/**
 * 
 */


UCLASS()
class PROJECT_ANVIL_API ADwarfLord_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	
	
	ADwarfLord_PlayerController();

protected:

	virtual void SetupInputComponent() override;

	void SwitchPawn();

private:

	UPROPERTY(EditAnywhere, Category="Pawn Switching")
	TArray<TSubclassOf<APawn>> PawnClass;

	int32 currentPawnIndex = 0;
	
};
