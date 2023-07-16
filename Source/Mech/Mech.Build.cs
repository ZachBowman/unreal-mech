// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mech : ModuleRules
{
	public Mech(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "Core", "CoreUObject", "GameplayAbilities", "GameplayTags", "GameplayTasks", "Engine", "InputCore", "HeadMountedDisplay" });
    }
}
