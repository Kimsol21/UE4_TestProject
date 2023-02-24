// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/WidgetGage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGage() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UWidgetGage_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UWidgetGage();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetGage::execOnClickButton_Test)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickButton_Test();
		P_NATIVE_END;
	}
	void UWidgetGage::StaticRegisterNativesUWidgetGage()
	{
		UClass* Class = UWidgetGage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickButton_Test", &UWidgetGage::execOnClickButton_Test },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetGage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetGage, nullptr, "OnClickButton_Test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetGage_OnClickButton_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetGage_OnClickButton_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetGage_NoRegister()
	{
		return UWidgetGage::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetGage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PB_ThrowingPowerGage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PB_ThrowingPowerGage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetGage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetGage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetGage_OnClickButton_Test, "OnClickButton_Test" }, // 470793381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WidgetGage.h" },
		{ "ModuleRelativePath", "WidgetGage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGage_Statics::NewProp_PB_ThrowingPowerGage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGage_Statics::NewProp_PB_ThrowingPowerGage = { "PB_ThrowingPowerGage", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGage, PB_ThrowingPowerGage), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGage_Statics::NewProp_PB_ThrowingPowerGage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGage_Statics::NewProp_PB_ThrowingPowerGage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetGage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGage_Statics::NewProp_PB_ThrowingPowerGage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetGage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetGage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetGage_Statics::ClassParams = {
		&UWidgetGage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetGage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGage_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetGage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetGage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetGage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetGage, 1663615023);
	template<> TESTPROJECT_API UClass* StaticClass<UWidgetGage>()
	{
		return UWidgetGage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetGage(Z_Construct_UClass_UWidgetGage, &UWidgetGage::StaticClass, TEXT("/Script/TestProject"), TEXT("UWidgetGage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetGage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
