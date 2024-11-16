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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PistolDamage_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotsFired_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotsHit_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PistolDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotsFired;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotsHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_FirstPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_PistolDamage = { "PistolDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, PistolDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolDamage_MetaData), NewProp_PistolDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsFired = { "ShotsFired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, ShotsFired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotsFired_MetaData), NewProp_ShotsFired_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsHit = { "ShotsHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, ShotsHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotsHit_MetaData), NewProp_ShotsHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_PistolDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Accuracy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_FirstPersonCharacter, AC_FirstPersonCharacter::StaticClass, TEXT("AC_FirstPersonCharacter"), &Z_Registration_Info_UClass_AC_FirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_FirstPersonCharacter), 542116024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_3882340161(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_TutorialProject_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
