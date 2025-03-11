// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TutorialProject/BasiliskInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasiliskInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_UBasiliskInstance();
TUTORIALPROJECT_API UClass* Z_Construct_UClass_UBasiliskInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TutorialProject();
// End Cross Module References

// Begin Class UBasiliskInstance Function GetPlayerMovementRating
struct Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics
{
	struct BasiliskInstance_eventGetPlayerMovementRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasiliskInstance_eventGetPlayerMovementRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasiliskInstance, nullptr, "GetPlayerMovementRating", nullptr, nullptr, Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::BasiliskInstance_eventGetPlayerMovementRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::BasiliskInstance_eventGetPlayerMovementRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasiliskInstance::execGetPlayerMovementRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerMovementRating();
	P_NATIVE_END;
}
// End Class UBasiliskInstance Function GetPlayerMovementRating

// Begin Class UBasiliskInstance Function GetPlayerPreservationRating
struct Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics
{
	struct BasiliskInstance_eventGetPlayerPreservationRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasiliskInstance_eventGetPlayerPreservationRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasiliskInstance, nullptr, "GetPlayerPreservationRating", nullptr, nullptr, Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::BasiliskInstance_eventGetPlayerPreservationRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::BasiliskInstance_eventGetPlayerPreservationRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasiliskInstance::execGetPlayerPreservationRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerPreservationRating();
	P_NATIVE_END;
}
// End Class UBasiliskInstance Function GetPlayerPreservationRating

// Begin Class UBasiliskInstance Function GetPlayerScoreRating
struct Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics
{
	struct BasiliskInstance_eventGetPlayerScoreRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasiliskInstance_eventGetPlayerScoreRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasiliskInstance, nullptr, "GetPlayerScoreRating", nullptr, nullptr, Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::BasiliskInstance_eventGetPlayerScoreRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::BasiliskInstance_eventGetPlayerScoreRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasiliskInstance::execGetPlayerScoreRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerScoreRating();
	P_NATIVE_END;
}
// End Class UBasiliskInstance Function GetPlayerScoreRating

// Begin Class UBasiliskInstance Function GetPlayerSkillRating
struct Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics
{
	struct BasiliskInstance_eventGetPlayerSkillRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasiliskInstance_eventGetPlayerSkillRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasiliskInstance, nullptr, "GetPlayerSkillRating", nullptr, nullptr, Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::BasiliskInstance_eventGetPlayerSkillRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::BasiliskInstance_eventGetPlayerSkillRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasiliskInstance::execGetPlayerSkillRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerSkillRating();
	P_NATIVE_END;
}
// End Class UBasiliskInstance Function GetPlayerSkillRating

// Begin Class UBasiliskInstance Function UpdatePlayerRatings
struct Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics
{
	struct BasiliskInstance_eventUpdatePlayerRatings_Parms
	{
		TArray<float> PlayerRatings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerRatings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerRatings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings_Inner = { "PlayerRatings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings = { "PlayerRatings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasiliskInstance_eventUpdatePlayerRatings_Parms, PlayerRatings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::NewProp_PlayerRatings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasiliskInstance, nullptr, "UpdatePlayerRatings", nullptr, nullptr, Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::BasiliskInstance_eventUpdatePlayerRatings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::BasiliskInstance_eventUpdatePlayerRatings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasiliskInstance::execUpdatePlayerRatings)
{
	P_GET_TARRAY(float,Z_Param_PlayerRatings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerRatings(Z_Param_PlayerRatings);
	P_NATIVE_END;
}
// End Class UBasiliskInstance Function UpdatePlayerRatings

// Begin Class UBasiliskInstance
void UBasiliskInstance::StaticRegisterNativesUBasiliskInstance()
{
	UClass* Class = UBasiliskInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerMovementRating", &UBasiliskInstance::execGetPlayerMovementRating },
		{ "GetPlayerPreservationRating", &UBasiliskInstance::execGetPlayerPreservationRating },
		{ "GetPlayerScoreRating", &UBasiliskInstance::execGetPlayerScoreRating },
		{ "GetPlayerSkillRating", &UBasiliskInstance::execGetPlayerSkillRating },
		{ "UpdatePlayerRatings", &UBasiliskInstance::execUpdatePlayerRatings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasiliskInstance);
UClass* Z_Construct_UClass_UBasiliskInstance_NoRegister()
{
	return UBasiliskInstance::StaticClass();
}
struct Z_Construct_UClass_UBasiliskInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BasiliskInstance.h" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSkill_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovement_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPreservation_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "BasiliskInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerSkill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerPreservation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasiliskInstance_GetPlayerMovementRating, "GetPlayerMovementRating" }, // 528423502
		{ &Z_Construct_UFunction_UBasiliskInstance_GetPlayerPreservationRating, "GetPlayerPreservationRating" }, // 2912887064
		{ &Z_Construct_UFunction_UBasiliskInstance_GetPlayerScoreRating, "GetPlayerScoreRating" }, // 2439998816
		{ &Z_Construct_UFunction_UBasiliskInstance_GetPlayerSkillRating, "GetPlayerSkillRating" }, // 4157650031
		{ &Z_Construct_UFunction_UBasiliskInstance_UpdatePlayerRatings, "UpdatePlayerRatings" }, // 1607689968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasiliskInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerSkill = { "PlayerSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasiliskInstance, PlayerSkill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSkill_MetaData), NewProp_PlayerSkill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasiliskInstance, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerMovement = { "PlayerMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasiliskInstance, PlayerMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMovement_MetaData), NewProp_PlayerMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerPreservation = { "PlayerPreservation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasiliskInstance, PlayerPreservation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPreservation_MetaData), NewProp_PlayerPreservation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasiliskInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasiliskInstance_Statics::NewProp_PlayerPreservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasiliskInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasiliskInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TutorialProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasiliskInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasiliskInstance_Statics::ClassParams = {
	&UBasiliskInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasiliskInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasiliskInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasiliskInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasiliskInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasiliskInstance()
{
	if (!Z_Registration_Info_UClass_UBasiliskInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasiliskInstance.OuterSingleton, Z_Construct_UClass_UBasiliskInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasiliskInstance.OuterSingleton;
}
template<> TUTORIALPROJECT_API UClass* StaticClass<UBasiliskInstance>()
{
	return UBasiliskInstance::StaticClass();
}
UBasiliskInstance::UBasiliskInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasiliskInstance);
UBasiliskInstance::~UBasiliskInstance() {}
// End Class UBasiliskInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasiliskInstance, UBasiliskInstance::StaticClass, TEXT("UBasiliskInstance"), &Z_Registration_Info_UClass_UBasiliskInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasiliskInstance), 3136389478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_3476108018(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
