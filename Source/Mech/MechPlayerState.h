#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MechPlayerState.generated.h"

UCLASS()
class MECH_API AMechPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AMechPlayerState();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int testInt = 0;
};
