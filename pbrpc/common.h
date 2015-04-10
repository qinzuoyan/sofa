// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Author: qinzuoyan01@baidu.com (Qin Zuoyan)

#ifndef _SOFA_PBRPC_COMMON_H_
#define _SOFA_PBRPC_COMMON_H_

#include <google/protobuf/stubs/common.h>
#include <glog/logging.h>

namespace std {}

namespace sofa {
namespace pbrpc {

#define SOFA_PBRPC_VERSION "1.0.1"

const char* compile_info();

/////////////// types /////////////
typedef ::google::protobuf::uint uint;

typedef ::google::protobuf::int8  int8;
typedef ::google::protobuf::int16 int16;
typedef ::google::protobuf::int32 int32;
typedef ::google::protobuf::int64 int64;

typedef ::google::protobuf::uint8  uint8;
typedef ::google::protobuf::uint16 uint16;
typedef ::google::protobuf::uint32 uint32;
typedef ::google::protobuf::uint64 uint64;

static const int32 kint32max = ::google::protobuf::kint32max;
static const int32 kint32min = ::google::protobuf::kint32min;
static const int64 kint64max = ::google::protobuf::kint64max;
static const int64 kint64min = ::google::protobuf::kint64min;
static const uint32 kuint32max = ::google::protobuf::kuint32max;
static const uint64 kuint64max = ::google::protobuf::kuint64max;

/////////////// util macros /////////////
#define SOFA_PBRPC_STR_I(var) #var
#define SOFA_PBRPC_STR(var) SOFA_PBRPC_STR_I(var)

#define SOFA_PBRPC_PP_CAT(a, b) SOFA_PBRPC_PP_CAT_I(a, b)
#define SOFA_PBRPC_PP_CAT_I(a, b) a ## b

#define SOFA_PBRPC_DISALLOW_EVIL_CONSTRUCTORS(TypeName)    \
    TypeName(const TypeName&);                       \
    void operator=(const TypeName&)

} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_COMMON_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
