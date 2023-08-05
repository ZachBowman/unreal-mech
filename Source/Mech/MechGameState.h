#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MechGameState.generated.h"

UCLASS()
class MECH_API AMechGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int enemiesInLevel = 0;
};
