#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Localization
struct Localization_t3725902693;
// System.String
struct String_t;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t1190170664;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localization
struct  Localization_t3725902693  : public MonoBehaviour_t1158329972
{
public:
	// System.String Localization::startingLanguage
	String_t* ___startingLanguage_3;
	// UnityEngine.TextAsset[] Localization::languages
	TextAssetU5BU5D_t1190170664* ___languages_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mDictionary
	Dictionary_2_t3943999495 * ___mDictionary_5;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_6;

public:
	inline static int32_t get_offset_of_startingLanguage_3() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___startingLanguage_3)); }
	inline String_t* get_startingLanguage_3() const { return ___startingLanguage_3; }
	inline String_t** get_address_of_startingLanguage_3() { return &___startingLanguage_3; }
	inline void set_startingLanguage_3(String_t* value)
	{
		___startingLanguage_3 = value;
		Il2CppCodeGenWriteBarrier(&___startingLanguage_3, value);
	}

	inline static int32_t get_offset_of_languages_4() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___languages_4)); }
	inline TextAssetU5BU5D_t1190170664* get_languages_4() const { return ___languages_4; }
	inline TextAssetU5BU5D_t1190170664** get_address_of_languages_4() { return &___languages_4; }
	inline void set_languages_4(TextAssetU5BU5D_t1190170664* value)
	{
		___languages_4 = value;
		Il2CppCodeGenWriteBarrier(&___languages_4, value);
	}

	inline static int32_t get_offset_of_mDictionary_5() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___mDictionary_5)); }
	inline Dictionary_2_t3943999495 * get_mDictionary_5() const { return ___mDictionary_5; }
	inline Dictionary_2_t3943999495 ** get_address_of_mDictionary_5() { return &___mDictionary_5; }
	inline void set_mDictionary_5(Dictionary_2_t3943999495 * value)
	{
		___mDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___mDictionary_5, value);
	}

	inline static int32_t get_offset_of_mLanguage_6() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___mLanguage_6)); }
	inline String_t* get_mLanguage_6() const { return ___mLanguage_6; }
	inline String_t** get_address_of_mLanguage_6() { return &___mLanguage_6; }
	inline void set_mLanguage_6(String_t* value)
	{
		___mLanguage_6 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguage_6, value);
	}
};

struct Localization_t3725902693_StaticFields
{
public:
	// Localization Localization::mInstance
	Localization_t3725902693 * ___mInstance_2;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mInstance_2)); }
	inline Localization_t3725902693 * get_mInstance_2() const { return ___mInstance_2; }
	inline Localization_t3725902693 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(Localization_t3725902693 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
