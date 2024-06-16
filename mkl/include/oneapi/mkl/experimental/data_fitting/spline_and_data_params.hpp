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

#ifndef __SPLINE_AND_DATA_PARAMS__
#define __SPLINE_AND_DATA_PARAMS__

#include <cstdint>

namespace oneapi::mkl::experimental::data_fitting {

enum class partition_hint : std::int64_t { non_uniform = 0x1, quasi_uniform = 0x2, uniform = 0x4 };

enum class function_hint : std::int64_t {
    row_major = INT64_C(0x10),
    col_major = INT64_C(0x20)
};

enum class coefficient_hint : std::int64_t {
    row_major = INT64_C(0x10),
    col_major = INT64_C(0x20)
};

enum class interpolate_hint : std::int64_t {
    funcs_sites_ders = INT64_C(0x10),
    funcs_ders_sites = INT64_C(0x20),
    sites_funcs_ders = INT64_C(0x100),
    sites_ders_funcs = INT64_C(0x200)
};

enum class bc_type : std::int64_t {
    free_end = INT64_C(0x2),
    first_left_der = INT64_C(0x4),
    first_right_der = INT64_C(0x8),
    second_left_der = INT64_C(0x10),
    second_right_der = INT64_C(0x20),
    periodic = INT64_C(0x40)
};

enum class site_hint : std::int64_t { non_uniform = INT64_C(0x1), uniform = INT64_C(0x4), sorted = INT64_C(0x40) };

namespace linear_spline {
struct default_type {};
} // namespace linear_spline

namespace cubic_spline {
struct hermite {};
} // namespace cubic_spline

enum class derivatives : std::int32_t { zero = INT32_C(0x1), first = INT32_C(0x2), second = INT32_C(0x4), third = INT32_C(0x8) };

inline std::int32_t operator|(derivatives lhs, derivatives rhs) {
    return (static_cast<std::int32_t>(lhs) | static_cast<std::int32_t>(rhs));
}

} // namespace oneapi::mkl::experimental::data_fitting

#endif // __SPLINE_AND_DATA_PARAMS__
