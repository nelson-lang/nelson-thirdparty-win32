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

#ifndef __DATA_FITTING_INTERPOLATE_HPP__
#define __DATA_FITTING_INTERPOLATE_HPP__

#include <cstdint>
#include <vector>
#include <bitset>

#include <sycl/sycl.hpp>

#include "oneapi/mkl/exceptions.hpp"
#include "oneapi/mkl/experimental/data_fitting/spline_and_data_params.hpp"

namespace oneapi::mkl::experimental::data_fitting {

// Each bit in der_indicator indicates if we need to compute corresponding derivative or not.
// E.g., der_indicator=0x1 - means that we need only function values,
// der_indicator=0x2 - only 1-st derivative, der_indicator=5 - function value and 2nd derivative.

// Interpolant is taken by non-const reference because non-const Interpolant's function members are called
template <typename Interpolant>
sycl::event interpolate(Interpolant& interpolant, typename Interpolant::fp_type* sites,
                        std::int64_t n_sites, typename Interpolant::fp_type* results,
                        std::bitset<32> der_indicator, const std::vector<sycl::event>& dependencies = {},
                        interpolate_hint result_hint = interpolate_hint::funcs_sites_ders,
                        site_hint SiteHint = site_hint::non_uniform);

// Interpolant is taken by non-const reference because non-const Interpolant's function members are called
template <typename Interpolant>
sycl::event interpolate(Interpolant& interpolant, typename Interpolant::fp_type* sites,
                        std::int64_t n_sites, typename Interpolant::fp_type* results,
                        const std::vector<sycl::event>& dependencies = {},
                        interpolate_hint result_hint = interpolate_hint::funcs_sites_ders,
                        site_hint SiteHint = site_hint::non_uniform);

template <typename Interpolant>
sycl::event interpolate(sycl::queue& q, const Interpolant& interpolant,
                        typename Interpolant::fp_type* sites, std::int64_t n_sites,
                        typename Interpolant::fp_type* results,
                        std::bitset<32> der_indicator, const std::vector<sycl::event>& dependencies = {},
                        interpolate_hint result_hint = interpolate_hint::funcs_sites_ders,
                        site_hint SiteHint = site_hint::non_uniform);

template <typename Interpolant>
sycl::event interpolate(sycl::queue& q, const Interpolant& interpolant,
                        typename Interpolant::fp_type* sites, std::int64_t n_sites,
                        typename Interpolant::fp_type* results,
                        const std::vector<sycl::event>& dependencies = {},
                        interpolate_hint result_hint = interpolate_hint::funcs_sites_ders,
                        site_hint SiteHint = site_hint::non_uniform);

} // namespace oneapi::mkl::experimental::data_fitting

#endif // __DATA_FITTING_INTERPOLATE_HPP__
