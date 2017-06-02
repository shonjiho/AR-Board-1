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

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t2118315505;
// System.Object
struct Il2CppObject;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Cookie1826188460.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_CookieCollect4248997468.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void WebSocketSharp.Net.CookieCollection::.ctor()
extern "C"  void CookieCollection__ctor_m1652849323 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::get_Sorted()
extern "C"  Il2CppObject* CookieCollection_get_Sorted_m1762804415 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::get_Count()
extern "C"  int32_t CookieCollection_get_Count_m3590414075 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.CookieCollection::get_IsSynchronized()
extern "C"  bool CookieCollection_get_IsSynchronized_m265719460 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.CookieCollection::get_SyncRoot()
extern "C"  Il2CppObject * CookieCollection_get_SyncRoot_m3288836602 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::compareCookieWithinSorted(WebSocketSharp.Net.Cookie,WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_compareCookieWithinSorted_m340466066 (Il2CppObject * __this /* static, unused */, Cookie_t1826188460 * ___x0, Cookie_t1826188460 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseRequest(System.String)
extern "C"  CookieCollection_t4248997468 * CookieCollection_parseRequest_m4112886156 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseResponse(System.String)
extern "C"  CookieCollection_t4248997468 * CookieCollection_parseResponse_m3448933298 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::searchCookie(WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_searchCookie_m2522887713 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.CookieCollection::splitCookieHeaderValue(System.String)
extern "C"  StringU5BU5D_t1642385972* CookieCollection_splitCookieHeaderValue_m3823806052 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::Parse(System.String,System.Boolean)
extern "C"  CookieCollection_t4248997468 * CookieCollection_Parse_m2687394286 (Il2CppObject * __this /* static, unused */, String_t* ___value0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_SetOrRemove_m3535463430 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.CookieCollection)
extern "C"  void CookieCollection_SetOrRemove_m69867026 (CookieCollection_t4248997468 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Add(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_Add_m557733692 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CookieCollection_CopyTo_m1035559898 (CookieCollection_t4248997468 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.CookieCollection::GetEnumerator()
extern "C"  Il2CppObject * CookieCollection_GetEnumerator_m72020375 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
