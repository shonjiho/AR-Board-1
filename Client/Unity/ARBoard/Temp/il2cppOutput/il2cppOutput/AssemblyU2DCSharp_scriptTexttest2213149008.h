#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// scriptTexttest
struct  scriptTexttest_t2213149008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text scriptTexttest::bubbleText
	Text_t356221433 * ___bubbleText_2;
	// UnityEngine.UI.Text scriptTexttest::bubbleTitleTxt
	Text_t356221433 * ___bubbleTitleTxt_3;
	// UnityEngine.GameObject scriptTexttest::bubble
	GameObject_t1756533147 * ___bubble_4;
	// UnityEngine.GameObject scriptTexttest::bubbleTitle
	GameObject_t1756533147 * ___bubbleTitle_5;

public:
	inline static int32_t get_offset_of_bubbleText_2() { return static_cast<int32_t>(offsetof(scriptTexttest_t2213149008, ___bubbleText_2)); }
	inline Text_t356221433 * get_bubbleText_2() const { return ___bubbleText_2; }
	inline Text_t356221433 ** get_address_of_bubbleText_2() { return &___bubbleText_2; }
	inline void set_bubbleText_2(Text_t356221433 * value)
	{
		___bubbleText_2 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleText_2, value);
	}

	inline static int32_t get_offset_of_bubbleTitleTxt_3() { return static_cast<int32_t>(offsetof(scriptTexttest_t2213149008, ___bubbleTitleTxt_3)); }
	inline Text_t356221433 * get_bubbleTitleTxt_3() const { return ___bubbleTitleTxt_3; }
	inline Text_t356221433 ** get_address_of_bubbleTitleTxt_3() { return &___bubbleTitleTxt_3; }
	inline void set_bubbleTitleTxt_3(Text_t356221433 * value)
	{
		___bubbleTitleTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleTitleTxt_3, value);
	}

	inline static int32_t get_offset_of_bubble_4() { return static_cast<int32_t>(offsetof(scriptTexttest_t2213149008, ___bubble_4)); }
	inline GameObject_t1756533147 * get_bubble_4() const { return ___bubble_4; }
	inline GameObject_t1756533147 ** get_address_of_bubble_4() { return &___bubble_4; }
	inline void set_bubble_4(GameObject_t1756533147 * value)
	{
		___bubble_4 = value;
		Il2CppCodeGenWriteBarrier(&___bubble_4, value);
	}

	inline static int32_t get_offset_of_bubbleTitle_5() { return static_cast<int32_t>(offsetof(scriptTexttest_t2213149008, ___bubbleTitle_5)); }
	inline GameObject_t1756533147 * get_bubbleTitle_5() const { return ___bubbleTitle_5; }
	inline GameObject_t1756533147 ** get_address_of_bubbleTitle_5() { return &___bubbleTitle_5; }
	inline void set_bubbleTitle_5(GameObject_t1756533147 * value)
	{
		___bubbleTitle_5 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleTitle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
