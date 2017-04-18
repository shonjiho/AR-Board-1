#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.Material
struct Material_t193706927;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t1272078033;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCal1272078033.h"
#include "UnityEngine_UnityEngine_CharacterInfo3919092135.h"

// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t193706927 * Font_get_material_m2086804907 (Font_t4239498691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C"  StringU5BU5D_t1642385972* Font_get_fontNames_m249984887 (Font_t4239498691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C"  void Font_RequestCharactersInTexture_m1131270421 (Font_t4239498691 * __this, String_t* ___characters0, int32_t ___size1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C"  void Font_RequestCharactersInTexture_m1118928372 (Font_t4239498691 * __this, String_t* ___characters0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m2007522718 (Il2CppObject * __this /* static, unused */, Font_t4239498691 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C"  FontTextureRebuildCallback_t1272078033 * Font_get_textureRebuildCallback_m3732221280 (Font_t4239498691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C"  void Font_set_textureRebuildCallback_m857512319 (Font_t4239498691 * __this, FontTextureRebuildCallback_t1272078033 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C"  bool Font_GetCharacterInfo_m355021600 (Font_t4239498691 * __this, Il2CppChar ___ch0, CharacterInfo_t3919092135 * ___info1, int32_t ___size2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
