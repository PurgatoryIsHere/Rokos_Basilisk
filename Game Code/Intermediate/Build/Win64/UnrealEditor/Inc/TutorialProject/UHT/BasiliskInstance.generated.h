// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasiliskInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_BasiliskInstance_generated_h
#error "BasiliskInstance.generated.h already included, missing '#pragma once' in BasiliskInstance.h"
#endif
#define TUTORIALPROJECT_BasiliskInstance_generated_h

#define FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePlayerRatings); \
	DECLARE_FUNCTION(execGetPlayerPreservationRating); \
	DECLARE_FUNCTION(execGetPlayerMovementRating); \
	DECLARE_FUNCTION(execGetPlayerScoreRating); \
	DECLARE_FUNCTION(execGetPlayerSkillRating);


#define FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasiliskInstance(); \
	friend struct Z_Construct_UClass_UBasiliskInstance_Statics; \
public: \
	DECLARE_CLASS(UBasiliskInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(UBasiliskInstance)


#define FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasiliskInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasiliskInstance(UBasiliskInstance&&); \
	UBasiliskInstance(const UBasiliskInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasiliskInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasiliskInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasiliskInstance) \
	NO_API virtual ~UBasiliskInstance();


#define FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_12_PROLOG
#define FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class UBasiliskInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chees_Documents_GitHub_Rokos_Basilisk_Game_Code_Source_TutorialProject_BasiliskInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
