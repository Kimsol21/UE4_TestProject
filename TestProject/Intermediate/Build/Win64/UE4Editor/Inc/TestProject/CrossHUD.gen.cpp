// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/CrossHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossHUD() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_ACrossHUD_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ACrossHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ACrossHUD::StaticRegisterNativesACrossHUD()
	{
	}
	UClass* Z_Construct_UClass_ACrossHUD_NoRegister()
	{
		return ACrossHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACrossHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CrossHUD.h" },
		{ "ModuleRelativePath", "CrossHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "CrossHUD" },
		{ "ModuleRelativePath", "CrossHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrossHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrossHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrossHUD_Statics::NewProp_CrosshairTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrossHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossHUD_Statics::ClassParams = {
		&ACrossHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACrossHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrossHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossHUD, 1915728244);
	template<> TESTPROJECT_API UClass* StaticClass<ACrossHUD>()
	{
		return ACrossHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossHUD(Z_Construct_UClass_ACrossHUD, &ACrossHUD::StaticClass, TEXT("/Script/TestProject"), TEXT("ACrossHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
