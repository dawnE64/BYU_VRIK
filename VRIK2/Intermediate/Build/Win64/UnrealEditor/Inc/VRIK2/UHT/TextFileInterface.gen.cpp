// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRIK2/TextFileInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFileInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRIK2();
	VRIK2_API UClass* Z_Construct_UClass_UTextFileInterface();
	VRIK2_API UClass* Z_Construct_UClass_UTextFileInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTextFileInterface::execReadStringFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTextFileInterface::ReadStringFromFile(Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void UTextFileInterface::StaticRegisterNativesUTextFileInterface()
	{
		UClass* Class = UTextFileInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadStringFromFile", &UTextFileInterface::execReadStringFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics
	{
		struct TextFileInterface_eventReadStringFromFile_Parms
		{
			FString FilePath;
			bool bOutSuccess;
			FString OutInfoMessage;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextFileInterface_eventReadStringFromFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((TextFileInterface_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextFileInterface_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextFileInterface_eventReadStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextFileInterface_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Read" },
		{ "ModuleRelativePath", "TextFileInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextFileInterface, nullptr, "ReadStringFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::TextFileInterface_eventReadStringFromFile_Parms), Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextFileInterface);
	UClass* Z_Construct_UClass_UTextFileInterface_NoRegister()
	{
		return UTextFileInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTextFileInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFileInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRIK2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextFileInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextFileInterface_ReadStringFromFile, "ReadStringFromFile" }, // 4275771502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFileInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextFileInterface.h" },
		{ "ModuleRelativePath", "TextFileInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFileInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFileInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextFileInterface_Statics::ClassParams = {
		&UTextFileInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextFileInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFileInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFileInterface()
	{
		if (!Z_Registration_Info_UClass_UTextFileInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextFileInterface.OuterSingleton, Z_Construct_UClass_UTextFileInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextFileInterface.OuterSingleton;
	}
	template<> VRIK2_API UClass* StaticClass<UTextFileInterface>()
	{
		return UTextFileInterface::StaticClass();
	}
	UTextFileInterface::UTextFileInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFileInterface);
	UTextFileInterface::~UTextFileInterface() {}
	struct Z_CompiledInDeferFile_FID_BYU_VRIK_VRIK2_Source_VRIK2_TextFileInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BYU_VRIK_VRIK2_Source_VRIK2_TextFileInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextFileInterface, UTextFileInterface::StaticClass, TEXT("UTextFileInterface"), &Z_Registration_Info_UClass_UTextFileInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextFileInterface), 3469026239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BYU_VRIK_VRIK2_Source_VRIK2_TextFileInterface_h_2362021250(TEXT("/Script/VRIK2"),
		Z_CompiledInDeferFile_FID_BYU_VRIK_VRIK2_Source_VRIK2_TextFileInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BYU_VRIK_VRIK2_Source_VRIK2_TextFileInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
