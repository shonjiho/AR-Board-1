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
// UILabel
struct UILabel_t1795115428;
// UIButton
struct UIButton_t3377238306;
// UIManager
struct UIManager_t2519183485;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIManager::uiRoot
	GameObject_t1756533147 * ___uiRoot_2;
	// UILabel UIManager::moneyLabel
	UILabel_t1795115428 * ___moneyLabel_3;
	// UIButton UIManager::diceButton
	UIButton_t3377238306 * ___diceButton_4;
	// UILabel UIManager::diceLabel
	UILabel_t1795115428 * ___diceLabel_5;
	// UnityEngine.GameObject UIManager::buildMenu
	GameObject_t1756533147 * ___buildMenu_6;
	// System.Single UIManager::fadeAlphaValue
	float ___fadeAlphaValue_8;

public:
	inline static int32_t get_offset_of_uiRoot_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___uiRoot_2)); }
	inline GameObject_t1756533147 * get_uiRoot_2() const { return ___uiRoot_2; }
	inline GameObject_t1756533147 ** get_address_of_uiRoot_2() { return &___uiRoot_2; }
	inline void set_uiRoot_2(GameObject_t1756533147 * value)
	{
		___uiRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiRoot_2, value);
	}

	inline static int32_t get_offset_of_moneyLabel_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___moneyLabel_3)); }
	inline UILabel_t1795115428 * get_moneyLabel_3() const { return ___moneyLabel_3; }
	inline UILabel_t1795115428 ** get_address_of_moneyLabel_3() { return &___moneyLabel_3; }
	inline void set_moneyLabel_3(UILabel_t1795115428 * value)
	{
		___moneyLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___moneyLabel_3, value);
	}

	inline static int32_t get_offset_of_diceButton_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___diceButton_4)); }
	inline UIButton_t3377238306 * get_diceButton_4() const { return ___diceButton_4; }
	inline UIButton_t3377238306 ** get_address_of_diceButton_4() { return &___diceButton_4; }
	inline void set_diceButton_4(UIButton_t3377238306 * value)
	{
		___diceButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___diceButton_4, value);
	}

	inline static int32_t get_offset_of_diceLabel_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___diceLabel_5)); }
	inline UILabel_t1795115428 * get_diceLabel_5() const { return ___diceLabel_5; }
	inline UILabel_t1795115428 ** get_address_of_diceLabel_5() { return &___diceLabel_5; }
	inline void set_diceLabel_5(UILabel_t1795115428 * value)
	{
		___diceLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___diceLabel_5, value);
	}

	inline static int32_t get_offset_of_buildMenu_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___buildMenu_6)); }
	inline GameObject_t1756533147 * get_buildMenu_6() const { return ___buildMenu_6; }
	inline GameObject_t1756533147 ** get_address_of_buildMenu_6() { return &___buildMenu_6; }
	inline void set_buildMenu_6(GameObject_t1756533147 * value)
	{
		___buildMenu_6 = value;
		Il2CppCodeGenWriteBarrier(&___buildMenu_6, value);
	}

	inline static int32_t get_offset_of_fadeAlphaValue_8() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___fadeAlphaValue_8)); }
	inline float get_fadeAlphaValue_8() const { return ___fadeAlphaValue_8; }
	inline float* get_address_of_fadeAlphaValue_8() { return &___fadeAlphaValue_8; }
	inline void set_fadeAlphaValue_8(float value)
	{
		___fadeAlphaValue_8 = value;
	}
};

struct UIManager_t2519183485_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_t2519183485 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(UIManager_t2519183485_StaticFields, ___instance_7)); }
	inline UIManager_t2519183485 * get_instance_7() const { return ___instance_7; }
	inline UIManager_t2519183485 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(UIManager_t2519183485 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
