

using UnrealBuildTool;
using System.Collections.Generic;

public class JamsitoEditorTarget : TargetRules
{
	public JamsitoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Jamsito" } );
	}
}
