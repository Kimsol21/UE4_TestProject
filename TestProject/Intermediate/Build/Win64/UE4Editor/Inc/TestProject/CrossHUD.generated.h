// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_CrossHUD_generated_h
#error "CrossHUD.generated.h already included, missing '#pragma once' in CrossHUD.h"
#endif
#define TESTPROJECT_CrossHUD_generated_h

#define TestProject_Source_TestProject_CrossHUD_h_15_SPARSE_DATA
#define TestProject_Source_TestProject_CrossHUD_h_15_RPC_WRAPPERS
#define TestProject_Source_TestProject_CrossHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_CrossHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossHUD(); \
	friend struct Z_Construct_UClass_ACrossHUD_Statics; \
public: \
	DECLARE_CLASS(ACrossHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ACrossHUD)


#define TestProject_Source_TestProject_CrossHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACrossHUD(); \
	friend struct Z_Construct_UClass_ACrossHUD_Statics; \
public: \
	DECLARE_CLASS(ACrossHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ACrossHUD)


#define TestProject_Source_TestProject_CrossHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossHUD(ACrossHUD&&); \
	NO_API ACrossHUD(const ACrossHUD&); \
public:


#define TestProject_Source_TestProject_CrossHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossHUD(ACrossHUD&&); \
	NO_API ACrossHUD(const ACrossHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrossHUD)


#define TestProject_Source_TestProject_CrossHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairTexture() { return STRUCT_OFFSET(ACrossHUD, CrosshairTexture); }


#define TestProject_Source_TestProject_CrossHUD_h_12_PROLOG
#define TestProject_Source_TestProject_CrossHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_CrossHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_CrossHUD_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_CrossHUD_h_15_RPC_WRAPPERS \
	TestProject_Source_TestProject_CrossHUD_h_15_INCLASS \
	TestProject_Source_TestProject_CrossHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_CrossHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_CrossHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_CrossHUD_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_CrossHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_CrossHUD_h_15_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_CrossHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ACrossHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_CrossHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
