// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSubmixInputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	void UAkSubmixInputComponent::StaticRegisterNativesUAkSubmixInputComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister()
	{
		return UAkSubmixInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSubmixInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSubmixInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkSubmixInputComponent\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ToolTip", "UAkSubmixInputComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSubmixInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSubmixInputComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams = {
		&UAkSubmixInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSubmixInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSubmixInputComponent, 1637290478);
	template<> AKAUDIO_API UClass* StaticClass<UAkSubmixInputComponent>()
	{
		return UAkSubmixInputComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSubmixInputComponent(Z_Construct_UClass_UAkSubmixInputComponent, &UAkSubmixInputComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSubmixInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSubmixInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
