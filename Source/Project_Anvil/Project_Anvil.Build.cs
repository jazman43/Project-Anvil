// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Anvil : ModuleRules
{
	public Project_Anvil(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
