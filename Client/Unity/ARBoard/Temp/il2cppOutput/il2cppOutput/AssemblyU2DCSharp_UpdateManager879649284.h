#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpdateManager
struct UpdateManager_t879649284;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t2739708272;
// BetterList`1<UpdateManager/DestroyEntry>
struct BetterList_1_t208045763;
// System.Comparison`1<UpdateManager/UpdateEntry>
struct Comparison_1_t337358695;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateManager
struct  UpdateManager_t879649284  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnUpdate
	List_1_t2739708272 * ___mOnUpdate_3;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnLate
	List_1_t2739708272 * ___mOnLate_4;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnCoro
	List_1_t2739708272 * ___mOnCoro_5;
	// BetterList`1<UpdateManager/DestroyEntry> UpdateManager::mDest
	BetterList_1_t208045763 * ___mDest_6;
	// System.Single UpdateManager::mTime
	float ___mTime_7;

public:
	inline static int32_t get_offset_of_mOnUpdate_3() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284, ___mOnUpdate_3)); }
	inline List_1_t2739708272 * get_mOnUpdate_3() const { return ___mOnUpdate_3; }
	inline List_1_t2739708272 ** get_address_of_mOnUpdate_3() { return &___mOnUpdate_3; }
	inline void set_mOnUpdate_3(List_1_t2739708272 * value)
	{
		___mOnUpdate_3 = value;
		Il2CppCodeGenWriteBarrier(&___mOnUpdate_3, value);
	}

	inline static int32_t get_offset_of_mOnLate_4() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284, ___mOnLate_4)); }
	inline List_1_t2739708272 * get_mOnLate_4() const { return ___mOnLate_4; }
	inline List_1_t2739708272 ** get_address_of_mOnLate_4() { return &___mOnLate_4; }
	inline void set_mOnLate_4(List_1_t2739708272 * value)
	{
		___mOnLate_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOnLate_4, value);
	}

	inline static int32_t get_offset_of_mOnCoro_5() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284, ___mOnCoro_5)); }
	inline List_1_t2739708272 * get_mOnCoro_5() const { return ___mOnCoro_5; }
	inline List_1_t2739708272 ** get_address_of_mOnCoro_5() { return &___mOnCoro_5; }
	inline void set_mOnCoro_5(List_1_t2739708272 * value)
	{
		___mOnCoro_5 = value;
		Il2CppCodeGenWriteBarrier(&___mOnCoro_5, value);
	}

	inline static int32_t get_offset_of_mDest_6() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284, ___mDest_6)); }
	inline BetterList_1_t208045763 * get_mDest_6() const { return ___mDest_6; }
	inline BetterList_1_t208045763 ** get_address_of_mDest_6() { return &___mDest_6; }
	inline void set_mDest_6(BetterList_1_t208045763 * value)
	{
		___mDest_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDest_6, value);
	}

	inline static int32_t get_offset_of_mTime_7() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284, ___mTime_7)); }
	inline float get_mTime_7() const { return ___mTime_7; }
	inline float* get_address_of_mTime_7() { return &___mTime_7; }
	inline void set_mTime_7(float value)
	{
		___mTime_7 = value;
	}
};

struct UpdateManager_t879649284_StaticFields
{
public:
	// UpdateManager UpdateManager::mInst
	UpdateManager_t879649284 * ___mInst_2;
	// System.Comparison`1<UpdateManager/UpdateEntry> UpdateManager::<>f__mg$cache0
	Comparison_1_t337358695 * ___U3CU3Ef__mgU24cache0_8;

public:
	inline static int32_t get_offset_of_mInst_2() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284_StaticFields, ___mInst_2)); }
	inline UpdateManager_t879649284 * get_mInst_2() const { return ___mInst_2; }
	inline UpdateManager_t879649284 ** get_address_of_mInst_2() { return &___mInst_2; }
	inline void set_mInst_2(UpdateManager_t879649284 * value)
	{
		___mInst_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInst_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(UpdateManager_t879649284_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline Comparison_1_t337358695 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline Comparison_1_t337358695 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(Comparison_1_t337358695 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
