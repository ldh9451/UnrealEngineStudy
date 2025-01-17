// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"
#include "ABCharacter.h"

AABGameMode::AABGameMode()
{
	//DefaultPawnClass = AABPawn::StaticClass();
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();

	/*static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));

	if (BP_PAWN_C.Succeeded())
	{
		DefaultPawnClass = BP_PAWN_C.Class;
	}*/
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}