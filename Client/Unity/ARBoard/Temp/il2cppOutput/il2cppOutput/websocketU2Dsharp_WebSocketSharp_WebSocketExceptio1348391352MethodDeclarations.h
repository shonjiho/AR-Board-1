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

// WebSocketSharp.WebSocketException
struct WebSocketException_t1348391352;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_CloseStatusCode2945181741.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
extern "C"  void WebSocketException__ctor_m2096770588 (WebSocketException_t1348391352 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocketException__ctor_m2973187130 (WebSocketException_t1348391352 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m2458709252 (WebSocketException_t1348391352 * __this, String_t* ___reason0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketException__ctor_m3554051322 (WebSocketException_t1348391352 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m4157317458 (WebSocketException_t1348391352 * __this, uint16_t ___code0, String_t* ___reason1, Exception_t1927440687 * ___innerException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::get_Code()
extern "C"  uint16_t WebSocketException_get_Code_m1814741209 (WebSocketException_t1348391352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::set_Code(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocketException_set_Code_m3978624252 (WebSocketException_t1348391352 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
