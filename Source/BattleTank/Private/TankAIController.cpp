// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"




void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	if (GetPlayerTank()) {

		UE_LOG(LogTemp, Warning, TEXT("AIController trouve le playerController :%s"), *GetPlayerTank()->GetName());

	}
	else {

		UE_LOG(LogTemp, Warning, TEXT("AIController ne trouve pas le playerController"));

	}


}



ATank * ATankAIController::GetPlayerTank() const
{
	APawn *TankPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!TankPlayer) { return  nullptr; }
	
	return Cast<ATank>(TankPlayer);
}
