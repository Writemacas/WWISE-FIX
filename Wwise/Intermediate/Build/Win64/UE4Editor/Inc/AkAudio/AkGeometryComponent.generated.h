// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SurfaceArea() { return STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea); }


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkGeometrySurfaceOverride>();

#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_SPARSE_DATA
#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execConvertMesh);


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execConvertMesh);


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent, NO_API)


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGeometryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public:


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGeometryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent)


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(UAkGeometryComponent, GeometryData); } \
	FORCEINLINE static uint32 __PPO__SurfaceAreas() { return STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas); }


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_77_PROLOG
#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_SPARSE_DATA \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_SPARSE_DATA \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGeometryComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGeometryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h


#define FOREACH_ENUM_AKMESHTYPE(op) \
	op(AkMeshType::StaticMesh) \
	op(AkMeshType::CollisionMesh) 

enum class AkMeshType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
