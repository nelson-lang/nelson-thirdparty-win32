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

#ifndef __DATA_FITTING_SPLINES_HPP__
#define __DATA_FITTING_SPLINES_HPP__

#include <cstdint>
#include <memory>
#include <vector>
#include <type_traits>
#include <bitset>

#include <sycl/sycl.hpp>

#include "oneapi/mkl/export.hpp"
#include "oneapi/mkl/exceptions.hpp"
#include "oneapi/mkl/experimental/data_fitting/spline_and_data_params.hpp"

namespace oneapi::mkl::experimental::data_fitting {

namespace detail {

template <typename FpType, typename SplineType, int Dimensions>
class spline_base;

} // namespace detail

template <typename FpType, typename SplineType, int Dimensions = 1>
class spline;

template <typename FpType, int Dimensions>
class spline<FpType, linear_spline::default_type, Dimensions> {
public:
    static_assert(1 == Dimensions, "Only 1D splines are supported");
    static_assert(std::is_same_v<float, FpType> || std::is_same_v<double, FpType>,
                  "Only float/double types are supported for FpType template parameter of spline");
    using spline_type = linear_spline::default_type;
    using fp_type = FpType;

    // copy ctor and assignment operator were deleted since we don't want
    // to perform deep copy of data and responsibility of memory management is on user's side
    spline(const sycl::queue& q, std::int64_t ny = 1, bool were_coeffs_computed = false);
    spline(const sycl::device& dev, const sycl::context& ctx, std::int64_t ny = 1,
           bool were_coeffs_computed = false);

    spline(spline<FpType, linear_spline::default_type, Dimensions>&& other) = delete;

    spline(const spline<FpType, linear_spline::default_type, Dimensions>& other) = delete;

    spline<FpType, linear_spline::default_type, Dimensions>& operator=(
        const spline<FpType, linear_spline::default_type, Dimensions>& other) = delete;

    spline<FpType, linear_spline::default_type, Dimensions>& operator=(
        spline<FpType, linear_spline::default_type, Dimensions>&& other) = delete;
    ~spline();

    spline<FpType, linear_spline::default_type, Dimensions>& set_partitions(
        FpType* data, std::int64_t nx, partition_hint PartitionHint = partition_hint::non_uniform);

    spline<FpType, linear_spline::default_type, Dimensions>& set_coefficients(
        FpType* data, coefficient_hint CoeffHint = coefficient_hint::row_major);
    // in case of first coordinate will be called inside loop
    spline<FpType, linear_spline::default_type, Dimensions>& set_function_values(
        FpType* data, function_hint FunctionHint = function_hint::row_major);

    bool is_initialized() const;

    std::int64_t get_required_coeffs_size() const;

    sycl::event construct(
        const std::vector<sycl::event>&
            dependencies = {});

private:
    std::unique_ptr<detail::spline_base<FpType, linear_spline::default_type, Dimensions>> impl_;

    template <typename Interpolant>
    friend sycl::event interpolate(Interpolant&, typename Interpolant::fp_type*, std::int64_t,
                                   typename Interpolant::fp_type*, std::bitset<32>,
                                   const std::vector<sycl::event>&, interpolate_hint, site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(Interpolant&, typename Interpolant::fp_type*, std::int64_t,
                                   typename Interpolant::fp_type*, const std::vector<sycl::event>&,
                                   interpolate_hint, site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(sycl::queue&, const Interpolant&, typename Interpolant::fp_type*,
                                   std::int64_t, typename Interpolant::fp_type*, std::bitset<32>,
                                   const std::vector<sycl::event>&, interpolate_hint,
                                   site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(sycl::queue&, const Interpolant&, typename Interpolant::fp_type*,
                                   std::int64_t, typename Interpolant::fp_type*,
                                   const std::vector<sycl::event>&, interpolate_hint, site_hint);
};

template <typename FpType, int Dimensions>
class spline<FpType, cubic_spline::hermite, Dimensions> {
public:
    static_assert(1 == Dimensions, "Only 1D splines are supported");
    static_assert(std::is_same_v<float, FpType> || std::is_same_v<double, FpType>,
                  "Only float/double types are supported for FpType template parameter of spline");
    using spline_type = cubic_spline::hermite;
    using fp_type = FpType;

    // copy ctor and assignment operator were deleted since we don't want
    // to perform deep copy of data and responsibility of memory management is on user's side
    spline(const sycl::queue& q, std::int64_t ny = 1, bool were_coeffs_computed = false);
    spline(const sycl::device& dev, const sycl::context& ctx, std::int64_t ny = 1,
           bool were_coeffs_computed = false);

    spline(spline<FpType, cubic_spline::hermite, Dimensions>&& other) = delete;

    spline(const spline<FpType, cubic_spline::hermite, Dimensions>& other) = delete;

    spline<FpType, cubic_spline::hermite, Dimensions>& operator=(
        const spline<FpType, cubic_spline::hermite, Dimensions>& other) = delete;

    spline<FpType, cubic_spline::hermite, Dimensions>& operator=(
        spline<FpType, cubic_spline::hermite, Dimensions>&& other) = delete;
    ~spline();

    spline<FpType, cubic_spline::hermite, Dimensions>& set_partitions(
        FpType* data, std::int64_t nx, partition_hint PartitionHint = partition_hint::non_uniform);

    spline<FpType, cubic_spline::hermite, Dimensions>& set_coefficients(
        FpType* data, coefficient_hint CoeffHint = coefficient_hint::row_major);
    // in case of first coordinate will be called inside loop
    spline<FpType, cubic_spline::hermite, Dimensions>& set_function_values(
        FpType* data, function_hint FunctionHint = function_hint::row_major);
    spline<FpType, cubic_spline::hermite, Dimensions>& set_internal_conditions(FpType* data);
    spline<FpType, cubic_spline::hermite, Dimensions>& set_boundary_conditions(
        bc_type BCType = bc_type::free_end, FpType value = 0.0);

    bool is_initialized() const;

    std::int64_t get_required_coeffs_size() const;

    sycl::event construct(
        const std::vector<sycl::event>&
            dependencies = {});

private:
    std::unique_ptr<detail::spline_base<FpType, cubic_spline::hermite, Dimensions>> impl_;

    template <typename Interpolant>
    friend sycl::event interpolate(Interpolant&, typename Interpolant::fp_type*, std::int64_t,
                                   typename Interpolant::fp_type*, std::bitset<32>,
                                   const std::vector<sycl::event>&, interpolate_hint, site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(Interpolant&, typename Interpolant::fp_type*, std::int64_t,
                                   typename Interpolant::fp_type*, const std::vector<sycl::event>&,
                                   interpolate_hint, site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(sycl::queue&, const Interpolant&, typename Interpolant::fp_type*,
                                   std::int64_t, typename Interpolant::fp_type*, std::bitset<32>,
                                   const std::vector<sycl::event>&, interpolate_hint,
                                   site_hint);
    template <typename Interpolant>
    friend sycl::event interpolate(sycl::queue&, const Interpolant&, typename Interpolant::fp_type*,
                                   std::int64_t, typename Interpolant::fp_type*,
                                   const std::vector<sycl::event>&, interpolate_hint, site_hint);
};

} // namespace oneapi::mkl::experimental::data_fitting

#endif // __DATA_FITTING_SPLINES_HPP__
