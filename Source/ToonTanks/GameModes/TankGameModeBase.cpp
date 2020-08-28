// Copyright NPUZenith 2020


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    // Get references and game win/lose conditions

    // Call HandleGameStart() to initialise the start countdown, turret activation, pawn check, etc...
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
    // Check which tupe of actor died. If turret, tally. If player -> go to lose condition.
}

void ATankGameModeBase::HandleGameStart()
{
    // Initialise the start countdown , turret activation, pawn check, etc...
    // Call blueprint version GameStart().
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
    // See if the player has destroyed all turrets, show win result.
    // else if turret destroyed player, show lose result.
    // Call blueprint version GameOver().
}
