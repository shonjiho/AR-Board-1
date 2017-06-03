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

// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void WebSocketSharp.PayloadData::.ctor()
extern "C"  void PayloadData__ctor_m3776509826 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
extern "C"  void PayloadData__ctor_m2204175409 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___appData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Boolean)
extern "C"  void PayloadData__ctor_m3101592492 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___appData0, bool ___masked1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Byte[])
extern "C"  void PayloadData__ctor_m1233088492 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___extData0, ByteU5BU5D_t3397334013* ___appData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Byte[],System.Boolean)
extern "C"  void PayloadData__ctor_m2948942845 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___extData0, ByteU5BU5D_t3397334013* ___appData1, bool ___masked2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.PayloadData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * PayloadData_System_Collections_IEnumerable_GetEnumerator_m2773702999 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.PayloadData::get_ContainsReservedCloseStatusCode()
extern "C"  bool PayloadData_get_ContainsReservedCloseStatusCode_m3232381415 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.PayloadData::get_IsMasked()
extern "C"  bool PayloadData_get_IsMasked_m3135190026 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::set_IsMasked(System.Boolean)
extern "C"  void PayloadData_set_IsMasked_m3545084103 (PayloadData_t3839327312 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ExtensionData()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_get_ExtensionData_m1513898844 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::set_ExtensionData(System.Byte[])
extern "C"  void PayloadData_set_ExtensionData_m719630057 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_get_ApplicationData_m3068266889 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::set_ApplicationData(System.Byte[])
extern "C"  void PayloadData_set_ApplicationData_m3056090902 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
extern "C"  uint64_t PayloadData_get_Length_m4122883639 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::mask(System.Byte[],System.Byte[])
extern "C"  void PayloadData_mask_m2585865742 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___src0, ByteU5BU5D_t3397334013* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.PayloadData::GetEnumerator()
extern "C"  Il2CppObject* PayloadData_GetEnumerator_m388557599 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
extern "C"  void PayloadData_Mask_m34083521 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___maskingKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_ToByteArray_m2147984966 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.PayloadData::ToString()
extern "C"  String_t* PayloadData_ToString_m1247159645 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
