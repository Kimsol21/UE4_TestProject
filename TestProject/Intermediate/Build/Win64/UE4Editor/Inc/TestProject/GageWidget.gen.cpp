// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/GageWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGageWidget() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UGageWidget_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UGageWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void UGageWidget::StaticRegisterNativesUGageWidget()
	{
	}
	UClass* Z_Construct_UClass_UGageWidget_NoRegister()
	{
		return UGageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "GageWidget.h" },
		{ "ModuleRelativePath", "GageWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGageWidget_Statics::ClassParams = {
		&UGageWidget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGageWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGageWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGageWidget, 2863120609);
	template<> TESTPROJECT_API UClass* StaticClass<UGageWidget>()
	{
		return UGageWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGageWidget(Z_Construct_UClass_UGageWidget, &UGageWidget::StaticClass, TEXT("/Script/TestProject"), TEXT("UGageWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGageWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
