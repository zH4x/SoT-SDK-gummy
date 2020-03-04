#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C
// 0x0020 (0x07E8 - 0x07C8)
class ABP_MerchantCrate_GunpowderProxy_Base_C : public AStaticMerchantCrateItemProxy
{
public:
	class UItemProxyShipTrackerComponent*              ItemProxyShipTracker;                                     // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemHealthComponent*                        ItemHealth;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlammableWieldableComponent*                FlammableWieldable;                                       // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif