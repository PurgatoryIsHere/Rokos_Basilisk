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

// Begin Class AC_FirstPersonCharacter
void AC_FirstPersonCharacter::StaticRegisterNativesAC_FirstPersonCharacter()
{
	UClass* Class = AC_FirstPersonCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAccuracy", &AC_FirstPersonCharacter::execGetAccuracy },
		{ "GetHealth", &AC_FirstPersonCharacter::execGetHealth },
		{ "TakeDamage", &AC_FirstPersonCharacter::execTakeDamage },
		{ "UpdateAccuracy", &AC_FirstPersonCharacter::execUpdateAccuracy },
		{ "UpdateShotsFired", &AC_FirstPersonCharacter::execUpdateShotsFired },
		{ "UpdateShotsHit", &AC_FirstPersonCharacter::execUpdateShotsHit },
		{ "UpdateTimeToComplete", &AC_FirstPersonCharacter::execUpdateTimeToComplete },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PistolDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotsFired;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotsHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPref;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceMoved;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetAccuracy, "GetAccuracy" }, // 789475363
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_GetHealth, "GetHealth" }, // 2425182468
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_TakeDamage, "TakeDamage" }, // 3463837870
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateAccuracy, "UpdateAccuracy" }, // 477216252
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsFired, "UpdateShotsFired" }, // 3699157549
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateShotsHit, "UpdateShotsHit" }, // 2116860451
		{ &Z_Construct_UFunction_AC_FirstPersonCharacter_UpdateTimeToComplete, "UpdateTimeToComplete" }, // 2166445765
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_FirstPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_PistolDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_ShotsHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_JumpPref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_DistanceMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_FirstPersonCharacter_Statics::NewProp_TimeToComplete,
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
struct Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_FirstPersonCharacter, AC_FirstPersonCharacter::StaticClass, TEXT("AC_FirstPersonCharacter"), &Z_Registration_Info_UClass_AC_FirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_FirstPersonCharacter), 1494066944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_3951612925(TEXT("/Script/TutorialProject"),
	Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
