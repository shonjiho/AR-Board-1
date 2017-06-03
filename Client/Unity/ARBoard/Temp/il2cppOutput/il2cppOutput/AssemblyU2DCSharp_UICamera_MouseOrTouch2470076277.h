#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UICamera_ClickNotification3184017079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/MouseOrTouch
struct  MouseOrTouch_t2470076277  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t2243707579  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t2243707579  ___delta_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t2243707579  ___totalDelta_2;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t189460977 * ___pressedCam_3;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t1756533147 * ___current_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t1756533147 * ___pressed_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t1756533147 * ___dragged_6;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_7;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_8;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_9;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_10;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_11;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pos_0)); }
	inline Vector2_t2243707579  get_pos_0() const { return ___pos_0; }
	inline Vector2_t2243707579 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector2_t2243707579  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_delta_1() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___delta_1)); }
	inline Vector2_t2243707579  get_delta_1() const { return ___delta_1; }
	inline Vector2_t2243707579 * get_address_of_delta_1() { return &___delta_1; }
	inline void set_delta_1(Vector2_t2243707579  value)
	{
		___delta_1 = value;
	}

	inline static int32_t get_offset_of_totalDelta_2() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___totalDelta_2)); }
	inline Vector2_t2243707579  get_totalDelta_2() const { return ___totalDelta_2; }
	inline Vector2_t2243707579 * get_address_of_totalDelta_2() { return &___totalDelta_2; }
	inline void set_totalDelta_2(Vector2_t2243707579  value)
	{
		___totalDelta_2 = value;
	}

	inline static int32_t get_offset_of_pressedCam_3() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressedCam_3)); }
	inline Camera_t189460977 * get_pressedCam_3() const { return ___pressedCam_3; }
	inline Camera_t189460977 ** get_address_of_pressedCam_3() { return &___pressedCam_3; }
	inline void set_pressedCam_3(Camera_t189460977 * value)
	{
		___pressedCam_3 = value;
		Il2CppCodeGenWriteBarrier(&___pressedCam_3, value);
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___current_4)); }
	inline GameObject_t1756533147 * get_current_4() const { return ___current_4; }
	inline GameObject_t1756533147 ** get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(GameObject_t1756533147 * value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier(&___current_4, value);
	}

	inline static int32_t get_offset_of_pressed_5() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressed_5)); }
	inline GameObject_t1756533147 * get_pressed_5() const { return ___pressed_5; }
	inline GameObject_t1756533147 ** get_address_of_pressed_5() { return &___pressed_5; }
	inline void set_pressed_5(GameObject_t1756533147 * value)
	{
		___pressed_5 = value;
		Il2CppCodeGenWriteBarrier(&___pressed_5, value);
	}

	inline static int32_t get_offset_of_dragged_6() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragged_6)); }
	inline GameObject_t1756533147 * get_dragged_6() const { return ___dragged_6; }
	inline GameObject_t1756533147 ** get_address_of_dragged_6() { return &___dragged_6; }
	inline void set_dragged_6(GameObject_t1756533147 * value)
	{
		___dragged_6 = value;
		Il2CppCodeGenWriteBarrier(&___dragged_6, value);
	}

	inline static int32_t get_offset_of_clickTime_7() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickTime_7)); }
	inline float get_clickTime_7() const { return ___clickTime_7; }
	inline float* get_address_of_clickTime_7() { return &___clickTime_7; }
	inline void set_clickTime_7(float value)
	{
		___clickTime_7 = value;
	}

	inline static int32_t get_offset_of_clickNotification_8() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickNotification_8)); }
	inline int32_t get_clickNotification_8() const { return ___clickNotification_8; }
	inline int32_t* get_address_of_clickNotification_8() { return &___clickNotification_8; }
	inline void set_clickNotification_8(int32_t value)
	{
		___clickNotification_8 = value;
	}

	inline static int32_t get_offset_of_touchBegan_9() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___touchBegan_9)); }
	inline bool get_touchBegan_9() const { return ___touchBegan_9; }
	inline bool* get_address_of_touchBegan_9() { return &___touchBegan_9; }
	inline void set_touchBegan_9(bool value)
	{
		___touchBegan_9 = value;
	}

	inline static int32_t get_offset_of_pressStarted_10() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressStarted_10)); }
	inline bool get_pressStarted_10() const { return ___pressStarted_10; }
	inline bool* get_address_of_pressStarted_10() { return &___pressStarted_10; }
	inline void set_pressStarted_10(bool value)
	{
		___pressStarted_10 = value;
	}

	inline static int32_t get_offset_of_dragStarted_11() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragStarted_11)); }
	inline bool get_dragStarted_11() const { return ___dragStarted_11; }
	inline bool* get_address_of_dragStarted_11() { return &___dragStarted_11; }
	inline void set_dragStarted_11(bool value)
	{
		___dragStarted_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
