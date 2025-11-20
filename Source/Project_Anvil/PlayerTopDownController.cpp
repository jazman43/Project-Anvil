// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTopDownController.h"


// Sets default values for this component's properties
UPlayerTopDownController::UPlayerTopDownController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerTopDownController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ownerPawn = Cast<APawn>(GetOwner());
}

void UPlayerTopDownController::MoveForward(float value)
{
	movementInput.X = value;
}

void UPlayerTopDownController::MoveRight(float value)
{
	movementInput.Y = value;
}


// Called every frame
void UPlayerTopDownController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if(!ownerPawn) return;

	FVector move = FVector(movementInput.X, movementInput.Y, 0.0f).GetClampedToMaxSize(1.0f);
	ownerPawn->AddActorWorldOffset(move * moveSpeed * DeltaTime, true);
}

