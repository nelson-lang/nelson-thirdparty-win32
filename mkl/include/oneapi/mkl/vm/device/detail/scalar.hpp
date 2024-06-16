/*******************************************************************************
* Copyright 2019-2023 Intel Corporation.
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

#ifndef ONEAPI_MKL_VM_DEVICE_DETAIL_SCALAR_HPP
#define ONEAPI_MKL_VM_DEVICE_DETAIL_SCALAR_HPP 1

#include "oneapi/mkl/vm/decls.hpp"
#include "oneapi/mkl/vm/device/detail/decls.hpp"
#include <complex>
#include <sycl/sycl.hpp>
#include <tuple>
#include <type_traits>

namespace oneapi::mkl::vm::detail::gpu::intel::scalar {

SYCL_EXTERNAL oneapi::mkl::vm::status abs_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_c_ep_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_c_la_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status abs_c_ha_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
abs_z_ep_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
abs_z_la_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
abs_z_ha_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acos_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acos_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acos_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acos_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acosh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acosh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acosh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acosh_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acospi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acospi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
acospi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status acospi_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_s_ep_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_s_la_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_s_ha_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_d_ep_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_d_la_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_d_ha_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_c_ep_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_c_la_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status add_c_ha_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_z_ep_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_z_la_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
add_z_ha_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status arg_c_ep_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status arg_c_la_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status arg_c_ha_gen(const std::complex<float>* a,
                                                   float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
arg_z_ep_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
arg_z_la_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
arg_z_ha_gen(const std::complex<double>* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asin_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asin_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asin_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asin_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinh_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_s_ep_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_s_la_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_s_ha_fp64only(const float* a,
                                                          float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinh_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinpi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinpi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
asinpi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status asinpi_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_d_la_nolut(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                        sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                        sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                        sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan2_s_ep_gen(const float* a,
                                                     const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan2_s_la_gen(const float* a,
                                                     const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atan2_s_ha_gen(const float* a,
                                                     const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_h_ep_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                               sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_h_la_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                               sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_h_ha_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                               sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_s_ep_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_s_la_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_s_la_nofp64(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_s_ha_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atan2pi_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanh_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
atanpi_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_s_ep_nofp64(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_s_la_nofp64(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status atanpi_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cbrt_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cbrt_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cbrt_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cbrt_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorm_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorm_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorm_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_s_ep_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_s_la_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_s_ha_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_d_ep_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_d_la_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorm_d_ha_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorminv_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorminv_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cdfnorminv_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_s_ep_fp64only(const float* a,
                                                               float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_s_la_fp64only(const float* a,
                                                               float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_s_ha_fp64only(const float* a,
                                                               float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_d_ep_gen(const double* a,
                                                          double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_d_la_gen(const double* a,
                                                          double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cdfnorminv_d_ha_gen(const double* a,
                                                          double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ceil_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ceil_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ceil_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ceil_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_c_ep_gen(const float* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_c_la_gen(const float* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_c_ha_gen(const float* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_z_ep_gen(const double* a,
                                                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_z_la_gen(const double* a,
                                                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cis_z_ha_gen(const double* a,
                                                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_c_ep_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_c_la_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_c_ha_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_z_ep_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_z_la_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
conj_z_ha_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_s_ep_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_s_la_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_s_ha_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
copysign_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cos_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cos_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cos_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_s_ep_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_s_la_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_s_ha_fp64only(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cos_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosd_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosd_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosd_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_s_ep_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_s_la_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosd_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cosh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cosh_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
cospi_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_s_ep_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_s_la_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_s_ha_fp64only(const float* a,
                                                          float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status cospi_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_ep_nofp64_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_la_nofp64_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_h_ha_nofp64_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_s_ep_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_s_ep_nofp64(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_s_la_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_s_la_nofp64(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_s_ha_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_d_ep_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_d_la_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_d_ha_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_c_ep_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_c_la_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status div_c_ha_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_z_ep_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_z_la_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
div_z_ha_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erf_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfc_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfc_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfc_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_s_ep_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_s_la_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfc_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcinv_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcinv_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcinv_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_s_ep_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_s_la_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_s_ha_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_d_ep_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_d_la_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcinv_d_ha_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcx_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcx_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfcx_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfcx_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_ep_nolut_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_la_nolut_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
erfinv_h_ha_nolut_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_ep_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_ep_nolut(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_la_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_la_nolut(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_ha_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_s_ha_nolut(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status erfinv_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_d_la_nolut(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_c_ep_gen(const std::complex<float>* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_c_la_gen(const std::complex<float>* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp_c_ha_gen(const std::complex<float>* a,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp_z_ep_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp_z_la_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp_z_ha_nolut(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp10_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp10_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp10_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp10_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp2_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp2_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
exp2_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status exp2_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
expm1_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_ep_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_la_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_s_ha_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status expm1_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fdim_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fdim_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fdim_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_s_ep_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_s_la_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_s_ha_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_d_ep_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_d_la_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fdim_d_ha_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
floor_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
floor_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
floor_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status floor_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmax_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmax_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmax_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_s_ep_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_s_la_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_s_ha_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_d_ep_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_d_la_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmax_d_ha_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmin_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmin_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmin_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_s_ep_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_s_la_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_s_ha_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_d_ep_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_d_la_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmin_d_ha_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmod_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmod_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
fmod_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_s_ep_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_s_la_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_s_ha_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_d_ep_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_d_la_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status fmod_d_ha_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
frac_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
frac_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
frac_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_s_ep_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_s_la_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status frac_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_h_ep_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                             sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_h_la_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                             sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_h_ha_fp64only_fp32cast(const sycl::half* a, const sycl::half* b,
                             sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_s_ep_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_s_la_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_s_ha_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
hypot_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status inv_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invcbrt_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invcbrt_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invcbrt_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_s_ep_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_s_la_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_s_ha_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_d_ep_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_d_la_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invcbrt_d_ha_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invsqrt_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invsqrt_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
invsqrt_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_s_ep_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_s_la_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_s_ha_fp64only(const float* a,
                                                            float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_d_ep_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_d_la_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status invsqrt_d_ha_gen(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
lgamma_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
lgamma_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
lgamma_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status lgamma_s_ep_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status lgamma_s_la_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status lgamma_s_ha_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_h_ep_gen_fp32cast(const sycl::half* a,
                                                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ln_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_h_la_gen_fp32cast(const sycl::half* a,
                                                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ln_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_h_ha_gen_fp32cast(const sycl::half* a,
                                                           sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ln_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_ep_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_la_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_s_ha_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_d_ep_nolut(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_d_la_nolut(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_c_ep_gen(const std::complex<float>* a,
                                                  std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_c_la_gen(const std::complex<float>* a,
                                                  std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_c_ha_gen(const std::complex<float>* a,
                                                  std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_z_ep_gen(const std::complex<double>* a,
                                                  std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status ln_z_la_gen(const std::complex<double>* a,
                                                  std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
ln_z_ha_nolut(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log10_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_s_ep_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_s_la_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_s_ha_fp64only(const float* a,
                                                          float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_d_ep_nolut(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_d_la_nolut(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log10_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log1p_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log1p_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log1p_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_ep_nolut(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_la_nolut(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log1p_d_ha_nolut(const double* a,
                                                       double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
log2_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_s_ep_nofp64(const float* a,
                                                       float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_s_la_nofp64(const float* a,
                                                       float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_d_ep_nolut(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_d_la_nolut(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status log2_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
logb_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
logb_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
logb_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status logb_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status maxmag_s_ep_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status maxmag_s_la_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status maxmag_s_ha_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
maxmag_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                         sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status minmag_s_ep_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status minmag_s_la_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status minmag_s_ha_gen(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
minmag_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
modf_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
modf_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
modf_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_s_ep_gen(const float* a, float* y,
                                                    float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_s_la_gen(const float* a, float* y,
                                                    float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_s_ha_gen(const float* a, float* y,
                                                    float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_d_ep_gen(const double* a, double* y,
                                                    double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_d_la_gen(const double* a, double* y,
                                                    double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status modf_d_ha_gen(const double* a, double* y,
                                                    double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_s_ep_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_s_la_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_s_ha_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_d_ep_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_d_la_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_d_ha_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_c_ep_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_c_la_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status mul_c_ha_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_c_ha_nolut(const std::complex<float>* a, const std::complex<float>* b,
               std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_z_ep_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_z_la_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_z_ha_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mul_z_ha_nolut(const std::complex<double>* a, const std::complex<double>* b,
               std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_c_ep_gen(const std::complex<float>* a, const std::complex<float>* b,
                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_c_la_gen(const std::complex<float>* a, const std::complex<float>* b,
                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_c_ha_gen(const std::complex<float>* a, const std::complex<float>* b,
                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_z_ep_gen(const std::complex<double>* a, const std::complex<double>* b,
                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_z_la_gen(const std::complex<double>* a, const std::complex<double>* b,
                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
mulbyconj_z_ha_gen(const std::complex<double>* a, const std::complex<double>* b,
                   std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nearbyint_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nearbyint_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nearbyint_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_s_ep_gen(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_s_la_gen(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_s_ha_gen(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_d_ep_gen(const double* a,
                                                         double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_d_la_gen(const double* a,
                                                         double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status nearbyint_d_ha_gen(const double* a,
                                                         double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_s_ep_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_s_la_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_s_ha_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
nextafter_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_s_ep_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_s_la_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_s_la_nolut(const float* a,
                                                     const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_s_ha_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_s_ha_nolut(const float* a,
                                                     const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_d_ep_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_d_ep_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_d_la_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_d_la_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow_d_ha_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow_d_ha_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow2o3_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow2o3_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow2o3_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow2o3_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow3o2_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow3o2_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
pow3o2_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status pow3o2_d_ha_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_s_ep_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_s_la_gen(const float* a,
                                                    const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_s_la_nolut(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_s_ha_fp64only(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_s_ha_nolut(const float* a,
                                                      const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_d_ep_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_d_ep_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_d_la_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_d_la_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powr_d_ha_gen(const double* a,
                                                    const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powr_d_ha_nolut(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_ep_nolut_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_la_nolut_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
powx_h_ha_nolut_fp32cast(const sycl::half* a, sycl::half b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_ep_fp64only(const float* a,
                                                         float b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_ep_nolut(const float* a, float b,
                                                      float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_la_fp64only(const float* a,
                                                         float b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_la_nolut(const float* a, float b,
                                                      float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_ha_fp64only(const float* a,
                                                         float b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_s_ha_nolut(const float* a, float b,
                                                      float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_ep_gen(const double* a, double b,
                                                    double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_ep_nolut(const double* a, double b,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_la_gen(const double* a, double b,
                                                    double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_la_nolut(const double* a, double b,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_ha_gen(const double* a, double b,
                                                    double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status powx_d_ha_nolut(const double* a, double b,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b,
                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_s_ep_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_s_la_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_s_ha_gen(const float* a, const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_d_ep_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_d_la_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
remainder_d_ha_gen(const double* a, const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
rint_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
rint_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
rint_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status rint_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
round_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
round_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
round_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status round_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sin_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sin_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sin_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_s_ep_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_s_la_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_s_ha_fp64only(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sin_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincos_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_s_ep_gen(const float* a, float* y,
                                                      float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_s_ep_nofp64(const float* a,
                                                         float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_s_la_gen(const float* a, float* y,
                                                      float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_s_la_nofp64(const float* a,
                                                         float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_s_ha_fp64only(const float* a,
                                                           float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_d_ep_gen(const double* a,
                                                      double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_d_la_gen(const double* a,
                                                      double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincos_d_ha_gen(const double* a,
                                                      double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincospi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincospi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sincospi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y, sycl::half* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_s_ep_gen(const float* a,
                                                        float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_s_la_gen(const float* a,
                                                        float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_s_ha_gen(const float* a,
                                                        float* y, float* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_d_ep_gen(const double* a,
                                                        double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_d_la_gen(const double* a,
                                                        double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status sincospi_d_ha_gen(const double* a,
                                                        double* y, double* z);
SYCL_EXTERNAL oneapi::mkl::vm::status
sind_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sind_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sind_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_s_ep_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_s_la_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sind_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinh_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sinpi_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_s_ep_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_s_la_nofp64(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_s_ha_fp64only(const float* a,
                                                          float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sinpi_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqr_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sqrt_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_c_ep_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_c_la_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_c_ha_gen(const std::complex<float>* a, std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_z_ep_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_z_la_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sqrt_z_ha_gen(const std::complex<double>* a, std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_h_ep_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_h_la_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_h_ha_gen_fp32cast(const sycl::half* a, const sycl::half* b, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_s_ep_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_s_la_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_s_ha_gen(const float* a,
                                                   const float* b, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_d_ep_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_d_la_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_d_ha_gen(const double* a,
                                                   const double* b, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_c_ep_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_c_la_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status sub_c_ha_gen(const std::complex<float>* a,
                                                   const std::complex<float>* b,
                                                   std::complex<float>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_z_ep_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_z_la_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
sub_z_ha_gen(const std::complex<double>* a, const std::complex<double>* b,
             std::complex<double>* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_h_ep_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tan_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_h_la_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tan_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_h_ha_gen_fp32cast(const sycl::half* a,
                                                            sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tan_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_s_ep_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_s_la_nofp64(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_s_ha_fp64only(const float* a,
                                                        float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tan_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tand_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tand_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tand_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_s_ep_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_s_la_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_s_ha_fp64only(const float* a,
                                                         float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tand_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_ep_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_la_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanh_h_ha_nofp64_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_ep_nofp64(const float* a,
                                                       float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_la_nofp64(const float* a,
                                                       float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_s_ha_nofp64(const float* a,
                                                       float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_d_ep_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_d_la_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanh_d_ha_gen(const double* a, double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanpi_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanpi_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tanpi_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tanpi_d_ha_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tgamma_h_ep_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tgamma_h_la_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
tgamma_h_ha_fp64only_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tgamma_s_ep_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tgamma_s_la_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tgamma_s_ha_fp64only(const float* a,
                                                           float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tgamma_d_ep_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status tgamma_d_la_gen(const double* a,
                                                      double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
trunc_h_ep_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
trunc_h_la_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status
trunc_h_ha_gen_fp32cast(const sycl::half* a, sycl::half* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_s_ep_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_s_la_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_s_ha_gen(const float* a, float* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_d_ep_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_d_la_gen(const double* a,
                                                     double* y);
SYCL_EXTERNAL oneapi::mkl::vm::status trunc_d_ha_gen(const double* a,
                                                     double* y);
} // namespace oneapi::mkl::vm::detail::gpu::intel::scalar

namespace oneapi::mkl::vm::device::detail {

enum class Function : int {
  kAbs = 0,
  kAcos = 1,
  kAcosh = 2,
  kAcospi = 3,
  kAdd = 4,
  kArg = 5,
  kAsin = 6,
  kAsinh = 7,
  kAsinpi = 8,
  kAtan = 9,
  kAtan2 = 10,
  kAtan2pi = 11,
  kAtanh = 12,
  kAtanpi = 13,
  kCbrt = 14,
  kCdfnorm = 15,
  kCdfnorminv = 16,
  kCeil = 17,
  kCis = 18,
  kConj = 19,
  kCopysign = 20,
  kCos = 21,
  kCosd = 22,
  kCosh = 23,
  kCospi = 24,
  kDiv = 25,
  kErf = 26,
  kErfc = 27,
  kErfcx = 28,
  kErfcinv = 29,
  kErfinv = 30,
  kExp = 31,
  kExp10 = 32,
  kExp2 = 33,
  kExpm1 = 34,
  kFdim = 35,
  kFloor = 36,
  kFmax = 37,
  kFmin = 38,
  kFmod = 39,
  kFrac = 40,
  kHypot = 41,
  kInv = 42,
  kInvcbrt = 43,
  kInvsqrt = 44,
  kLgamma = 45,
  kLn = 46,
  kLog10 = 47,
  kLog1p = 48,
  kLog2 = 49,
  kLogb = 50,
  kMaxmag = 51,
  kMinmag = 52,
  kModf = 53,
  kMul = 54,
  kMulbyconj = 55,
  kNearbyint = 56,
  kNextafter = 57,
  kPow = 58,
  kPow2o3 = 59,
  kPow3o2 = 60,
  kPowr = 61,
  kPowx = 62,
  kRemainder = 63,
  kRint = 64,
  kRound = 65,
  kSin = 66,
  kSincos = 67,
  kSincospi = 68,
  kSind = 69,
  kSinh = 70,
  kSinpi = 71,
  kSqr = 72,
  kSqrt = 73,
  kSub = 74,
  kTan = 75,
  kTand = 76,
  kTanh = 77,
  kTanpi = 78,
  kTgamma = 79,
  kTrunc = 80,
};

template <Function func, typename Tin, typename Tout,
          Accuracy acc = Accuracy::kNS, Feature fea = Feature::kNS>
struct Evaluator {};

template <>
struct Evaluator<Function::kAbs, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<float>, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<float>, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<float>, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<double>, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<double>, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAbs, std::complex<double>, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::abs_z_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcos, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acos_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcosh, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acosh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        acospi_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        acospi_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        acospi_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAcospi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::acospi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAdd, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_c_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_c_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_c_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_z_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_z_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAdd, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::add_z_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<float>, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<float>, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<float>, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<double>, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<double>, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kArg, std::complex<double>, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::arg_z_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsin, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asin_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinh_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinh_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinh_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_s_ha_fp64only(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kAsinh, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinh, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinpi_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinpi_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        asinpi_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAsinpi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::asinpi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atan2pi_h_ep_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atan2pi_h_la_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atan2pi_h_ha_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_s_ep_fp64only(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_s_la_gen(a, b,
                                                                         y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, float, float, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_s_la_nofp64(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_s_ha_fp64only(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_d_ep_gen(a, b,
                                                                         y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_d_la_gen(a, b,
                                                                         y);
  }
};
template <>
struct Evaluator<Function::kAtan2pi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atan2pi_d_ha_gen(a, b,
                                                                         y);
  }
};
template <>
struct Evaluator<Function::kAtanh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanh, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        atanpi_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_s_ep_nofp64(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_s_la_nofp64(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kAtanpi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::atanpi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCbrt, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cbrt_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorm_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorm_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorm_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_s_ep_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, float, float, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_s_la_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_s_ha_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorm, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorm_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_s_ep_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, float, float, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_s_la_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cdfnorminv_s_ha_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorminv_d_ep_gen(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorminv_d_la_gen(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kCdfnorminv, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cdfnorminv_d_ha_gen(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kCeil, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCeil, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ceil_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, float, std::complex<float>, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, float, std::complex<float>, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, float, std::complex<float>, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, double, std::complex<double>, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, double, std::complex<double>, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCis, double, std::complex<double>, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cis_z_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kConj, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::conj_z_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCopysign, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        copysign_h_ep_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kCopysign, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        copysign_h_la_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kCopysign, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        copysign_h_ha_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kCopysign, float, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_s_ep_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCopysign, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_s_la_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCopysign, float, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_s_ha_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCopysign, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_d_ep_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCopysign, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_d_la_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCopysign, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::copysign_d_ha_gen(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cos_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cos_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCos, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cos_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_s_ha_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCos, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cos_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cosd_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cosd_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cosd_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_s_ep_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kCosd, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_s_la_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kCosd, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kCosd, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosd, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosd_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kCosh, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCosh, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cosh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cospi_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cospi_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        cospi_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_s_ha_fp64only(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kCospi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kCospi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::cospi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        div_h_ep_nofp64_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        div_h_la_nofp64_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        div_h_ha_nofp64_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_s_ep_nofp64(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kDiv, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_s_la_nofp64(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kDiv, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_s_ha_fp64only(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kDiv, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_c_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_c_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_c_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_z_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_z_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kDiv, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::div_z_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kErf, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErf, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErf, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErf, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErf, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErf, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErf, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErf, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErf, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erf_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfc_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfc_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfc_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_s_ep_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kErfc, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_s_la_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kErfc, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kErfc, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfc, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfc_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfcinv_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfcinv_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfcinv_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_s_ep_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, float, float, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_s_la_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_s_ha_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcinv, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcinv_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfcx, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfcx_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_ep_nolut_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_la_nolut_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        erfinv_h_ha_nolut_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_ep_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_ep_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_la_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_ha_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kErfinv, float, float, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_s_ha_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kErfinv, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::erfinv_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp_z_ha_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp10, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp10_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExp2, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::exp2_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        expm1_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        expm1_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        expm1_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, float, float, Accuracy::kHA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_s_ha_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kExpm1, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::expm1_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFdim, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFdim, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fdim_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFloor, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFloor, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::floor_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFmax, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmax, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmax_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmin, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmin_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFmod, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::fmod_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kFrac, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        frac_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kFrac, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        frac_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kFrac, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        frac_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kFrac, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_s_ep_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kFrac, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_s_la_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kFrac, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kFrac, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFrac, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kFrac, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::frac_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kHypot, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        hypot_h_ep_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        hypot_h_la_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        hypot_h_ha_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_s_ep_fp64only(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_s_la_fp64only(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_s_ha_fp64only(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kHypot, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::hypot_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kInv, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInv, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInv, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInv, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInv, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInv, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInv, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInv, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInv, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::inv_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invcbrt_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invcbrt_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invcbrt_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_s_ep_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, float, float, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_s_la_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_s_ha_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvcbrt, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invcbrt_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invsqrt_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invsqrt_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        invsqrt_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, float, float, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_s_ep_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, float, float, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_s_la_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, float, float, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_s_ha_fp64only(
        a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kInvsqrt, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::invsqrt_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLgamma, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        lgamma_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLgamma, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        lgamma_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLgamma, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        lgamma_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLgamma, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::lgamma_s_ep_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLgamma, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::lgamma_s_la_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLgamma, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::lgamma_s_ha_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_ep_gen_fp32cast(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_ep_nofp64_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_la_gen_fp32cast(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_la_nofp64_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_ha_gen_fp32cast(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kLn, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_h_ha_nofp64_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, float, float, Accuracy::kHA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_s_ha_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, double, double, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_d_ep_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLn, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::ln_z_ha_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log10_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log10_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log10_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_s_ha_fp64only(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kLog10, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, double, double, Accuracy::kEP,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_d_ep_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, double, double, Accuracy::kLA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog10, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log10_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kEP,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_ep_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kLA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog1p, double, double, Accuracy::kHA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log1p_d_ha_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log2_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log2_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        log2_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kLog2, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, double, double, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_d_ep_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_d_la_nolut(a, y);
  }
};
template <>
struct Evaluator<Function::kLog2, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::log2_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kLogb, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::logb_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        maxmag_h_ep_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        maxmag_h_la_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        maxmag_h_ha_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_s_ep_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_s_la_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_s_ha_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_d_ep_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_d_la_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMaxmag, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::maxmag_d_ha_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        minmag_h_ep_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMinmag, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        minmag_h_la_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMinmag, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        minmag_h_ha_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMinmag, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_s_ep_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_s_la_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_s_ha_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_d_ep_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_d_la_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kMinmag, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::minmag_d_ha_gen(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kModf, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_h_ep_gen_fp32cast(
        a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_h_la_gen_fp32cast(
        a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_h_ha_gen_fp32cast(
        a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_s_ep_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_s_la_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_s_ha_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_d_ep_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_d_la_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kModf, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::modf_d_ha_gen(a, y, z);
  }
};
template <>
struct Evaluator<Function::kMul, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_c_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_c_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_c_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_c_ha_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_z_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_z_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_z_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMul, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mul_z_ha_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_c_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_c_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_c_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<double>,
                 std::complex<double>, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_z_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<double>,
                 std::complex<double>, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_z_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kMulbyconj, std::complex<double>,
                 std::complex<double>, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::mulbyconj_z_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nearbyint_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nearbyint_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nearbyint_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, float, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_s_ep_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_s_la_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, float, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_s_ha_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_d_ep_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_d_la_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNearbyint, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nearbyint_d_ha_gen(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nextafter_h_ep_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kNextafter, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nextafter_h_la_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kNextafter, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        nextafter_h_ha_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kNextafter, float, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_s_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_s_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, float, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_s_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_d_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_d_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kNextafter, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::nextafter_d_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kPow, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, float, float, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_s_la_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_s_ha_fp64only(a, b,
                                                                          y);
  }
};
template <>
struct Evaluator<Function::kPow, float, float, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_s_ha_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_ep_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_la_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow, double, double, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow_d_ha_nolut(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow2o3_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow2o3_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow2o3_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow2o3, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow2o3_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow3o2_h_ep_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow3o2_h_la_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        pow3o2_h_ha_gen_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPow3o2, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::pow3o2_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kPowr, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, float, float, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_s_la_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowr, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_s_ha_fp64only(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kPowr, float, float, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_s_ha_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_ep_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_la_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowr, double, double, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powr_d_ha_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_ep_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_ep_nolut_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_la_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_la_nolut_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_ha_fp64only_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        powx_h_ha_nolut_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_ep_fp64only(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_ep_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_la_fp64only(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_la_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_ha_fp64only(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kPowx, float, float, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_s_ha_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kEP, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_ep_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kLA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_la_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kPowx, double, double, Accuracy::kHA, Feature::kTA> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double b, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::powx_d_ha_nolut(a, b,
                                                                        y);
  }
};
template <>
struct Evaluator<Function::kRemainder, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        remainder_h_ep_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kRemainder, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        remainder_h_la_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kRemainder, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        remainder_h_ha_gen_fp32cast(a, b, y);
  }
};
template <>
struct Evaluator<Function::kRemainder, float, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_s_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRemainder, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_s_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRemainder, float, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_s_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRemainder, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_d_ep_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRemainder, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_d_la_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRemainder, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::remainder_d_ha_gen(a, b,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kRint, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRint, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRint, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRint, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRint, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRint, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRint, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRint, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRint, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::rint_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRound, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRound, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kRound, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kRound, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::round_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sin_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sin_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSin, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sin_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_s_ha_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSin, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sin_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_ep_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_ep_nofp64_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_la_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_la_nofp64_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_ha_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincos_h_ha_nofp64_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_s_ep_gen(a, y,
                                                                        z);
  }
};
template <>
struct Evaluator<Function::kSincos, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_s_ep_nofp64(a, y,
                                                                           z);
  }
};
template <>
struct Evaluator<Function::kSincos, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_s_la_gen(a, y,
                                                                        z);
  }
};
template <>
struct Evaluator<Function::kSincos, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_s_la_nofp64(a, y,
                                                                           z);
  }
};
template <>
struct Evaluator<Function::kSincos, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_s_ha_fp64only(
        a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincos, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_d_ep_gen(a, y,
                                                                        z);
  }
};
template <>
struct Evaluator<Function::kSincos, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_d_la_gen(a, y,
                                                                        z);
  }
};
template <>
struct Evaluator<Function::kSincos, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincos_d_ha_gen(a, y,
                                                                        z);
  }
};
template <>
struct Evaluator<Function::kSincospi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincospi_h_ep_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincospi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincospi_h_la_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincospi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y,
                                     sycl::half* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sincospi_h_ha_gen_fp32cast(a, y, z);
  }
};
template <>
struct Evaluator<Function::kSincospi, float, float, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_s_ep_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSincospi, float, float, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_s_la_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSincospi, float, float, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y, float* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_s_ha_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSincospi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_d_ep_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSincospi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_d_la_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSincospi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y, double* z) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sincospi_d_ha_gen(a, y,
                                                                          z);
  }
};
template <>
struct Evaluator<Function::kSind, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sind_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSind, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sind_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSind, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sind_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSind, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_s_ep_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kSind, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_s_la_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kSind, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kSind, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSind, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSind, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sind_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kSinh, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinh, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sinpi_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sinpi_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        sinpi_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_s_ha_fp64only(a,
                                                                            y);
  }
};
template <>
struct Evaluator<Function::kSinpi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSinpi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sinpi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqr, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqr_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_c_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_c_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_c_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_z_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_z_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSqrt, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sqrt_z_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kSub, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_h_ep_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_h_la_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, const sycl::half* b,
                                     sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_h_ha_gen_fp32cast(
        a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_s_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_s_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, const float* b, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_s_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_d_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_d_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, const double* b,
                                     double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_d_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<float>, std::complex<float>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_c_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<float>, std::complex<float>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_c_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<float>, std::complex<float>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<float>* a,
                                     const std::complex<float>* b,
                                     std::complex<float>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_c_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<double>, std::complex<double>,
                 Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_z_ep_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<double>, std::complex<double>,
                 Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_z_la_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kSub, std::complex<double>, std::complex<double>,
                 Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const std::complex<double>* a,
                                     const std::complex<double>* b,
                                     std::complex<double>* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::sub_z_ha_gen(a, b, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tan_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tan_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTan, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tan_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_s_ha_fp64only(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTan, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tan_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tand_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tand_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tand_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_s_ep_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kTand, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_s_la_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kTand, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_s_ha_fp64only(a,
                                                                           y);
  }
};
template <>
struct Evaluator<Function::kTand, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTand, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tand_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tanh_h_ep_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tanh_h_la_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tanh_h_ha_nofp64_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kEP, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_ep_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kLA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_la_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, float, float, Accuracy::kHA, Feature::kSO> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_s_ha_nofp64(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, double, double, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, double, double, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanh, double, double, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanh_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTanpi, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tanpi_d_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTgamma, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tgamma_h_ep_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTgamma, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tgamma_h_la_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTgamma, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::
        tgamma_h_ha_fp64only_fp32cast(a, y);
  }
};
template <>
struct Evaluator<Function::kTgamma, float, float, Accuracy::kEP, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tgamma_s_ep_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kTgamma, float, float, Accuracy::kLA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tgamma_s_la_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kTgamma, float, float, Accuracy::kHA, Feature::kDR> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tgamma_s_ha_fp64only(a,
                                                                             y);
  }
};
template <>
struct Evaluator<Function::kTgamma, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tgamma_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTgamma, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::tgamma_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, sycl::half, sycl::half, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_h_ep_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, sycl::half, sycl::half, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_h_la_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, sycl::half, sycl::half, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const sycl::half* a, sycl::half* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_h_ha_gen_fp32cast(
        a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, float, float, Accuracy::kEP, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_s_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, float, float, Accuracy::kLA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_s_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, float, float, Accuracy::kHA, Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const float* a, float* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_s_ha_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, double, double, Accuracy::kEP,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_d_ep_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, double, double, Accuracy::kLA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_d_la_gen(a, y);
  }
};
template <>
struct Evaluator<Function::kTrunc, double, double, Accuracy::kHA,
                 Feature::kGE> {
  void operator()() {}
  oneapi::mkl::vm::status operator()(const double* a, double* y) {
    return oneapi::mkl::vm::detail::gpu::intel::scalar::trunc_d_ha_gen(a, y);
  }
};
} // namespace oneapi::mkl::vm::device::detail

#endif // #ifndef ONEAPI_MKL_VM_DEVICE_DETAIL_SCALAR_HPP
