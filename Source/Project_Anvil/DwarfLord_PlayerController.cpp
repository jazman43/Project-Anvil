// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfLord_PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"


ADwarfLord_PlayerController::ADwarfLord_PlayerController()
{
    currentPawnIndex = 0;
}


void ADwarfLord_PlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("TempSwichPawn", IE_Pressed, this, &ADwarfLord_PlayerController::SwitchPawn);
}

void ADwarfLord_PlayerController::SwitchPawn()
{
    if(PawnClass.Num() == 0) return;

    UE_LOG(LogTemp, Display, TEXT("Hello, Unreal Engine!"));
    
    currentPawnIndex = (currentPawnIndex + 1) % PawnClass.Num();

    FVector location = GetPawn() ? GetPawn()->GetActorLocation() : FVector::ZeroVector;
    FRotator rotation = GetPawn() ? GetPawn()->GetActorRotation() : FRotator::ZeroRotator;

    // Destroy old pawn
    if (GetPawn())
    {
        GetPawn()->Destroy();
    }

    // Spawn new pawn
    FActorSpawnParameters spawnParams;
    APawn* newPawn = GetWorld()->SpawnActor<APawn>(PawnClass[currentPawnIndex], location, rotation, spawnParams);

    // Possess it
    if (newPawn)
    {
        Possess(newPawn);
    }
}
