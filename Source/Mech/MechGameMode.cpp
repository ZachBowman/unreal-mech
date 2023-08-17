#include "MechGameMode.h"

#include "AbilitySystemGlobals.h"
#include "MechCharacter.h"
#include "MechGameState.h"
#include "MechPlayerState.h"
#include "UObject/ConstructorHelpers.h"

AMechGameMode::AMechGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	GameStateClass = AMechGameState::StaticClass();
	PlayerStateClass = AMechPlayerState::StaticClass();

	UAbilitySystemGlobals::Get().InitGlobalData();
}
