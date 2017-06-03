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

// WebSocketSharp.WsFrame
struct WsFrame_t349876065;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.Action`1<WebSocketSharp.WsFrame>
struct Action_1_t151675447;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_Opcode2313788840.h"
#include "websocketU2Dsharp_WebSocketSharp_Mask1111889066.h"
#include "websocketU2Dsharp_WebSocketSharp_PayloadData3839327312.h"
#include "websocketU2Dsharp_WebSocketSharp_Fin2752139063.h"
#include "websocketU2Dsharp_WebSocketSharp_Rsv1058189029.h"
#include "websocketU2Dsharp_WebSocketSharp_WsFrame349876065.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void WebSocketSharp.WsFrame::.ctor()
extern "C"  void WsFrame__ctor_m1216288457 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::.ctor(WebSocketSharp.Opcode,WebSocketSharp.Mask,WebSocketSharp.PayloadData)
extern "C"  void WsFrame__ctor_m183454988 (WsFrame_t349876065 * __this, uint8_t ___opcode0, uint8_t ___mask1, PayloadData_t3839327312 * ___payload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.Mask,WebSocketSharp.PayloadData)
extern "C"  void WsFrame__ctor_m3600956330 (WsFrame_t349876065 * __this, uint8_t ___fin0, uint8_t ___opcode1, uint8_t ___mask2, PayloadData_t3839327312 * ___payload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.Mask,WebSocketSharp.PayloadData,System.Boolean)
extern "C"  void WsFrame__ctor_m160861435 (WsFrame_t349876065 * __this, uint8_t ___fin0, uint8_t ___opcode1, uint8_t ___mask2, PayloadData_t3839327312 * ___payload3, bool ___compressed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::.cctor()
extern "C"  void WsFrame__cctor_m408557500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.WsFrame::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * WsFrame_System_Collections_IEnumerable_GetEnumerator_m1572474780 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsBinary()
extern "C"  bool WsFrame_get_IsBinary_m3036739657 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsClose()
extern "C"  bool WsFrame_get_IsClose_m706865684 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsCompressed()
extern "C"  bool WsFrame_get_IsCompressed_m3267242769 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsContinuation()
extern "C"  bool WsFrame_get_IsContinuation_m2894664843 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsData()
extern "C"  bool WsFrame_get_IsData_m2864267914 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsFinal()
extern "C"  bool WsFrame_get_IsFinal_m1209719012 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsFragmented()
extern "C"  bool WsFrame_get_IsFragmented_m3865641087 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsMasked()
extern "C"  bool WsFrame_get_IsMasked_m1905659235 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsPing()
extern "C"  bool WsFrame_get_IsPing_m278432266 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::get_IsPong()
extern "C"  bool WsFrame_get_IsPong_m278430352 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.WsFrame::get_Length()
extern "C"  uint64_t WsFrame_get_Length_m3501370960 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Fin WebSocketSharp.WsFrame::get_Fin()
extern "C"  uint8_t WsFrame_get_Fin_m895376836 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Fin(WebSocketSharp.Fin)
extern "C"  void WsFrame_set_Fin_m269549855 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WsFrame::get_Rsv1()
extern "C"  uint8_t WsFrame_get_Rsv1_m674073241 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Rsv1(WebSocketSharp.Rsv)
extern "C"  void WsFrame_set_Rsv1_m343055286 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WsFrame::get_Rsv2()
extern "C"  uint8_t WsFrame_get_Rsv2_m674073340 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Rsv2(WebSocketSharp.Rsv)
extern "C"  void WsFrame_set_Rsv2_m2053614545 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WsFrame::get_Rsv3()
extern "C"  uint8_t WsFrame_get_Rsv3_m674073307 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Rsv3(WebSocketSharp.Rsv)
extern "C"  void WsFrame_set_Rsv3_m566867948 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Opcode WebSocketSharp.WsFrame::get_Opcode()
extern "C"  uint8_t WsFrame_get_Opcode_m928272874 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Opcode(WebSocketSharp.Opcode)
extern "C"  void WsFrame_set_Opcode_m3904910375 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Mask WebSocketSharp.WsFrame::get_Mask()
extern "C"  uint8_t WsFrame_get_Mask_m1468961382 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_Mask(WebSocketSharp.Mask)
extern "C"  void WsFrame_set_Mask_m2858108935 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte WebSocketSharp.WsFrame::get_PayloadLen()
extern "C"  uint8_t WsFrame_get_PayloadLen_m1605120211 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_PayloadLen(System.Byte)
extern "C"  void WsFrame_set_PayloadLen_m3808559856 (WsFrame_t349876065 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WsFrame::get_ExtPayloadLen()
extern "C"  ByteU5BU5D_t3397334013* WsFrame_get_ExtPayloadLen_m766872876 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_ExtPayloadLen(System.Byte[])
extern "C"  void WsFrame_set_ExtPayloadLen_m3096065379 (WsFrame_t349876065 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WsFrame::get_MaskingKey()
extern "C"  ByteU5BU5D_t3397334013* WsFrame_get_MaskingKey_m2889572155 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_MaskingKey(System.Byte[])
extern "C"  void WsFrame_set_MaskingKey_m924683162 (WsFrame_t349876065 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.PayloadData WebSocketSharp.WsFrame::get_PayloadData()
extern "C"  PayloadData_t3839327312 * WsFrame_get_PayloadData_m3425187012 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::set_PayloadData(WebSocketSharp.PayloadData)
extern "C"  void WsFrame_set_PayloadData_m1836359515 (WsFrame_t349876065 * __this, PayloadData_t3839327312 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WsFrame::createMaskingKey()
extern "C"  ByteU5BU5D_t3397334013* WsFrame_createMaskingKey_m3638952262 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WsFrame::dump(WebSocketSharp.WsFrame)
extern "C"  String_t* WsFrame_dump_m4102073926 (Il2CppObject * __this /* static, unused */, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::isControl(WebSocketSharp.Opcode)
extern "C"  bool WsFrame_isControl_m2673716461 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsFrame::isData(WebSocketSharp.Opcode)
extern "C"  bool WsFrame_isData_m1679004338 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::parse(System.Byte[],System.IO.Stream,System.Boolean)
extern "C"  WsFrame_t349876065 * WsFrame_parse_m3166646934 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___header0, Stream_t3255436806 * ___stream1, bool ___unmask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WsFrame::print(WebSocketSharp.WsFrame)
extern "C"  String_t* WsFrame_print_m1944175451 (Il2CppObject * __this /* static, unused */, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::CreateCloseFrame(WebSocketSharp.Mask,WebSocketSharp.PayloadData)
extern "C"  WsFrame_t349876065 * WsFrame_CreateCloseFrame_m688254893 (Il2CppObject * __this /* static, unused */, uint8_t ___mask0, PayloadData_t3839327312 * ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::CreatePongFrame(WebSocketSharp.Mask,WebSocketSharp.PayloadData)
extern "C"  WsFrame_t349876065 * WsFrame_CreatePongFrame_m2663985977 (Il2CppObject * __this /* static, unused */, uint8_t ___mask0, PayloadData_t3839327312 * ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::CreateFrame(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.Mask,System.Byte[],System.Boolean)
extern "C"  WsFrame_t349876065 * WsFrame_CreateFrame_m3890355197 (Il2CppObject * __this /* static, unused */, uint8_t ___fin0, uint8_t ___opcode1, uint8_t ___mask2, ByteU5BU5D_t3397334013* ___data3, bool ___compressed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::CreatePingFrame(WebSocketSharp.Mask)
extern "C"  WsFrame_t349876065 * WsFrame_CreatePingFrame_m286922386 (Il2CppObject * __this /* static, unused */, uint8_t ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WsFrame::GetEnumerator()
extern "C"  Il2CppObject* WsFrame_GetEnumerator_m4255614936 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsFrame::Parse(System.IO.Stream,System.Boolean)
extern "C"  WsFrame_t349876065 * WsFrame_Parse_m4272855353 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___unmask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsFrame::ParseAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WsFrame>,System.Action`1<System.Exception>)
extern "C"  void WsFrame_ParseAsync_m2090414852 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___unmask1, Action_1_t151675447 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WsFrame::PrintToString(System.Boolean)
extern "C"  String_t* WsFrame_PrintToString_m3657883480 (WsFrame_t349876065 * __this, bool ___dumped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WsFrame::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* WsFrame_ToByteArray_m645350665 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WsFrame::ToString()
extern "C"  String_t* WsFrame_ToString_m287900516 (WsFrame_t349876065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
