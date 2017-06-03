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

// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.Encoding
struct Encoding_t663144255;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2024029190 (WWW_t2919945039 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m578693146 (WWW_t2919945039 * __this, String_t* ___url0, WWWForm_t3950226929 * ___form1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t2919945039 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t2919945039 * __this, String_t* ___url0, ByteU5BU5D_t3397334013* ___postData1, StringU5BU5D_t1642385972* ___iHeaders2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t663144255 * WWW_get_DefaultEncoding_m1497697991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C"  Texture2D_t3542995729 * WWW_GetTexture_m2539490669 (WWW_t2919945039 * __this, bool ___markNonReadable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t3542995729 * WWW_get_texture_m1121178301 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t1642385972* WWW_FlattenedHeadersFrom_m3590846145 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
