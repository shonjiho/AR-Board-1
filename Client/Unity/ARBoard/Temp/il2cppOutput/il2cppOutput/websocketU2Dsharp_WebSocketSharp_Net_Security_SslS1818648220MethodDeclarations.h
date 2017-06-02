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

// WebSocketSharp.Net.Security.SslStream
struct SslStream_t1818648220;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_NetworkStream581172200.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"

// System.Void WebSocketSharp.Net.Security.SslStream::.ctor(System.Net.Sockets.NetworkStream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void SslStream__ctor_m1947589811 (SslStream_t1818648220 * __this, NetworkStream_t581172200 * ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2756269959 * ___userCertificateValidationCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
