#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragDropItem
struct  DragDropItem_t699041384  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DragDropItem::prefab
	GameObject_t1756533147 * ___prefab_2;
	// UnityEngine.Transform DragDropItem::mTrans
	Transform_t3275118058 * ___mTrans_3;
	// System.Boolean DragDropItem::mIsDragging
	bool ___mIsDragging_4;
	// System.Boolean DragDropItem::mSticky
	bool ___mSticky_5;
	// UnityEngine.Transform DragDropItem::mParent
	Transform_t3275118058 * ___mParent_6;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(DragDropItem_t699041384, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(DragDropItem_t699041384, ___mTrans_3)); }
	inline Transform_t3275118058 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3275118058 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3275118058 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_3, value);
	}

	inline static int32_t get_offset_of_mIsDragging_4() { return static_cast<int32_t>(offsetof(DragDropItem_t699041384, ___mIsDragging_4)); }
	inline bool get_mIsDragging_4() const { return ___mIsDragging_4; }
	inline bool* get_address_of_mIsDragging_4() { return &___mIsDragging_4; }
	inline void set_mIsDragging_4(bool value)
	{
		___mIsDragging_4 = value;
	}

	inline static int32_t get_offset_of_mSticky_5() { return static_cast<int32_t>(offsetof(DragDropItem_t699041384, ___mSticky_5)); }
	inline bool get_mSticky_5() const { return ___mSticky_5; }
	inline bool* get_address_of_mSticky_5() { return &___mSticky_5; }
	inline void set_mSticky_5(bool value)
	{
		___mSticky_5 = value;
	}

	inline static int32_t get_offset_of_mParent_6() { return static_cast<int32_t>(offsetof(DragDropItem_t699041384, ___mParent_6)); }
	inline Transform_t3275118058 * get_mParent_6() const { return ___mParent_6; }
	inline Transform_t3275118058 ** get_address_of_mParent_6() { return &___mParent_6; }
	inline void set_mParent_6(Transform_t3275118058 * value)
	{
		___mParent_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
