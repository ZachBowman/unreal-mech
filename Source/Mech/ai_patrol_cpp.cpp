#include "ai_patrol_cpp.h"
#include "AIController.h"

// Sets default values for this component's properties
Uai_patrol_cpp::Uai_patrol_cpp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void Uai_patrol_cpp::BeginPlay()
{
	Super::BeginPlay();
	//next_patrol_node();
}

// Called every frame
void Uai_patrol_cpp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (target_node == nullptr && patrol_path.Num() > 0)
	{
		patrol_index = 0;
		move_to_patrol_node();
	}

	else if (target_node != nullptr && within_range_of_target())
	{
		patrol_index += 1;
		if (patrol_index >= patrol_path.Num()) patrol_index = 0;
		move_to_patrol_node();
	}
}

bool Uai_patrol_cpp::within_range_of_target()
{
	FVector pos = GetOwner()->GetActorLocation();
	FVector target_pos = target_node->GetActorLocation();
	return FVector::Dist(pos, target_pos) < 5;
}

void Uai_patrol_cpp::move_to_patrol_node()
{
	if (patrol_path.IsEmpty() || !patrol_path.IsValidIndex(patrol_index)) return;

	APawn* pawn = Cast<APawn>(GetOwner());
	AAIController* controller = Cast<AAIController, AController>(pawn->GetController());

	target_node = patrol_path[patrol_index];
	controller->MoveToActor(target_node, 5, false, false, false);
}
