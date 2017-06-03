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

// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t2096319561;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpHeaderTyp1518115223.h"

// System.Void WebSocketSharp.Net.HttpHeaderInfo::.ctor()
extern "C"  void HttpHeaderInfo__ctor_m255188 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInRequest()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInRequest_m231326667 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInResponse()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInResponse_m1203443673 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsRequest()
extern "C"  bool HttpHeaderInfo_get_IsRequest_m3670607568 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsResponse()
extern "C"  bool HttpHeaderInfo_get_IsResponse_m4072830454 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpHeaderInfo::get_Name()
extern "C"  String_t* HttpHeaderInfo_get_Name_m1154984627 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpHeaderInfo::set_Name(System.String)
extern "C"  void HttpHeaderInfo_set_Name_m2685022582 (HttpHeaderInfo_t2096319561 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.HttpHeaderInfo::get_Type()
extern "C"  int32_t HttpHeaderInfo_get_Type_m2130180663 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpHeaderInfo::set_Type(WebSocketSharp.Net.HttpHeaderType)
extern "C"  void HttpHeaderInfo_set_Type_m1820848938 (HttpHeaderInfo_t2096319561 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsMultiValue(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsMultiValue_m1246610623 (HttpHeaderInfo_t2096319561 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsRestricted(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsRestricted_m2648242912 (HttpHeaderInfo_t2096319561 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
