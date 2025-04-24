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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_FirstPersonCharacter();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_AC_FirstPersonCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class AC_FirstPersonCharacter Function AverageDistanceFromKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics
{
	struct C_FirstPersonCharacter_eventAverageDistanceFromKill_Parms
	{
		float NumEnemies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::NewProp_NumEnemies = { "NumEnemies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventAverageDistanceFromKill_Parms, NumEnemies), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::NewProp_NumEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "AverageDistanceFromKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::C_FirstPersonCharacter_eventAverageDistanceFromKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::C_FirstPersonCharacter_eventAverageDistanceFromKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execAverageDistanceFromKill)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumEnemies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AverageDistanceFromKill(Z_Param_NumEnemies);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function AverageDistanceFromKill

// Begin Class AC_FirstPersonCharacter Function AverageTimeToKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics
{
	struct C_FirstPersonCharacter_eventAverageTimeToKill_Parms
	{
		float NumEnemies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::NewProp_NumEnemies = { "NumEnemies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventAverageTimeToKill_Parms, NumEnemies), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::NewProp_NumEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "AverageTimeToKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::C_FirstPersonCharacter_eventAverageTimeToKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::C_FirstPersonCharacter_eventAverageTimeToKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execAverageTimeToKill)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumEnemies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AverageTimeToKill(Z_Param_NumEnemies);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function AverageTimeToKill

// Begin Class AC_FirstPersonCharacter Function GetAccuracy
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics
{
	struct C_FirstPersonCharacter_eventGetAccuracy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetAccuracy", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::C_FirstPersonCharacter_eventGetAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::C_FirstPersonCharacter_eventGetAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAccuracy();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetAccuracy

// Begin Class AC_FirstPersonCharacter Function GetDistanceFromKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics
{
	struct C_FirstPersonCharacter_eventGetDistanceFromKill_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetDistanceFromKill_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetDistanceFromKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::C_FirstPersonCharacter_eventGetDistanceFromKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::C_FirstPersonCharacter_eventGetDistanceFromKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetDistanceFromKill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceFromKill();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetDistanceFromKill

// Begin Class AC_FirstPersonCharacter Function GetDistanceMoved
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics
{
	struct C_FirstPersonCharacter_eventGetDistanceMoved_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetDistanceMoved_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetDistanceMoved", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::C_FirstPersonCharacter_eventGetDistanceMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::C_FirstPersonCharacter_eventGetDistanceMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetDistanceMoved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceMoved();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetDistanceMoved

// Begin Class AC_FirstPersonCharacter Function GetHealth
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics
{
	struct C_FirstPersonCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::C_FirstPersonCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::C_FirstPersonCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetHealth

// Begin Class AC_FirstPersonCharacter Function GetJumpPref
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics
{
	struct C_FirstPersonCharacter_eventGetJumpPref_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetJumpPref_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetJumpPref", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::C_FirstPersonCharacter_eventGetJumpPref_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::C_FirstPersonCharacter_eventGetJumpPref_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetJumpPref)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetJumpPref();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetJumpPref

// Begin Class AC_FirstPersonCharacter Function GetStatsAsArray
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics
{
	struct C_FirstPersonCharacter_eventGetStatsAsArray_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetStatsAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetStatsAsArray", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::C_FirstPersonCharacter_eventGetStatsAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::C_FirstPersonCharacter_eventGetStatsAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetStatsAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetStatsAsArray();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetStatsAsArray

// Begin Class AC_FirstPersonCharacter Function GetStealth
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics
{
	struct C_FirstPersonCharacter_eventGetStealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetStealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetStealth", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::C_FirstPersonCharacter_eventGetStealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::C_FirstPersonCharacter_eventGetStealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetStealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStealth();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetStealth

// Begin Class AC_FirstPersonCharacter Function GetTimeToComplete
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics
{
	struct C_FirstPersonCharacter_eventGetTimeToComplete_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetTimeToComplete_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetTimeToComplete", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::C_FirstPersonCharacter_eventGetTimeToComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::C_FirstPersonCharacter_eventGetTimeToComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetTimeToComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToComplete();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetTimeToComplete

// Begin Class AC_FirstPersonCharacter Function GetTimeToKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics
{
	struct C_FirstPersonCharacter_eventGetTimeToKill_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventGetTimeToKill_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "GetTimeToKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::C_FirstPersonCharacter_eventGetTimeToKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::C_FirstPersonCharacter_eventGetTimeToKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execGetTimeToKill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToKill();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function GetTimeToKill

// Begin Class AC_FirstPersonCharacter Function TakeDamage
struct Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics
{
	struct C_FirstPersonCharacter_eventTakeDamage_Parms
	{
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::C_FirstPersonCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::C_FirstPersonCharacter_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function TakeDamage

// Begin Class AC_FirstPersonCharacter Function UpdateAccuracy
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateAccuracy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAccuracy();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateAccuracy

// Begin Class AC_FirstPersonCharacter Function UpdateDistanceFromKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics
{
	struct C_FirstPersonCharacter_eventUpdateDistanceFromKill_Parms
	{
		FVector PlayerPosition;
		FVector EnemyPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::NewProp_PlayerPosition = { "PlayerPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventUpdateDistanceFromKill_Parms, PlayerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::NewProp_EnemyPosition = { "EnemyPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventUpdateDistanceFromKill_Parms, EnemyPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::NewProp_PlayerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::NewProp_EnemyPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateDistanceFromKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::C_FirstPersonCharacter_eventUpdateDistanceFromKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::C_FirstPersonCharacter_eventUpdateDistanceFromKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateDistanceFromKill)
{
	P_GET_STRUCT(FVector,Z_Param_PlayerPosition);
	P_GET_STRUCT(FVector,Z_Param_EnemyPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDistanceFromKill(Z_Param_PlayerPosition,Z_Param_EnemyPosition);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateDistanceFromKill

// Begin Class AC_FirstPersonCharacter Function UpdateHealth
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics
{
	struct C_FirstPersonCharacter_eventUpdateHealth_Parms
	{
		float RemainingHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::NewProp_RemainingHealth = { "RemainingHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventUpdateHealth_Parms, RemainingHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::NewProp_RemainingHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateHealth", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::C_FirstPersonCharacter_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::C_FirstPersonCharacter_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RemainingHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealth(Z_Param_RemainingHealth);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateHealth

// Begin Class AC_FirstPersonCharacter Function UpdateIsDetected
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics
{
	struct C_FirstPersonCharacter_eventUpdateIsDetected_Parms
	{
		bool isSeeingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isSeeingPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSeeingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::NewProp_isSeeingPlayer_SetBit(void* Obj)
{
	((C_FirstPersonCharacter_eventUpdateIsDetected_Parms*)Obj)->isSeeingPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::NewProp_isSeeingPlayer = { "isSeeingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C_FirstPersonCharacter_eventUpdateIsDetected_Parms), &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::NewProp_isSeeingPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::NewProp_isSeeingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateIsDetected", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::C_FirstPersonCharacter_eventUpdateIsDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::C_FirstPersonCharacter_eventUpdateIsDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateIsDetected)
{
	P_GET_UBOOL(Z_Param_isSeeingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateIsDetected(Z_Param_isSeeingPlayer);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateIsDetected

// Begin Class AC_FirstPersonCharacter Function UpdateShotsFired
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateShotsFired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateShotsFired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateShotsFired();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateShotsFired

// Begin Class AC_FirstPersonCharacter Function UpdateShotsHit
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateShotsHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateShotsHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateShotsHit();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateShotsHit

// Begin Class AC_FirstPersonCharacter Function UpdateStealth
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateStealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateStealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStealth();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateStealth

// Begin Class AC_FirstPersonCharacter Function UpdateTimeToComplete
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateTimeToComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateTimeToComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTimeToComplete();
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateTimeToComplete

// Begin Class AC_FirstPersonCharacter Function UpdateTimeToKill
struct Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics
{
	struct C_FirstPersonCharacter_eventUpdateTimeToKill_Parms
	{
		float EnemyTimeSurvived;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyTimeSurvived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::NewProp_EnemyTimeSurvived = { "EnemyTimeSurvived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_FirstPersonCharacter_eventUpdateTimeToKill_Parms, EnemyTimeSurvived), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::NewProp_EnemyTimeSurvived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_FirstPersonCharacter, nullptr, "UpdateTimeToKill", nullptr, nullptr, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::C_FirstPersonCharacter_eventUpdateTimeToKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::C_FirstPersonCharacter_eventUpdateTimeToKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_FirstPersonCharacter::execUpdateTimeToKill)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EnemyTimeSurvived);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTimeToKill(Z_Param_EnemyTimeSurvived);
	P_NATIVE_END;
}
// End Class AC_FirstPersonCharacter Function UpdateTimeToKill

// Begin Class AC_FirstPersonCharacter
void AC_FirstPersonCharacter::StaticRegisterNativesAC_FirstPersonCharacter()
{
	UClass* Class = AC_FirstPersonCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AverageDistanceFromKill", &AC_FirstPersonCharacter::execAverageDistanceFromKill },
		{ "AverageTimeToKill", &AC_FirstPersonCharacter::execAverageTimeToKill },
		{ "GetAccuracy", &AC_FirstPersonCharacter::execGetAccuracy },
		{ "GetDistanceFromKill", &AC_FirstPersonCharacter::execGetDistanceFromKill },
		{ "GetDistanceMoved", &AC_FirstPersonCharacter::execGetDistanceMoved },
		{ "GetHealth", &AC_FirstPersonCharacter::execGetHealth },
		{ "GetJumpPref", &AC_FirstPersonCharacter::execGetJumpPref },
		{ "GetStatsAsArray", &AC_FirstPersonCharacter::execGetStatsAsArray },
		{ "GetStealth", &AC_FirstPersonCharacter::execGetStealth },
		{ "GetTimeToComplete", &AC_FirstPersonCharacter::execGetTimeToComplete },
		{ "GetTimeToKill", &AC_FirstPersonCharacter::execGetTimeToKill },
		{ "TakeDamage", &AC_FirstPersonCharacter::execTakeDamage },
		{ "UpdateAccuracy", &AC_FirstPersonCharacter::execUpdateAccuracy },
		{ "UpdateDistanceFromKill", &AC_FirstPersonCharacter::execUpdateDistanceFromKill },
		{ "UpdateHealth", &AC_FirstPersonCharacter::execUpdateHealth },
		{ "UpdateIsDetected", &AC_FirstPersonCharacter::execUpdateIsDetected },
		{ "UpdateShotsFired", &AC_FirstPersonCharacter::execUpdateShotsFired },
		{ "UpdateShotsHit", &AC_FirstPersonCharacter::execUpdateShotsHit },
		{ "UpdateStealth", &AC_FirstPersonCharacter::execUpdateStealth },
		{ "UpdateTimeToComplete", &AC_FirstPersonCharacter::execUpdateTimeToComplete },
		{ "UpdateTimeToKill", &AC_FirstPersonCharacter::execUpdateTimeToKill },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpPref_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMoved_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToComplete_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromKill_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToKill_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stealth_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "C_FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PistolDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotsFired;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotsHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPref;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceMoved;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToComplete;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_AverageDistanceFromKill, "AverageDistanceFromKill" }, // 2939681647
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_AverageTimeToKill, "AverageTimeToKill" }, // 584017581
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy, "GetAccuracy" }, // 789475363
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceFromKill, "GetDistanceFromKill" }, // 246292250
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetDistanceMoved, "GetDistanceMoved" }, // 3793923622
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth, "GetHealth" }, // 2425182468
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetJumpPref, "GetJumpPref" }, // 4071807378
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetStatsAsArray, "GetStatsAsArray" }, // 2536160370
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetStealth, "GetStealth" }, // 3560031927
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToComplete, "GetTimeToComplete" }, // 3587344135
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetTimeToKill, "GetTimeToKill" }, // 1709936340
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage, "TakeDamage" }, // 3463837870
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy, "UpdateAccuracy" }, // 477216252
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateDistanceFromKill, "UpdateDistanceFromKill" }, // 2845905192
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateHealth, "UpdateHealth" }, // 1040150265
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateIsDetected, "UpdateIsDetected" }, // 1821284321
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired, "UpdateShotsFired" }, // 3699157549
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit, "UpdateShotsHit" }, // 2116860451
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateStealth, "UpdateStealth" }, // 4098148732
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete, "UpdateTimeToComplete" }, // 2166445765
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToKill, "UpdateTimeToKill" }, // 2852549555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_FirstPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_PistolDamage = { "PistolDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, PistolDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolDamage_MetaData), NewProp_PistolDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsFired = { "ShotsFired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, ShotsFired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotsFired_MetaData), NewProp_ShotsFired_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsHit = { "ShotsHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, ShotsHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotsHit_MetaData), NewProp_ShotsHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_JumpPref = { "JumpPref", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, JumpPref), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpPref_MetaData), NewProp_JumpPref_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_DistanceMoved = { "DistanceMoved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, DistanceMoved), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMoved_MetaData), NewProp_DistanceMoved_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_TimeToComplete = { "TimeToComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, TimeToComplete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToComplete_MetaData), NewProp_TimeToComplete_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_DistanceFromKill = { "DistanceFromKill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, DistanceFromKill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromKill_MetaData), NewProp_DistanceFromKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_TimeToKill = { "TimeToKill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, TimeToKill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToKill_MetaData), NewProp_TimeToKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Stealth = { "Stealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_FirstPersonCharacter, Stealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stealth_MetaData), NewProp_Stealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_PistolDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_JumpPref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_DistanceMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_TimeToComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_DistanceFromKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_TimeToKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Stealth,
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
	FuncInfo,
	Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_FirstPersonCharacter, AC_FirstPersonCharacter::StaticClass, TEXT("AC_FirstPersonCharacter"), &Z_Registration_Info_UClass_AC_FirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_FirstPersonCharacter), 113860178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_1684664972(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
