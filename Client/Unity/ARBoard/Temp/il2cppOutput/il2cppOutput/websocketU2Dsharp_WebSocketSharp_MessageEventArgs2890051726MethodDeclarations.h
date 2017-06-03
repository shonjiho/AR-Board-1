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

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_Opcode2313788840.h"
#include "websocketU2Dsharp_WebSocketSharp_PayloadData3839327312.h"

// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.Opcode,System.Byte[])
extern "C"  void MessageEventArgs__ctor_m362763596 (MessageEventArgs_t2890051726 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.Opcode,WebSocketSharp.PayloadData)
extern "C"  void MessageEventArgs__ctor_m485946750 (MessageEventArgs_t2890051726 * __this, uint8_t ___opcode0, PayloadData_t3839327312 * ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
extern "C"  ByteU5BU5D_t3397334013* MessageEventArgs_get_RawData_m2392696113 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.MessageEventArgs::convertToString(WebSocketSharp.Opcode,System.Byte[])
extern "C"  String_t* MessageEventArgs_convertToString_m3780661026 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
