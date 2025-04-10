// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_BasiliskInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_C_BasiliskInstance_generated_h
#error "C_BasiliskInstance.generated.h already included, missing '#pragma once' in C_BasiliskInstance.h"
#endif
#define TUTORIALPROJECT_C_BasiliskInstance_generated_h

#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePlayerRatings); \
	DECLARE_FUNCTION(execGetPlayerPreservationRating); \
	DECLARE_FUNCTION(execGetPlayerMovementRating); \
	DECLARE_FUNCTION(execGetPlayerScoreRating); \
	DECLARE_FUNCTION(execGetPlayerSkillRating);


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_BasiliskInstance(); \
	friend struct Z_Construct_UClass_UC_BasiliskInstance_Statics; \
public: \
	DECLARE_CLASS(UC_BasiliskInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(UC_BasiliskInstance)


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_BasiliskInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_BasiliskInstance(UC_BasiliskInstance&&); \
	UC_BasiliskInstance(const UC_BasiliskInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_BasiliskInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_BasiliskInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_BasiliskInstance) \
	NO_API virtual ~UC_BasiliskInstance();


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_12_PROLOG
#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class UC_BasiliskInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_BasiliskInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
