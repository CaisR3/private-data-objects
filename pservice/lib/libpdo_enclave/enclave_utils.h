/* Copyright 2018 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string.h>

#include "error.h"
#include "parson.h"

#ifdef ENCLAVE_DEBUG
#define SAFE_LOG(LEVEL, FMT, ...) Log(LEVEL, FMT, ##__VA_ARGS__)
#else
#define SAFE_LOG(LEVEL, FMT, ...)
#endif

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#if defined(SGX_SIMULATOR)
const bool IS_SGX_SIMULATOR = true;
#else
const bool IS_SGX_SIMULATOR = false;
#endif

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
extern void printf(const char* fmt, ...);

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
extern void Log(int level, const char* fmt, ...);

