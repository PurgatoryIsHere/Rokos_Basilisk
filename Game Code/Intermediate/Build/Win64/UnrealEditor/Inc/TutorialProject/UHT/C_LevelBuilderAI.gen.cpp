// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TutorialProject/C_LevelBuilderAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_LevelBuilderAI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_LevelBuilderAI();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_LevelBuilderAI_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class AC_LevelBuilderAI Function CalculatePlayerStats
struct Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics
{
	struct C_LevelBuilderAI_eventCalculatePlayerStats_Parms
	{
		TArray<float> PlayerStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelBuilderAI" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::NewProp_PlayerStats_Inner = { "PlayerStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventCalculatePlayerStats_Parms, PlayerStats), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::NewProp_PlayerStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::NewProp_PlayerStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "CalculatePlayerStats", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::C_LevelBuilderAI_eventCalculatePlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::C_LevelBuilderAI_eventCalculatePlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execCalculatePlayerStats)
{
	P_GET_TARRAY(float,Z_Param_PlayerStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculatePlayerStats(Z_Param_PlayerStats);
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function CalculatePlayerStats

// Begin Class AC_LevelBuilderAI Function GenerateLevelGrammar
struct Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics
{
	struct C_LevelBuilderAI_eventGenerateLevelGrammar_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelBuilderAI" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGenerateLevelGrammar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GenerateLevelGrammar", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::C_LevelBuilderAI_eventGenerateLevelGrammar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::C_LevelBuilderAI_eventGenerateLevelGrammar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGenerateLevelGrammar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GenerateLevelGrammar();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GenerateLevelGrammar

// Begin Class AC_LevelBuilderAI Function GetPlayerMovementRating
struct Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics
{
	struct C_LevelBuilderAI_eventGetPlayerMovementRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGetPlayerMovementRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GetPlayerMovementRating", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::C_LevelBuilderAI_eventGetPlayerMovementRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::C_LevelBuilderAI_eventGetPlayerMovementRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGetPlayerMovementRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerMovementRating();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GetPlayerMovementRating

// Begin Class AC_LevelBuilderAI Function GetPlayerPreservationRating
struct Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics
{
	struct C_LevelBuilderAI_eventGetPlayerPreservationRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGetPlayerPreservationRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GetPlayerPreservationRating", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::C_LevelBuilderAI_eventGetPlayerPreservationRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::C_LevelBuilderAI_eventGetPlayerPreservationRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGetPlayerPreservationRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerPreservationRating();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GetPlayerPreservationRating

// Begin Class AC_LevelBuilderAI Function GetPlayerRatingsAsArray
struct Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics
{
	struct C_LevelBuilderAI_eventGetPlayerRatingsAsArray_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGetPlayerRatingsAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GetPlayerRatingsAsArray", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::C_LevelBuilderAI_eventGetPlayerRatingsAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::C_LevelBuilderAI_eventGetPlayerRatingsAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGetPlayerRatingsAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetPlayerRatingsAsArray();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GetPlayerRatingsAsArray

// Begin Class AC_LevelBuilderAI Function GetPlayerScoreRating
struct Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics
{
	struct C_LevelBuilderAI_eventGetPlayerScoreRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGetPlayerScoreRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GetPlayerScoreRating", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::C_LevelBuilderAI_eventGetPlayerScoreRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::C_LevelBuilderAI_eventGetPlayerScoreRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGetPlayerScoreRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerScoreRating();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GetPlayerScoreRating

// Begin Class AC_LevelBuilderAI Function GetPlayerSkillRating
struct Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics
{
	struct C_LevelBuilderAI_eventGetPlayerSkillRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventGetPlayerSkillRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "GetPlayerSkillRating", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::C_LevelBuilderAI_eventGetPlayerSkillRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::C_LevelBuilderAI_eventGetPlayerSkillRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execGetPlayerSkillRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerSkillRating();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function GetPlayerSkillRating

// Begin Class AC_LevelBuilderAI Function LoadPrefabs
struct Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics
{
	struct C_LevelBuilderAI_eventLoadPrefabs_Parms
	{
		FString PrefabFolderPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelBuilderAI" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefabFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrefabFolderPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::NewProp_PrefabFolderPath = { "PrefabFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_LevelBuilderAI_eventLoadPrefabs_Parms, PrefabFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefabFolderPath_MetaData), NewProp_PrefabFolderPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::NewProp_PrefabFolderPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "LoadPrefabs", nullptr, nullptr, Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::C_LevelBuilderAI_eventLoadPrefabs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::C_LevelBuilderAI_eventLoadPrefabs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execLoadPrefabs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PrefabFolderPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPrefabs(Z_Param_PrefabFolderPath);
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function LoadPrefabs

// Begin Class AC_LevelBuilderAI Function PrintPrefabInfo
struct Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelBuilderAI" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_LevelBuilderAI, nullptr, "PrintPrefabInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_LevelBuilderAI::execPrintPrefabInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintPrefabInfo();
	P_NATIVE_END;
}
// End Class AC_LevelBuilderAI Function PrintPrefabInfo

// Begin Class AC_LevelBuilderAI
void AC_LevelBuilderAI::StaticRegisterNativesAC_LevelBuilderAI()
{
	UClass* Class = AC_LevelBuilderAI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculatePlayerStats", &AC_LevelBuilderAI::execCalculatePlayerStats },
		{ "GenerateLevelGrammar", &AC_LevelBuilderAI::execGenerateLevelGrammar },
		{ "GetPlayerMovementRating", &AC_LevelBuilderAI::execGetPlayerMovementRating },
		{ "GetPlayerPreservationRating", &AC_LevelBuilderAI::execGetPlayerPreservationRating },
		{ "GetPlayerRatingsAsArray", &AC_LevelBuilderAI::execGetPlayerRatingsAsArray },
		{ "GetPlayerScoreRating", &AC_LevelBuilderAI::execGetPlayerScoreRating },
		{ "GetPlayerSkillRating", &AC_LevelBuilderAI::execGetPlayerSkillRating },
		{ "LoadPrefabs", &AC_LevelBuilderAI::execLoadPrefabs },
		{ "PrintPrefabInfo", &AC_LevelBuilderAI::execPrintPrefabInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_LevelBuilderAI);
UClass* Z_Construct_UClass_AC_LevelBuilderAI_NoRegister()
{
	return AC_LevelBuilderAI::StaticClass();
}
struct Z_Construct_UClass_AC_LevelBuilderAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_LevelBuilderAI.h" },
		{ "ModuleRelativePath", "C_LevelBuilderAI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_CalculatePlayerStats, "CalculatePlayerStats" }, // 372908187
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GenerateLevelGrammar, "GenerateLevelGrammar" }, // 486542089
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerMovementRating, "GetPlayerMovementRating" }, // 1495668044
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerPreservationRating, "GetPlayerPreservationRating" }, // 1758752943
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerRatingsAsArray, "GetPlayerRatingsAsArray" }, // 131653660
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerScoreRating, "GetPlayerScoreRating" }, // 4227888821
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_GetPlayerSkillRating, "GetPlayerSkillRating" }, // 2600313485
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_LoadPrefabs, "LoadPrefabs" }, // 487319879
		{ &Z_Construct_UFunction_AC_LevelBuilderAI_PrintPrefabInfo, "PrintPrefabInfo" }, // 3929879533
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_LevelBuilderAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_LevelBuilderAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TutorialProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_LevelBuilderAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_LevelBuilderAI_Statics::ClassParams = {
	&AC_LevelBuilderAI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_LevelBuilderAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_LevelBuilderAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_LevelBuilderAI()
{
	if (!Z_Registration_Info_UClass_AC_LevelBuilderAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_LevelBuilderAI.OuterSingleton, Z_Construct_UClass_AC_LevelBuilderAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_LevelBuilderAI.OuterSingleton;
}
template<> TUTORIALPROJECT_API UClass* StaticClass<AC_LevelBuilderAI>()
{
	return AC_LevelBuilderAI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_LevelBuilderAI);
AC_LevelBuilderAI::~AC_LevelBuilderAI() {}
// End Class AC_LevelBuilderAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_LevelBuilderAI, AC_LevelBuilderAI::StaticClass, TEXT("AC_LevelBuilderAI"), &Z_Registration_Info_UClass_AC_LevelBuilderAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_LevelBuilderAI), 1740676822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_3413615583(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
