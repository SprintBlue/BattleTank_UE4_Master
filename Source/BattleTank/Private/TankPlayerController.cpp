// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(GetControlledTank()) {

		UE_LOG(LogTemp, Warning, TEXT("PlayerController a le Tank :%s"),*GetControlledTank()->GetName());

	}
	else {

		UE_LOG(LogTemp, Warning, TEXT("PlayerController n a pas le Tank"));

	}


}

ATank * ATankPlayerController::GetControlledTank() const
{
	ATank* PlayerTank = Cast<ATank>(GetPawn());

	if (!PlayerTank) { return nullptr; }
	
	return PlayerTank;
}
