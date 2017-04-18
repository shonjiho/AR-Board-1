#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel/OnFinished
struct OnFinished_t3595288269;
// UIDraggablePanel
struct UIDraggablePanel_t252039129;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICenterOnChild
struct  UICenterOnChild_t1687745660  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t3595288269 * ___onFinished_3;
	// UIDraggablePanel UICenterOnChild::mDrag
	UIDraggablePanel_t252039129 * ___mDrag_4;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t1756533147 * ___mCenteredObject_5;

public:
	inline static int32_t get_offset_of_springStrength_2() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___springStrength_2)); }
	inline float get_springStrength_2() const { return ___springStrength_2; }
	inline float* get_address_of_springStrength_2() { return &___springStrength_2; }
	inline void set_springStrength_2(float value)
	{
		___springStrength_2 = value;
	}

	inline static int32_t get_offset_of_onFinished_3() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___onFinished_3)); }
	inline OnFinished_t3595288269 * get_onFinished_3() const { return ___onFinished_3; }
	inline OnFinished_t3595288269 ** get_address_of_onFinished_3() { return &___onFinished_3; }
	inline void set_onFinished_3(OnFinished_t3595288269 * value)
	{
		___onFinished_3 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_3, value);
	}

	inline static int32_t get_offset_of_mDrag_4() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___mDrag_4)); }
	inline UIDraggablePanel_t252039129 * get_mDrag_4() const { return ___mDrag_4; }
	inline UIDraggablePanel_t252039129 ** get_address_of_mDrag_4() { return &___mDrag_4; }
	inline void set_mDrag_4(UIDraggablePanel_t252039129 * value)
	{
		___mDrag_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDrag_4, value);
	}

	inline static int32_t get_offset_of_mCenteredObject_5() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___mCenteredObject_5)); }
	inline GameObject_t1756533147 * get_mCenteredObject_5() const { return ___mCenteredObject_5; }
	inline GameObject_t1756533147 ** get_address_of_mCenteredObject_5() { return &___mCenteredObject_5; }
	inline void set_mCenteredObject_5(GameObject_t1756533147 * value)
	{
		___mCenteredObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCenteredObject_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
