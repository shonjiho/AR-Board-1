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

// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.IList
struct IList_t3321498491;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"

// System.Void WebSocketSharp.Net.HttpUtility::.cctor()
extern "C"  void HttpUtility__cctor_m223165678 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::A1(System.String,System.String,System.String)
extern "C"  String_t* HttpUtility_A1_m808633334 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::A1(System.String,System.String,System.String,System.String,System.String)
extern "C"  String_t* HttpUtility_A1_m3431554870 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, String_t* ___nonce3, String_t* ___cnonce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::A2(System.String,System.String)
extern "C"  String_t* HttpUtility_A2_m3525924895 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::A2(System.String,System.String,System.String)
extern "C"  String_t* HttpUtility_A2_m3246551473 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, String_t* ___entity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::GetChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_GetChar_m429898155 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::GetInt(System.Byte)
extern "C"  int32_t HttpUtility_GetInt_m1998867499 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::Hash(System.String)
extern "C"  String_t* HttpUtility_Hash_m3389117432 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::KD(System.String,System.String)
extern "C"  String_t* HttpUtility_KD_m2463378723 (Il2CppObject * __this /* static, unused */, String_t* ___secret0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpUtility::NotEncoded(System.Char)
extern "C"  bool HttpUtility_NotEncoded_m2575531573 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::UrlEncodeChar(System.Char,System.IO.Stream,System.Boolean)
extern "C"  void HttpUtility_UrlEncodeChar_m2579824219 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t3255436806 * ___result1, bool ___isUnicode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::WriteCharBytes(System.Collections.IList,System.Char,System.Text.Encoding)
extern "C"  void HttpUtility_WriteCharBytes_m602251012 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___buffer0, Il2CppChar ___c1, Encoding_t663144255 * ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::CreateBasicAuthCredentials(System.String,System.String)
extern "C"  String_t* HttpUtility_CreateBasicAuthCredentials_m1048973066 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::CreateDigestAuthCredentials(System.Collections.Specialized.NameValueCollection)
extern "C"  String_t* HttpUtility_CreateDigestAuthCredentials_m1298805947 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___authParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::CreateNonceValue()
extern "C"  String_t* HttpUtility_CreateNonceValue_m2197874702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::CreateRequestDigest(System.Collections.Specialized.NameValueCollection)
extern "C"  String_t* HttpUtility_CreateRequestDigest_m622614312 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytesInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeToBytesInternal_m2423790068 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String)
extern "C"  String_t* HttpUtility_UrlDecode_m2084203637 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m834738660 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String)
extern "C"  String_t* HttpUtility_UrlEncode_m2164384699 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlEncode_m3075771956 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
