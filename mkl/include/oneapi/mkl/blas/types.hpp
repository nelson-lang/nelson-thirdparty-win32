/*******************************************************************************
* Copyright 2022 Intel Corporation.
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

#ifndef _MKL_BLAS_SYCL_TYPES_HPP__
#define _MKL_BLAS_SYCL_TYPES_HPP__

#include <cstdint>

namespace oneapi {
namespace mkl {
namespace blas {

enum class compute_mode : std::uint64_t {
    unset            = 0x0,
    float_to_bf16    = 0x1,
    float_to_bf16x2  = 0x2,
    float_to_bf16x3  = 0x4,
    float_to_tf32    = 0x10,
    complex_3m       = 0x10000,
    any              = 0xFFFFFFFF,
    standard         = 0x20000000'00000000,
    prefer_alternate = 0x40000000'00000000,
    force_alternate  = 0x80000000'00000000,
};

static inline compute_mode operator|(compute_mode m1, compute_mode m2)
{
    return static_cast<compute_mode>(static_cast<std::uint64_t>(m1) | static_cast<std::uint64_t>(m2));
}

static inline compute_mode operator|=(compute_mode &m1, compute_mode m2)
{
    m1 = m1 | m2;
    return m1;
}

namespace detail {

static inline bool allows(compute_mode mask, compute_mode value)
{
    return (static_cast<uint64_t>(mask) & static_cast<uint64_t>(value)) != 0;
}

} /* namespace detail */
} /* namespace blas */
} /* namespace mkl */
} /* namespace oneapi */

#endif
