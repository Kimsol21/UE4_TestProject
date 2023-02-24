// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTPROJECT_MyBall_generated_h
#error "MyBall.generated.h already included, missing '#pragma once' in MyBall.h"
#endif
#define TESTPROJECT_MyBall_generated_h

#define TestProject_Source_TestProject_MyBall_h_14_SPARSE_DATA
#define TestProject_Source_TestProject_MyBall_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TestProject_Source_TestProject_MyBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TestProject_Source_TestProject_MyBall_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBall(); \
	friend struct Z_Construct_UClass_AMyBall_Statics; \
public: \
	DECLARE_CLASS(AMyBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyBall)


#define TestProject_Source_TestProject_MyBall_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyBall(); \
	friend struct Z_Construct_UClass_AMyBall_Statics; \
public: \
	DECLARE_CLASS(AMyBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyBall)


#define TestProject_Source_TestProject_MyBall_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBall(AMyBall&&); \
	NO_API AMyBall(const AMyBall&); \
public:


#define TestProject_Source_TestProject_MyBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBall(AMyBall&&); \
	NO_API AMyBall(const AMyBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBall)


#define TestProject_Source_TestProject_MyBall_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyBall_h_11_PROLOG
#define TestProject_Source_TestProject_MyBall_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyBall_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyBall_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyBall_h_14_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyBall_h_14_INCLASS \
	TestProject_Source_TestProject_MyBall_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyBall_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyBall_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyBall_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyBall_h_14_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AMyBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
