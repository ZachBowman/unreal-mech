#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ai_patrol_cpp.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MECH_API Uai_patrol_cpp : public UActorComponent
{
	GENERATED_BODY()

public:	

	// Sets default values for this component's properties
	Uai_patrol_cpp();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	void move_to_patrol_node();
	bool within_range_of_target();

	// TODO: remove uproperty on index and set in constructor
	//UPROPERTY(EditAnywhere)
	int patrol_index = 0;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> patrol_path;

	AActor* target_node = nullptr;
};
