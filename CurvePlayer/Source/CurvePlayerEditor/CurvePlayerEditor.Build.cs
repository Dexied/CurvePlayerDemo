using UnrealBuildTool;

public class CurvePlayerEditor : ModuleRules
{
    public CurvePlayerEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "CurvePlayerRuntime",
            "KismetCompiler",
            "GraphEditor",
            "InputCore",
            "Slate",
            "SlateCore"
        });

        if (Target.bBuildEditor == true)
        {
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                        
                }
            );

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                        "UnrealEd",
                        "BlueprintGraph",
                }
            );
        }
    }
}
