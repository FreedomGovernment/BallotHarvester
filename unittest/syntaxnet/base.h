/* Copyright 2016 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef SYNTAXNET_BASE_H_
#define SYNTAXNET_BASE_H_

#include <map>
#include <functional>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#ifdef INCLUDE_TENSORFLOW

#include "google/protobuf/util/message_differencer.h"

#include "tensorflow/core/lib/core/status.h"
#include "tensorflow/core/lib/strings/strcat.h"
#include "tensorflow/core/lib/strings/stringprintf.h"
#include "tensorflow/core/platform/default/integral_types.h"
#include "tensorflow/core/platform/mutex.h"
#include "tensorflow/core/platform/protobuf.h"

#endif

using std::map;
using std::pair;
using std::unordered_map;
using std::unordered_set;
using std::vector;
#ifdef INCLUDE_TENSORFLOW
using tensorflow::int16;
using tensorflow::int32;
using tensorflow::int64;
using tensorflow::int8;
using tensorflow::mutex;
using tensorflow::mutex_lock;
using tensorflow::uint16;
using tensorflow::uint32;
using tensorflow::uint64;
using tensorflow::uint8;
using tensorflow::protobuf::TextFormat;
#endif
typedef signed int char32;

using std::string;
#ifdef INCLUDE_TENSORFLOW
using tensorflow::StringPiece;
#endif

// namespace syntaxnet

#endif // SYNTAXNET_BASE_H_
