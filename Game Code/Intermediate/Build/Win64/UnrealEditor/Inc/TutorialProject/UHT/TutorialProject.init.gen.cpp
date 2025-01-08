// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TutorialProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TutorialProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TutorialProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TutorialProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x65E6F680,
				0x88246626,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TutorialProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TutorialProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TutorialProject(Z_Construct_UPackage__Script_TutorialProject, TEXT("/Script/TutorialProject"), Z_Registration_Info_UPackage__Script_TutorialProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65E6F680, 0x88246626));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
