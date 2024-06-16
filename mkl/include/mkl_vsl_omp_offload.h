/*******************************************************************************
* Copyright 2020-2022 Intel Corporation.
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

/*
!  Content:
!      Intel(R) oneAPI Math Kernel Library (oneMKL) for OpenMP compiler offload
!      interface
!******************************************************************************/

#ifndef _MKL_VSL_OMP_OFFLOAD_H_
#define _MKL_VSL_OMP_OFFLOAD_H_

#if (_OPENMP >= 202011)
#include <omp.h>
#endif

#include "mkl_vsl_types.h"
#include "mkl_vsl_omp_variant.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngUniform)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngUniform)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngUniform(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngUniform)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngUniform)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngUniform(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniform)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniform)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngUniform(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const int a, const int b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGaussian)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGaussian)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngGaussian(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float mean, const float stddev) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGaussian)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGaussian)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngGaussian(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double mean, const double stddev) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGaussianMV)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGaussianMV)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngGaussianMV(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const MKL_INT dimen, const MKL_INT mstorage, const float* a, const float* t) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGaussianMV)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGaussianMV)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngGaussianMV(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const MKL_INT dimen, const MKL_INT mstorage, const double* a, const double* t) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngLognormal)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngLognormal)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngLognormal(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float mean, const float stddev, const float displ, const float scale) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngLognormal)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngLognormal)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngLognormal(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double mean, const double stddev, const double displ, const double scale) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngCauchy)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngCauchy)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngCauchy(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngCauchy)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngCauchy)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngCauchy(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngExponential)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngExponential)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngExponential(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngExponential)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngExponential)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngExponential(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGumbel)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGumbel)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngGumbel(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGumbel)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGumbel)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngGumbel(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngLaplace)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngLaplace)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngLaplace(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngLaplace)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngLaplace)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngLaplace(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngRayleigh)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngRayleigh)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngRayleigh(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float a, const float b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngRayleigh)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngRayleigh)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngRayleigh(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double a, const double b) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngWeibull)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngWeibull)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngWeibull(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float alpha, const float a, const float beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngWeibull)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngWeibull)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngWeibull(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double alpha, const double a, const double beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngBeta)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngBeta)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngBeta(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float p, const float q, const float a, const float beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngBeta)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngBeta)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngBeta(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double p, const double q, const double a, const double beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGamma)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngGamma)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngGamma(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const float alpha, const float a, const float beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGamma)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngGamma)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngGamma(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const double alpha, const double a, const double beta) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngChiSquare)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vsRngChiSquare)) match(construct={target variant dispatch}, device={arch(gen)})
int vsRngChiSquare(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, float r[], const int v) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngChiSquare)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, vdRngChiSquare)) match(construct={target variant dispatch}, device={arch(gen)})
int vdRngChiSquare(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, double r[], const int v) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngHypergeometric)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngHypergeometric)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngHypergeometric(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const int l, const int s, const int m) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngBinomial)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngBinomial)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngBinomial(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const int ntrial, const double p) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngMultinomial)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngMultinomial)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngMultinomial(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const int ntrial, const int k, const double* p) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngPoissonV)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngPoissonV)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngPoissonV(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const double* lambda) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngNegbinomial)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngNegbinomial)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngNegbinomial(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const double a, const double p) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngBernoulli)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngBernoulli)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngBernoulli(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const double p) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngGeometric)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngGeometric)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngGeometric(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const double p) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngPoisson)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngPoisson)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngPoisson(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, int r[], const double lambda) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngUniformBits(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, unsigned int r[]) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits32)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits32)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngUniformBits32(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, unsigned int r[]) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits64)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync)) \
    adjust_args(need_device_ptr:r)
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, viRngUniformBits64)) match(construct={target variant dispatch}, device={arch(gen)})
int viRngUniformBits64(const MKL_INT method, VSLStreamStatePtr stream, const MKL_INT n, unsigned MKL_INT64 r[]) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, sSSCompute)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, sSSCompute)) match(construct={target variant dispatch}, device={arch(gen)})
int vslsSSCompute(VSLSSTaskPtr, const unsigned MKL_INT64 estimate, const MKL_INT method) NOTHROW;

#if (_OPENMP >= 202011)
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, dSSCompute)) match(construct={dispatch}, device={arch(gen)}) \
    append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant (MKL_VARIANT_NAME(vsl, dSSCompute)) match(construct={target variant dispatch}, device={arch(gen)})
int vsldSSCompute(VSLSSTaskPtr, const unsigned MKL_INT64 estimate, const MKL_INT method) NOTHROW;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // _MKL_VSL_OMP_OFFLOAD_H_
