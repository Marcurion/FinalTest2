﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t1009;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t201;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder__ctor_m5903 (MemberInfoSerializationHolder_t1009 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C" void MemberInfoSerializationHolder_Serialize_m5904 (Object_t * __this /* static, unused */, SerializationInfo_t315 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m5905 (Object_t * __this /* static, unused */, SerializationInfo_t315 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t201* ___genericArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder_GetObjectData_m5906 (MemberInfoSerializationHolder_t1009 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m5907 (MemberInfoSerializationHolder_t1009 * __this, StreamingContext_t316  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
