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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Uri
struct Uri_t19570940;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Action`1<System.Byte[]>
struct Action_1_t3199133395;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.EventHandler
struct EventHandler_t277755526;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_WebSocketState2935910988.h"
#include "websocketU2Dsharp_WebSocketSharp_CompressionMethod4066553457.h"
#include "System_System_Uri19570940.h"
#include "websocketU2Dsharp_WebSocketSharp_CloseStatusCode2945181741.h"
#include "websocketU2Dsharp_WebSocketSharp_ByteOrder469806806.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpStatusCod2661820989.h"

// System.Byte[] WebSocketSharp.Ext::compress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Ext_compress_m2016676632 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::compress(System.IO.Stream)
extern "C"  MemoryStream_t743994179 * Ext_compress_m1172852697 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::compressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_compressToArray_m1322775600 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Ext_decompress_m1818905461 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::decompress(System.IO.Stream)
extern "C"  MemoryStream_t743994179 * Ext_decompress_m818945008 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_decompressToArray_m1334432499 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::readBytes(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ext_readBytes_m370810398 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::readBytes(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  bool Ext_readBytes_m1811005357 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___length3, Stream_t3255436806 * ___dest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Append(System.UInt16,System.String)
extern "C"  ByteU5BU5D_t3397334013* Ext_Append_m1795399003 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfClosable(WebSocketSharp.WebSocketState)
extern "C"  String_t* Ext_CheckIfClosable_m1278295865 (Il2CppObject * __this /* static, unused */, uint16_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfConnectable(WebSocketSharp.WebSocketState)
extern "C"  String_t* Ext_CheckIfConnectable_m3492015640 (Il2CppObject * __this /* static, unused */, uint16_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfOpen(WebSocketSharp.WebSocketState)
extern "C"  String_t* Ext_CheckIfOpen_m3566600606 (Il2CppObject * __this /* static, unused */, uint16_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidControlData(System.Byte[],System.String)
extern "C"  String_t* Ext_CheckIfValidControlData_m670980825 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, String_t* ___paramName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidProtocols(System.String[])
extern "C"  String_t* Ext_CheckIfValidProtocols_m4274658712 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___protocols0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidSendData(System.Byte[])
extern "C"  String_t* Ext_CheckIfValidSendData_m2488915488 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Compress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_Compress_m588714662 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Ext::Compress(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  Stream_t3255436806 * Ext_Compress_m1131940372 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::ContainsTwice(System.String[])
extern "C"  bool Ext_ContainsTwice_m1833305318 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyTo(System.IO.Stream,System.IO.Stream)
extern "C"  void Ext_CopyTo_m2286885343 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___src0, Stream_t3255436806 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyTo(System.IO.Stream,System.IO.Stream,System.Boolean)
extern "C"  void Ext_CopyTo_m921820226 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___src0, Stream_t3255436806 * ___dest1, bool ___setDefaultPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Decompress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_Decompress_m2853080347 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::DecompressToArray(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_DecompressToArray_m3180897949 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::EqualsWith(System.Int32,System.Char,System.Action`1<System.Int32>)
extern "C"  bool Ext_EqualsWith_m1232563349 (Il2CppObject * __this /* static, unused */, int32_t ___value0, Il2CppChar ___c1, Action_1_t1873676830 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetAbsolutePath(System.Uri)
extern "C"  String_t* Ext_GetAbsolutePath_m430442765 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetMessage(WebSocketSharp.CloseStatusCode)
extern "C"  String_t* Ext_GetMessage_m4136468021 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetValueInternal(System.String,System.String)
extern "C"  String_t* Ext_GetValueInternal_m1445260334 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, String_t* ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsCompressionExtension(System.String)
extern "C"  bool Ext_IsCompressionExtension_m3893711450 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(System.UInt16)
extern "C"  bool Ext_IsReserved_m2404909809 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(WebSocketSharp.CloseStatusCode)
extern "C"  bool Ext_IsReserved_m2118321687 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsText(System.String)
extern "C"  bool Ext_IsText_m4225803182 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsToken(System.String)
extern "C"  bool Ext_IsToken_m1069302108 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::Quote(System.String)
extern "C"  String_t* Ext_Quote_m3879837184 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Ext::ParseAuthParams(System.String)
extern "C"  NameValueCollection_t3047564564 * Ext_ParseAuthParams_m3095228358 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ext_ReadBytes_m2197848324 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int64,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ext_ReadBytes_m3342660388 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
extern "C"  void Ext_ReadBytesAsync_m2123500857 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_1_t3199133395 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::RemovePrefix(System.String,System.String[])
extern "C"  String_t* Ext_RemovePrefix_m3292878526 (Il2CppObject * __this /* static, unused */, String_t* ___value0, StringU5BU5D_t1642385972* ___prefixes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Ext::SplitHeaderValue(System.String,System.Char[])
extern "C"  Il2CppObject* Ext_SplitHeaderValue_m3588285122 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToByteArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToByteArray_m3607175438 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToByteArrayInternally(System.UInt16,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToByteArrayInternally_m3593964186 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, uint8_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToByteArrayInternally(System.UInt64,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToByteArrayInternally_m707991659 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, uint8_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CompressionMethod WebSocketSharp.Ext::ToCompressionMethod(System.String)
extern "C"  uint8_t Ext_ToCompressionMethod_m3517825962 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::ToExtensionString(WebSocketSharp.CompressionMethod)
extern "C"  String_t* Ext_ToExtensionString_m1488457141 (Il2CppObject * __this /* static, unused */, uint8_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint16_t Ext_ToUInt16_m2022554856 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___src0, uint8_t ___srcOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint64_t Ext_ToUInt64_m2029374714 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___src0, uint8_t ___srcOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::TryCreateWebSocketUri(System.String,System.Uri&,System.String&)
extern "C"  bool Ext_TryCreateWebSocketUri_m2978564150 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t19570940 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[])
extern "C"  void Ext_WriteBytes_m2655069877 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.String,System.Char[])
extern "C"  bool Ext_Contains_m600248741 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___chars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String)
extern "C"  bool Ext_Contains_m704373083 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___collection0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String,System.String)
extern "C"  bool Ext_Contains_m183431397 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___collection0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Emit(System.EventHandler,System.Object,System.EventArgs)
extern "C"  void Ext_Emit_m3411749349 (Il2CppObject * __this /* static, unused */, EventHandler_t277755526 * ___eventHandler0, Il2CppObject * ___sender1, EventArgs_t3289624707 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Ext::GetCookies(System.Collections.Specialized.NameValueCollection,System.Boolean)
extern "C"  CookieCollection_t4248997468 * Ext_GetCookies_m3383446715 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___headers0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetDescription(WebSocketSharp.Net.HttpStatusCode)
extern "C"  String_t* Ext_GetDescription_m2054214327 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetStatusDescription(System.Int32)
extern "C"  String_t* Ext_GetStatusDescription_m1389179705 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsEnclosedIn(System.String,System.Char)
extern "C"  bool Ext_IsEnclosedIn_m1922991632 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsHostOrder(WebSocketSharp.ByteOrder)
extern "C"  bool Ext_IsHostOrder_m3724135050 (Il2CppObject * __this /* static, unused */, uint8_t ___order0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsNullOrEmpty(System.String)
extern "C"  bool Ext_IsNullOrEmpty_m2240019316 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsPredefinedScheme(System.String)
extern "C"  bool Ext_IsPredefinedScheme_m2280627044 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::MaybeUri(System.String)
extern "C"  bool Ext_MaybeUri_m1741664919 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int32,System.Action`1<System.Int32>)
extern "C"  void Ext_Times_m279352861 (Il2CppObject * __this /* static, unused */, int32_t ___n0, Action_1_t1873676830 * ___act1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToHostOrder(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToHostOrder_m3539884168 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___src0, uint8_t ___srcOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Ext::ToUri(System.String)
extern "C"  Uri_t19570940 * Ext_ToUri_m1195258854 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlDecode(System.String)
extern "C"  String_t* Ext_UrlDecode_m482702685 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlEncode(System.String)
extern "C"  String_t* Ext_UrlEncode_m2069757463 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::<CheckIfValidProtocols>m__0(System.String)
extern "C"  bool Ext_U3CCheckIfValidProtocolsU3Em__0_m3636190936 (Il2CppObject * __this /* static, unused */, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
