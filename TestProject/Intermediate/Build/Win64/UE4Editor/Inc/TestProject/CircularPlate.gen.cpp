// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/CircularPlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularPlate() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_ACircularPlate_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ACircularPlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACircularPlate::StaticRegisterNativesACircularPlate()
	{
	}
	UClass* Z_Construct_UClass_ACircularPlate_NoRegister()
	{
		return ACircularPlate::StaticClass();
	}
	struct Z_Construct_UClass_ACircularPlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlateMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACircularPlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircularPlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CircularPlate.h" },
		{ "ModuleRelativePath", "CircularPlate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircularPlate_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Plate" },
		{ "ModuleRelativePath", "CircularPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircularPlate_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircularPlate, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ACircularPlate_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircularPlate_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircularPlate_Statics::NewProp_PlateMesh_MetaData[] = {
		{ "Category", "Plate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CircularPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACircularPlate_Statics::NewProp_PlateMesh = { "PlateMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircularPlate, PlateMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACircularPlate_Statics::NewProp_PlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircularPlate_Statics::NewProp_PlateMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACircularPlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircularPlate_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircularPlate_Statics::NewProp_PlateMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACircularPlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircularPlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACircularPlate_Statics::ClassParams = {
		&ACircularPlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACircularPlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACircularPlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACircularPlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACircularPlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACircularPlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACircularPlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACircularPlate, 2224148245);
	template<> TESTPROJECT_API UClass* StaticClass<ACircularPlate>()
	{
		return ACircularPlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACircularPlate(Z_Construct_UClass_ACircularPlate, &ACircularPlate::StaticClass, TEXT("/Script/TestProject"), TEXT("ACircularPlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACircularPlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
