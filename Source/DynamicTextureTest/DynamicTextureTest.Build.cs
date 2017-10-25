// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DynamicTextureTest : ModuleRules
{
	public DynamicTextureTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "RHI",
            "RenderCore",
            "Renderer",
            "ShaderCore"
        });
    }
}
