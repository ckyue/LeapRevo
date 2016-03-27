// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
#ifdef LEAPMOTION_LeapScreenTapGesture_generated_h
#error "LeapScreenTapGesture.generated.h already included, missing '#pragma once' in LeapScreenTapGesture.h"
#endif
#define LEAPMOTION_LeapScreenTapGesture_generated_h

#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
	}


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
	}


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapScreenTapGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapScreenTapGesture(); \
	public: \
	DECLARE_CLASS(ULeapScreenTapGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapScreenTapGesture) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapScreenTapGesture*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesULeapScreenTapGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapScreenTapGesture(); \
	public: \
	DECLARE_CLASS(ULeapScreenTapGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapScreenTapGesture) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapScreenTapGesture*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapScreenTapGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapScreenTapGesture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapScreenTapGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapScreenTapGesture); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapScreenTapGesture(const ULeapScreenTapGesture& InCopy); \
public:


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapScreenTapGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapScreenTapGesture(const ULeapScreenTapGesture& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapScreenTapGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapScreenTapGesture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapScreenTapGesture)


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_8_PROLOG
#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_RPC_WRAPPERS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_INCLASS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_INCLASS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapScreenTapGesture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapScreenTapGesture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
