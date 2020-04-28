// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_GetRenderToTexture(const struct FName& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture");

	URenderToTextureFunctionLibrary_GetRenderToTexture_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               Resolution                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLinearGamma              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAlpha                  (Parm, ZeroConstructor, IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture");

	URenderToTextureFunctionLibrary_CreateRenderToTexture_Params params;
	params.Identifier = Identifier;
	params.ClassToSpawn = ClassToSpawn;
	params.Resolution = Resolution;
	params.bForceLinearGamma = bForceLinearGamma;
	params.bCaptureAlpha = bCaptureAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture");

	URenderToTextureSceneDetails_GetTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* URenderToTextureSceneDetails::GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance");

	URenderToTextureSceneDetails_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
// (Final, Native, Public, BlueprintCallable)

void URenderToTextureSceneDetails::DestroyTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture");

	URenderToTextureSceneDetails_DestroyTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
