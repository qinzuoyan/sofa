// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Author: qinzuoyan01@baidu.com (Qin Zuoyan)

#include <sofa/pbrpc/common.h>

namespace sofa {
namespace pbrpc {

const char* compile_info()
{
    return __DATE__ " " __TIME__ " by gcc "
        SOFA_PBRPC_STR(__GNUC__) "." SOFA_PBRPC_STR(__GNUC_MINOR__)
        "." SOFA_PBRPC_STR(__GNUC_PATCHLEVEL__);
}

} // namespace pbrpc
} // namespace sofa

/* vim: set ts=4 sw=4 sts=4 tw=100 */
