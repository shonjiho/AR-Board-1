#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIRoot>
struct List_1_t4054032726;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling2807791908.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRoot
struct  UIRoot_t389944298  : public MonoBehaviour_t1158329972
{
public:
	// UIRoot/Scaling UIRoot::scalingStyle
	int32_t ___scalingStyle_3;
	// System.Boolean UIRoot::automatic
	bool ___automatic_4;
	// System.Int32 UIRoot::manualHeight
	int32_t ___manualHeight_5;
	// System.Int32 UIRoot::minimumHeight
	int32_t ___minimumHeight_6;
	// System.Int32 UIRoot::maximumHeight
	int32_t ___maximumHeight_7;
	// UnityEngine.Transform UIRoot::mTrans
	Transform_t3275118058 * ___mTrans_8;

public:
	inline static int32_t get_offset_of_scalingStyle_3() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___scalingStyle_3)); }
	inline int32_t get_scalingStyle_3() const { return ___scalingStyle_3; }
	inline int32_t* get_address_of_scalingStyle_3() { return &___scalingStyle_3; }
	inline void set_scalingStyle_3(int32_t value)
	{
		___scalingStyle_3 = value;
	}

	inline static int32_t get_offset_of_automatic_4() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___automatic_4)); }
	inline bool get_automatic_4() const { return ___automatic_4; }
	inline bool* get_address_of_automatic_4() { return &___automatic_4; }
	inline void set_automatic_4(bool value)
	{
		___automatic_4 = value;
	}

	inline static int32_t get_offset_of_manualHeight_5() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___manualHeight_5)); }
	inline int32_t get_manualHeight_5() const { return ___manualHeight_5; }
	inline int32_t* get_address_of_manualHeight_5() { return &___manualHeight_5; }
	inline void set_manualHeight_5(int32_t value)
	{
		___manualHeight_5 = value;
	}

	inline static int32_t get_offset_of_minimumHeight_6() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___minimumHeight_6)); }
	inline int32_t get_minimumHeight_6() const { return ___minimumHeight_6; }
	inline int32_t* get_address_of_minimumHeight_6() { return &___minimumHeight_6; }
	inline void set_minimumHeight_6(int32_t value)
	{
		___minimumHeight_6 = value;
	}

	inline static int32_t get_offset_of_maximumHeight_7() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___maximumHeight_7)); }
	inline int32_t get_maximumHeight_7() const { return ___maximumHeight_7; }
	inline int32_t* get_address_of_maximumHeight_7() { return &___maximumHeight_7; }
	inline void set_maximumHeight_7(int32_t value)
	{
		___maximumHeight_7 = value;
	}

	inline static int32_t get_offset_of_mTrans_8() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___mTrans_8)); }
	inline Transform_t3275118058 * get_mTrans_8() const { return ___mTrans_8; }
	inline Transform_t3275118058 ** get_address_of_mTrans_8() { return &___mTrans_8; }
	inline void set_mTrans_8(Transform_t3275118058 * value)
	{
		___mTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_8, value);
	}
};

struct UIRoot_t389944298_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIRoot> UIRoot::mRoots
	List_1_t4054032726 * ___mRoots_2;

public:
	inline static int32_t get_offset_of_mRoots_2() { return static_cast<int32_t>(offsetof(UIRoot_t389944298_StaticFields, ___mRoots_2)); }
	inline List_1_t4054032726 * get_mRoots_2() const { return ___mRoots_2; }
	inline List_1_t4054032726 ** get_address_of_mRoots_2() { return &___mRoots_2; }
	inline void set_mRoots_2(List_1_t4054032726 * value)
	{
		___mRoots_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRoots_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
