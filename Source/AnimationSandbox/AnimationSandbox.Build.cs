// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimationSandbox : ModuleRules
{
	public AnimationSandbox(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "MotionTrajectory" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
