#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// System.Collections.Generic.List`1<EffectBgm>
struct List_1_t53493705;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// AudioManager
struct AudioManager_t4222704959;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator>
struct Dictionary_2_t3380806011;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t4222704959  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource AudioManager::audioSourceBgm
	AudioSource_t1135106623 * ___audioSourceBgm_2;
	// UnityEngine.AudioSource AudioManager::audioSourceEffect
	AudioSource_t1135106623 * ___audioSourceEffect_3;
	// UnityEngine.AudioClip[] AudioManager::fxAudioArray
	AudioClipU5BU5D_t2203355011* ___fxAudioArray_4;
	// System.Collections.Generic.List`1<EffectBgm> AudioManager::effectBgmList
	List_1_t53493705 * ___effectBgmList_5;
	// System.Collections.Generic.List`1<System.String> AudioManager::FadeOutEffectClipNameList
	List_1_t1398341365 * ___FadeOutEffectClipNameList_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator> AudioManager::dicfadeOutEffect
	Dictionary_2_t3380806011 * ___dicfadeOutEffect_8;

public:
	inline static int32_t get_offset_of_audioSourceBgm_2() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___audioSourceBgm_2)); }
	inline AudioSource_t1135106623 * get_audioSourceBgm_2() const { return ___audioSourceBgm_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSourceBgm_2() { return &___audioSourceBgm_2; }
	inline void set_audioSourceBgm_2(AudioSource_t1135106623 * value)
	{
		___audioSourceBgm_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceBgm_2, value);
	}

	inline static int32_t get_offset_of_audioSourceEffect_3() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___audioSourceEffect_3)); }
	inline AudioSource_t1135106623 * get_audioSourceEffect_3() const { return ___audioSourceEffect_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSourceEffect_3() { return &___audioSourceEffect_3; }
	inline void set_audioSourceEffect_3(AudioSource_t1135106623 * value)
	{
		___audioSourceEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceEffect_3, value);
	}

	inline static int32_t get_offset_of_fxAudioArray_4() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___fxAudioArray_4)); }
	inline AudioClipU5BU5D_t2203355011* get_fxAudioArray_4() const { return ___fxAudioArray_4; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_fxAudioArray_4() { return &___fxAudioArray_4; }
	inline void set_fxAudioArray_4(AudioClipU5BU5D_t2203355011* value)
	{
		___fxAudioArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___fxAudioArray_4, value);
	}

	inline static int32_t get_offset_of_effectBgmList_5() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___effectBgmList_5)); }
	inline List_1_t53493705 * get_effectBgmList_5() const { return ___effectBgmList_5; }
	inline List_1_t53493705 ** get_address_of_effectBgmList_5() { return &___effectBgmList_5; }
	inline void set_effectBgmList_5(List_1_t53493705 * value)
	{
		___effectBgmList_5 = value;
		Il2CppCodeGenWriteBarrier(&___effectBgmList_5, value);
	}

	inline static int32_t get_offset_of_FadeOutEffectClipNameList_6() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___FadeOutEffectClipNameList_6)); }
	inline List_1_t1398341365 * get_FadeOutEffectClipNameList_6() const { return ___FadeOutEffectClipNameList_6; }
	inline List_1_t1398341365 ** get_address_of_FadeOutEffectClipNameList_6() { return &___FadeOutEffectClipNameList_6; }
	inline void set_FadeOutEffectClipNameList_6(List_1_t1398341365 * value)
	{
		___FadeOutEffectClipNameList_6 = value;
		Il2CppCodeGenWriteBarrier(&___FadeOutEffectClipNameList_6, value);
	}

	inline static int32_t get_offset_of_dicfadeOutEffect_8() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___dicfadeOutEffect_8)); }
	inline Dictionary_2_t3380806011 * get_dicfadeOutEffect_8() const { return ___dicfadeOutEffect_8; }
	inline Dictionary_2_t3380806011 ** get_address_of_dicfadeOutEffect_8() { return &___dicfadeOutEffect_8; }
	inline void set_dicfadeOutEffect_8(Dictionary_2_t3380806011 * value)
	{
		___dicfadeOutEffect_8 = value;
		Il2CppCodeGenWriteBarrier(&___dicfadeOutEffect_8, value);
	}
};

struct AudioManager_t4222704959_StaticFields
{
public:
	// AudioManager AudioManager::instance_
	AudioManager_t4222704959 * ___instance__7;

public:
	inline static int32_t get_offset_of_instance__7() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___instance__7)); }
	inline AudioManager_t4222704959 * get_instance__7() const { return ___instance__7; }
	inline AudioManager_t4222704959 ** get_address_of_instance__7() { return &___instance__7; }
	inline void set_instance__7(AudioManager_t4222704959 * value)
	{
		___instance__7 = value;
		Il2CppCodeGenWriteBarrier(&___instance__7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
