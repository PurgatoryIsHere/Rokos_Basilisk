// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TutorialProject/C_BasiliskInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_BasiliskInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_UC_BasiliskInstance();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_UC_BasiliskInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class UC_BasiliskInstance Function GetPlayerMovementRating
struct Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics
{
	struct C_BasiliskInstance_eventGetPlayerMovementRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_BasiliskInstance_eventGetPlayerMovementRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BasiliskInstance, nullptr, "GetPlayerMovementRating", nullptr, nullptr, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::C_BasiliskInstance_eventGetPlayerMovementRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::C_BasiliskInstance_eventGetPlayerMovementRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_BasiliskInstance::execGetPlayerMovementRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerMovementRating();
	P_NATIVE_END;
}
// End Class UC_BasiliskInstance Function GetPlayerMovementRating

// Begin Class UC_BasiliskInstance Function GetPlayerPreservationRating
struct Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics
{
	struct C_BasiliskInstance_eventGetPlayerPreservationRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_BasiliskInstance_eventGetPlayerPreservationRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BasiliskInstance, nullptr, "GetPlayerPreservationRating", nullptr, nullptr, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::C_BasiliskInstance_eventGetPlayerPreservationRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::C_BasiliskInstance_eventGetPlayerPreservationRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_BasiliskInstance::execGetPlayerPreservationRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerPreservationRating();
	P_NATIVE_END;
}
// End Class UC_BasiliskInstance Function GetPlayerPreservationRating

// Begin Class UC_BasiliskInstance Function GetPlayerScoreRating
struct Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics
{
	struct C_BasiliskInstance_eventGetPlayerScoreRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_BasiliskInstance_eventGetPlayerScoreRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BasiliskInstance, nullptr, "GetPlayerScoreRating", nullptr, nullptr, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::C_BasiliskInstance_eventGetPlayerScoreRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::C_BasiliskInstance_eventGetPlayerScoreRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_BasiliskInstance::execGetPlayerScoreRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerScoreRating();
	P_NATIVE_END;
}
// End Class UC_BasiliskInstance Function GetPlayerScoreRating

// Begin Class UC_BasiliskInstance Function GetPlayerSkillRating
struct Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics
{
	struct C_BasiliskInstance_eventGetPlayerSkillRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_BasiliskInstance_eventGetPlayerSkillRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BasiliskInstance, nullptr, "GetPlayerSkillRating", nullptr, nullptr, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::C_BasiliskInstance_eventGetPlayerSkillRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::C_BasiliskInstance_eventGetPlayerSkillRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_BasiliskInstance::execGetPlayerSkillRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerSkillRating();
	P_NATIVE_END;
}
// End Class UC_BasiliskInstance Function GetPlayerSkillRating

// Begin Class UC_BasiliskInstance Function UpdatePlayerRatings
struct Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics
{
	struct C_BasiliskInstance_eventUpdatePlayerRatings_Parms
	{
		TArray<float> PlayerRatings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerRatings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerRatings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings_Inner = { "PlayerRatings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings = { "PlayerRatings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_BasiliskInstance_eventUpdatePlayerRatings_Parms, PlayerRatings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BasiliskInstance, nullptr, "UpdatePlayerRatings", nullptr, nullptr, Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::C_BasiliskInstance_eventUpdatePlayerRatings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::C_BasiliskInstance_eventUpdatePlayerRatings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_BasiliskInstance::execUpdatePlayerRatings)
{
	P_GET_TARRAY(float,Z_Param_PlayerRatings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerRatings(Z_Param_PlayerRatings);
	P_NATIVE_END;
}
// End Class UC_BasiliskInstance Function UpdatePlayerRatings

// Begin Class UC_BasiliskInstance
void UC_BasiliskInstance::StaticRegisterNativesUC_BasiliskInstance()
{
	UClass* Class = UC_BasiliskInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerMovementRating", &UC_BasiliskInstance::execGetPlayerMovementRating },
		{ "GetPlayerPreservationRating", &UC_BasiliskInstance::execGetPlayerPreservationRating },
		{ "GetPlayerScoreRating", &UC_BasiliskInstance::execGetPlayerScoreRating },
		{ "GetPlayerSkillRating", &UC_BasiliskInstance::execGetPlayerSkillRating },
		{ "UpdatePlayerRatings", &UC_BasiliskInstance::execUpdatePlayerRatings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_BasiliskInstance);
UClass* Z_Construct_UClass_UC_BasiliskInstance_NoRegister()
{
	return UC_BasiliskInstance::StaticClass();
}
struct Z_Construct_UClass_UC_BasiliskInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_BasiliskInstance.h" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSkill_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovement_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPreservation_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerSkill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerPreservation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerMovementRating, "GetPlayerMovementRating" }, // 388841534
		{ &Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerPreservationRating, "GetPlayerPreservationRating" }, // 1857096057
		{ &Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerScoreRating, "GetPlayerScoreRating" }, // 2475765522
		{ &Z_Construct_UFunction_UC_BasiliskInstance_GetPlayerSkillRating, "GetPlayerSkillRating" }, // 364520364
		{ &Z_Construct_UFunction_UC_BasiliskInstance_UpdatePlayerRatings, "UpdatePlayerRatings" }, // 3745359742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_BasiliskInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerSkill = { "PlayerSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_BasiliskInstance, PlayerSkill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSkill_MetaData), NewProp_PlayerSkill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_BasiliskInstance, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerMovement = { "PlayerMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_BasiliskInstance, PlayerMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMovement_MetaData), NewProp_PlayerMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerPreservation = { "PlayerPreservation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_BasiliskInstance, PlayerPreservation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPreservation_MetaData), NewProp_PlayerPreservation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_BasiliskInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_BasiliskInstance_Statics::NewProp_PlayerPreservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_BasiliskInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_BasiliskInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TutorialProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_BasiliskInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_BasiliskInstance_Statics::ClassParams = {
	&UC_BasiliskInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC_BasiliskInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_BasiliskInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_BasiliskInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_BasiliskInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_BasiliskInstance()
{
	if (!Z_Registration_Info_UClass_UC_BasiliskInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_BasiliskInstance.OuterSingleton, Z_Construct_UClass_UC_BasiliskInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_BasiliskInstance.OuterSingleton;
}
template<> TUTORIALPROJECT_API UClass* StaticClass<UC_BasiliskInstance>()
{
	return UC_BasiliskInstance::StaticClass();
}
UC_BasiliskInstance::UC_BasiliskInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_BasiliskInstance);
UC_BasiliskInstance::~UC_BasiliskInstance() {}
// End Class UC_BasiliskInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_BasiliskInstance, UC_BasiliskInstance::StaticClass, TEXT("UC_BasiliskInstance"), &Z_Registration_Info_UClass_UC_BasiliskInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_BasiliskInstance), 2273086483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_1472904251(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
