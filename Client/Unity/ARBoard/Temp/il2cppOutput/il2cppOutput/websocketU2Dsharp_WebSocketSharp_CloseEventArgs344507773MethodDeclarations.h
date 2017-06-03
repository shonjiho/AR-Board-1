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

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_PayloadData3839327312.h"

// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.PayloadData)
extern "C"  void CloseEventArgs__ctor_m271874174 (CloseEventArgs_t344507773 * __this, PayloadData_t3839327312 * ___payload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::set_WasClean(System.Boolean)
extern "C"  void CloseEventArgs_set_WasClean_m319124275 (CloseEventArgs_t344507773 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.CloseEventArgs::getCodeFrom(System.Byte[])
extern "C"  uint16_t CloseEventArgs_getCodeFrom_m4209838410 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.CloseEventArgs::getReasonFrom(System.Byte[])
extern "C"  String_t* CloseEventArgs_getReasonFrom_m3746388283 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
