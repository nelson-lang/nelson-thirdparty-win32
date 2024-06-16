/*******************************************************************************
* Copyright 2018-2023 Intel Corporation.
*
* This software and the related documents are Intel copyrighted  materials,  and
* your use of  them is  governed by the  express license  under which  they were
* provided to you (License).  Unless the License provides otherwise, you may not
* use, modify, copy, publish, distribute,  disclose or transmit this software or
* the related documents without Intel's prior written permission.
*
* This software and the related documents  are provided as  is,  with no express
* or implied  warranties,  other  than those  that are  expressly stated  in the
* License.
*******************************************************************************/

#ifndef _BFLOAT16_HPP__
#define _BFLOAT16_HPP__

#include <sycl/sycl.hpp>

namespace oneapi::mkl {

using bfloat16 = sycl::ext::oneapi::bfloat16;

} // namespace oneapi::mkl

#endif /* _BFLOAT16_HPP__ */
