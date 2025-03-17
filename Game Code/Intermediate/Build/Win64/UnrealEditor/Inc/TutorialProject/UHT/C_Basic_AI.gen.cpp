// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TutorialProject/C_Basic_AI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Basic_AI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_Basic_AI();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_Basic_AI_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class AC_Basic_AI Function GetTimeSurvived
struct Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics
{
	struct C_Basic_AI_eventGetTimeSurvived_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Basic_AI_eventGetTimeSurvived_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Basic_AI, nullptr, "GetTimeSurvived", nullptr, nullptr, Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::C_Basic_AI_eventGetTimeSurvived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::C_Basic_AI_eventGetTimeSurvived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_Basic_AI::execGetTimeSurvived)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeSurvived();
	P_NATIVE_END;
}
// End Class AC_Basic_AI Function GetTimeSurvived

// Begin Class AC_Basic_AI Function KillField
struct Z_Construct_UFunction_AC_Basic_AI_KillField_Statics
{
	struct C_Basic_AI_eventKillField_Parms
	{
		float ZComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ZComponent = { "ZComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Basic_AI_eventKillField_Parms, ZComponent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C_Basic_AI_eventKillField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C_Basic_AI_eventKillField_Parms), &Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ZComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Basic_AI, nullptr, "KillField", nullptr, nullptr, Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::C_Basic_AI_eventKillField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::C_Basic_AI_eventKillField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_Basic_AI_KillField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Basic_AI_KillField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_Basic_AI::execKillField)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->KillField(Z_Param_ZComponent);
	P_NATIVE_END;
}
// End Class AC_Basic_AI Function KillField

// Begin Class AC_Basic_AI Function TakeDamage
struct Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics
{
	struct C_Basic_AI_eventTakeDamage_Parms
	{
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Basic_AI_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Basic_AI, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::C_Basic_AI_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::C_Basic_AI_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_Basic_AI_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Basic_AI_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_Basic_AI::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class AC_Basic_AI Function TakeDamage

// Begin Class AC_Basic_AI Function UpdateTimeSurvived
struct Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Basic_AI, nullptr, "UpdateTimeSurvived", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_Basic_AI::execUpdateTimeSurvived)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTimeSurvived();
	P_NATIVE_END;
}
// End Class AC_Basic_AI Function UpdateTimeSurvived

// Begin Class AC_Basic_AI
void AC_Basic_AI::StaticRegisterNativesAC_Basic_AI()
{
	UClass* Class = AC_Basic_AI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTimeSurvived", &AC_Basic_AI::execGetTimeSurvived },
		{ "KillField", &AC_Basic_AI::execKillField },
		{ "TakeDamage", &AC_Basic_AI::execTakeDamage },
		{ "UpdateTimeSurvived", &AC_Basic_AI::execUpdateTimeSurvived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Basic_AI);
UClass* Z_Construct_UClass_AC_Basic_AI_NoRegister()
{
	return AC_Basic_AI::StaticClass();
}
struct Z_Construct_UClass_AC_Basic_AI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Basic_AI.h" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSurvived_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_Basic_AI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSurvived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Basic_AI_GetTimeSurvived, "GetTimeSurvived" }, // 1745805027
		{ &Z_Construct_UFunction_AC_Basic_AI_KillField, "KillField" }, // 3791280515
		{ &Z_Construct_UFunction_AC_Basic_AI_TakeDamage, "TakeDamage" }, // 1026483923
		{ &Z_Construct_UFunction_AC_Basic_AI_UpdateTimeSurvived, "UpdateTimeSurvived" }, // 3661232123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Basic_AI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Basic_AI, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((AC_Basic_AI*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Basic_AI), &Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_TimeSurvived = { "TimeSurvived", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Basic_AI, TimeSurvived), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSurvived_MetaData), NewProp_TimeSurvived_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Basic_AI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Basic_AI_Statics::NewProp_TimeSurvived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Basic_AI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_Basic_AI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TutorialProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Basic_AI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Basic_AI_Statics::ClassParams = {
	&AC_Basic_AI::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AC_Basic_AI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_Basic_AI_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Basic_AI_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_Basic_AI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_Basic_AI()
{
	if (!Z_Registration_Info_UClass_AC_Basic_AI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Basic_AI.OuterSingleton, Z_Construct_UClass_AC_Basic_AI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_Basic_AI.OuterSingleton;
}
template<> TUTORIALPROJECT_API UClass* StaticClass<AC_Basic_AI>()
{
	return AC_Basic_AI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Basic_AI);
AC_Basic_AI::~AC_Basic_AI() {}
// End Class AC_Basic_AI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_Basic_AI, AC_Basic_AI::StaticClass, TEXT("AC_Basic_AI"), &Z_Registration_Info_UClass_AC_Basic_AI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Basic_AI), 2701307555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_177683327(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
