// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define TESTPROJECT_MyPlayerController_generated_h

#define TestProject_Source_TestProject_MyPlayerController_h_16_SPARSE_DATA
#define TestProject_Source_TestProject_MyPlayerController_h_16_RPC_WRAPPERS
#define TestProject_Source_TestProject_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define TestProject_Source_TestProject_MyPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define TestProject_Source_TestProject_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define TestProject_Source_TestProject_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController)


#define TestProject_Source_TestProject_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyPlayerController_h_13_PROLOG
#define TestProject_Source_TestProject_MyPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyPlayerController_h_16_SPARSE_DATA \
	TestProject_Source_TestProject_MyPlayerController_h_16_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyPlayerController_h_16_INCLASS \
	TestProject_Source_TestProject_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyPlayerController_h_16_SPARSE_DATA \
	TestProject_Source_TestProject_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
