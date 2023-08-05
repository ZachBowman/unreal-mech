#include "MechGameState.h"

void AMechGameState::BeginPlay()
{
	Super::BeginPlay();

	// TODO: test
	enemiesInLevel += 1;
}

void AMechGameState::Tick(float DeltaTime)
{
	// TODO: test
	enemiesInLevel += 1;
}
