﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t449;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t441;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m1715 (X509Extension_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m1716 (X509Extension_t449 * __this, String_t* ___oid, ByteU5BU5D_t108* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m1717 (X509Extension_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m1718 (X509Extension_t449 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m1719 (X509Extension_t449 * __this, AsnEncodedData_t441 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m1720 (X509Extension_t449 * __this, ByteU5BU5D_t108* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
