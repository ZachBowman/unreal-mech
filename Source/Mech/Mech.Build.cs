// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mech : ModuleRules
{
	public Mech(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
    }
}
