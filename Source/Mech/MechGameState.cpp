#include "MechGameState.h"
#include "Kismet/GameplayStatics.h"

AMechGameState::AMechGameState()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

void AMechGameState::BeginPlay()
{
	Super::BeginPlay();
	CountRemainingEnemies();
}

void AMechGameState::Tick(float DeltaTime)
{
	//enemiesInLevel = 27;
	CountRemainingEnemies();
}

// TODO: Instead of counting every frame, we could keep a tally when one is destroyed.
// Or ping this only once every few seconds.
void AMechGameState::CountRemainingEnemies()
{
	TArray<AActor*, FDefaultAllocator> actor_array;
	FString path = FString("Content/TestContent/tank_blueprint");
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "enemy", actor_array);
	enemiesInLevel = actor_array.Num();
}
