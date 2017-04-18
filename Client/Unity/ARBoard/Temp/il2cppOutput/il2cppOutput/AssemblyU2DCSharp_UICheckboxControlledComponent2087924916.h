#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICheckboxControlledComponent
struct  UICheckboxControlledComponent_t2087924916  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.MonoBehaviour UICheckboxControlledComponent::target
	MonoBehaviour_t1158329972 * ___target_2;
	// System.Boolean UICheckboxControlledComponent::inverse
	bool ___inverse_3;
	// System.Boolean UICheckboxControlledComponent::mUsingDelegates
	bool ___mUsingDelegates_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UICheckboxControlledComponent_t2087924916, ___target_2)); }
	inline MonoBehaviour_t1158329972 * get_target_2() const { return ___target_2; }
	inline MonoBehaviour_t1158329972 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(MonoBehaviour_t1158329972 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(UICheckboxControlledComponent_t2087924916, ___inverse_3)); }
	inline bool get_inverse_3() const { return ___inverse_3; }
	inline bool* get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(bool value)
	{
		___inverse_3 = value;
	}

	inline static int32_t get_offset_of_mUsingDelegates_4() { return static_cast<int32_t>(offsetof(UICheckboxControlledComponent_t2087924916, ___mUsingDelegates_4)); }
	inline bool get_mUsingDelegates_4() const { return ___mUsingDelegates_4; }
	inline bool* get_address_of_mUsingDelegates_4() { return &___mUsingDelegates_4; }
	inline void set_mUsingDelegates_4(bool value)
	{
		___mUsingDelegates_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
