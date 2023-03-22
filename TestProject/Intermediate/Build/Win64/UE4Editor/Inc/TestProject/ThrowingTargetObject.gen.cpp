// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/ThrowingTargetObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowingTargetObject() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_AThrowingTargetObject_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AThrowingTargetObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AThrowingTargetObject::StaticRegisterNativesAThrowingTargetObject()
	{
	}
	UClass* Z_Construct_UClass_AThrowingTargetObject_NoRegister()
	{
		return AThrowingTargetObject::StaticClass();
	}
	struct Z_Construct_UClass_AThrowingTargetObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowingTargetObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingTargetObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThrowingTargetObject.h" },
		{ "ModuleRelativePath", "ThrowingTargetObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingTargetObject_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "ThrowingTargetObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowingTargetObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingTargetObject_Statics::NewProp_ObjectMesh = { "ObjectMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingTargetObject, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingTargetObject_Statics::NewProp_ObjectMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingTargetObject_Statics::NewProp_ObjectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowingTargetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingTargetObject_Statics::NewProp_ObjectMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowingTargetObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowingTargetObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowingTargetObject_Statics::ClassParams = {
		&AThrowingTargetObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThrowingTargetObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingTargetObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowingTargetObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingTargetObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowingTargetObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowingTargetObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowingTargetObject, 2755485223);
	template<> TESTPROJECT_API UClass* StaticClass<AThrowingTargetObject>()
	{
		return AThrowingTargetObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowingTargetObject(Z_Construct_UClass_AThrowingTargetObject, &AThrowingTargetObject::StaticClass, TEXT("/Script/TestProject"), TEXT("AThrowingTargetObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowingTargetObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
