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

// BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLocked_Base_Proxy.BP_TreasureChest_GoldHoarderLocked_Base_Proxy_C
// 0x0000 (0x0959 - 0x0959)
class ABP_TreasureChest_GoldHoarderLocked_Base_Proxy_C : public ABP_CollectorsChest_OneLock_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLocked_Base_Proxy.BP_TreasureChest_GoldHoarderLocked_Base_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
