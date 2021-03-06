﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t20;
struct YieldInstruction_t20_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m656 (YieldInstruction_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t20_marshal(const YieldInstruction_t20& unmarshaled, YieldInstruction_t20_marshaled& marshaled);
void YieldInstruction_t20_marshal_back(const YieldInstruction_t20_marshaled& marshaled, YieldInstruction_t20& unmarshaled);
void YieldInstruction_t20_marshal_cleanup(YieldInstruction_t20_marshaled& marshaled);
