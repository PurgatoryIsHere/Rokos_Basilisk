// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TutorialProject/C_FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_FirstPersonCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_FirstPersonCharacter();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_FirstPersonCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class AC_FirstPersonCharacter
void AC_FirstPersonCharacter::StaticRegisterNativesAC_FirstPersonCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_FirstPersonCharacter);
UClass* Z_Construct_UClass_AC_FirstPersonCharacter_NoRegister()
{
	return AC_FirstPersonCharacter::StaticClass();
}
struct Z_Construct_UClass_AC_FirstPersonCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_FirstPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_FirstPersonCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TutorialProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_FirstPersonCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::ClassParams = {
	&AC_FirstPersonCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_FirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_FirstPersonCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_FirstPersonCharacter()
{
	if (!Z_Registration_Info_UClass_AC_FirstPersonCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_FirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AC_FirstPersonCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_FirstPersonCharacter.OuterSingleton;
}
template<> TUTORIALPROJECT_API UClass* StaticClass<AC_FirstPersonCharacter>()
{
	return AC_FirstPersonCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_FirstPersonCharacter);
AC_FirstPersonCharacter::~AC_FirstPersonCharacter() {}
// End Class AC_FirstPersonCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_TheGame_Fixed_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_FirstPersonCharacter, AC_FirstPersonCharacter::StaticClass, TEXT("AC_FirstPersonCharacter"), &Z_Registration_Info_UClass_AC_FirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_FirstPersonCharacter), 3116594780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_TheGame_Fixed_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_1255390368(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_TheGame_Fixed_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_TheGame_Fixed_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
