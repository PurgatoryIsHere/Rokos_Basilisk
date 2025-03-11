// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_LevelBuilderAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_C_LevelBuilderAI_generated_h
#error "C_LevelBuilderAI.generated.h already included, missing '#pragma once' in C_LevelBuilderAI.h"
#endif
#define TUTORIALPROJECT_C_LevelBuilderAI_generated_h

#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerRatingsAsArray); \
	DECLARE_FUNCTION(execGetPlayerPreservationRating); \
	DECLARE_FUNCTION(execGetPlayerMovementRating); \
	DECLARE_FUNCTION(execGetPlayerScoreRating); \
	DECLARE_FUNCTION(execGetPlayerSkillRating); \
	DECLARE_FUNCTION(execGenerateLevelGrammar); \
	DECLARE_FUNCTION(execCalculatePlayerStats); \
	DECLARE_FUNCTION(execPrintPrefabInfo); \
	DECLARE_FUNCTION(execLoadPrefabs);


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_LevelBuilderAI(); \
	friend struct Z_Construct_UClass_AC_LevelBuilderAI_Statics; \
public: \
	DECLARE_CLASS(AC_LevelBuilderAI, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(AC_LevelBuilderAI)


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_LevelBuilderAI(AC_LevelBuilderAI&&); \
	AC_LevelBuilderAI(const AC_LevelBuilderAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_LevelBuilderAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_LevelBuilderAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_LevelBuilderAI) \
	NO_API virtual ~AC_LevelBuilderAI();


#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_9_PROLOG
#define FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class AC_LevelBuilderAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_LevelBuilderAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
