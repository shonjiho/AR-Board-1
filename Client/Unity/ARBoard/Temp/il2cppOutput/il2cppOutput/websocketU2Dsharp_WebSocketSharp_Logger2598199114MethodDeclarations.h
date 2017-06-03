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

// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.String
struct String_t;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t502883108;
// WebSocketSharp.LogData
struct LogData_t4095822710;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_LogLevel2748531832.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_LogData4095822710.h"

// System.Void WebSocketSharp.Logger::.ctor()
extern "C"  void Logger__ctor_m3564207842 (Logger_t2598199114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::.ctor(WebSocketSharp.LogLevel,System.String,System.Action`2<WebSocketSharp.LogData,System.String>)
extern "C"  void Logger__ctor_m4098367179 (Logger_t2598199114 * __this, int32_t ___level0, String_t* ___file1, Action_2_t502883108 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::defaultOutput(WebSocketSharp.LogData,System.String)
extern "C"  void Logger_defaultOutput_m34181901 (Il2CppObject * __this /* static, unused */, LogData_t4095822710 * ___data0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::output(System.String,WebSocketSharp.LogLevel)
extern "C"  void Logger_output_m1063266994 (Logger_t2598199114 * __this, String_t* ___message0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::writeToFile(System.String,System.String)
extern "C"  void Logger_writeToFile_m1073706148 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Debug(System.String)
extern "C"  void Logger_Debug_m3721126547 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Error(System.String)
extern "C"  void Logger_Error_m3326994786 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Fatal(System.String)
extern "C"  void Logger_Fatal_m3177508194 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Info(System.String)
extern "C"  void Logger_Info_m2694160494 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Trace(System.String)
extern "C"  void Logger_Trace_m763429895 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Warn(System.String)
extern "C"  void Logger_Warn_m2119571238 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
