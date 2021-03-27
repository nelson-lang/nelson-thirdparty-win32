/*******************************************************************************
* Copyright 2006-2020 Intel Corporation.
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

#ifndef _MKL_VML_OMP_OFFLOAD_H_
#define _MKL_VML_OMP_OFFLOAD_H_ 1

#include "mkl_types.h"
#include "mkl_vml_omp_variant.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAbs(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAbs(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAbs(const MKL_INT n, const MKL_Complex8 * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAbs(const MKL_INT n, const MKL_Complex16 * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAbs(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAbs(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAbs(const MKL_INT n, const MKL_Complex8 * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzabs)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAbs(const MKL_INT n, const MKL_Complex16 * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAcos(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAcos(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAcos(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAcos(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAcos(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAcos(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAcos(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzacos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAcos(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAcosh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAcosh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAcosh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAcosh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAcosh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAcosh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAcosh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzacosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAcosh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsacospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAcospi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdacospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAcospi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsacospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAcospi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdacospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAcospi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAdd(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAdd(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAdd(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAdd(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAdd(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAdd(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAdd(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzadd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAdd(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcarg)) match(construct={target variant dispatch}, device={arch(gen)})
void vcArg(const MKL_INT n, const MKL_Complex8 * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzarg)) match(construct={target variant dispatch}, device={arch(gen)})
void vzArg(const MKL_INT n, const MKL_Complex16 * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcarg)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcArg(const MKL_INT n, const MKL_Complex8 * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzarg)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzArg(const MKL_INT n, const MKL_Complex16 * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAsin(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAsin(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAsin(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAsin(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAsin(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAsin(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAsin(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzasin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAsin(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAsinh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAsinh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAsinh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAsinh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAsinh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAsinh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAsinh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzasinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAsinh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsasinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAsinpi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdasinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAsinpi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsasinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAsinpi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdasinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAsinpi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAtan(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAtan(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAtan(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAtan(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAtan(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAtan(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAtan(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzatan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAtan(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsatan2)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAtan2(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdatan2)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAtan2(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsatan2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAtan2(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdatan2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAtan2(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsatan2pi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAtan2pi(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdatan2pi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAtan2pi(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsatan2pi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAtan2pi(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdatan2pi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAtan2pi(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAtanh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAtanh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcAtanh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzAtanh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAtanh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAtanh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcAtanh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzatanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzAtanh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsatanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsAtanpi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdatanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdAtanpi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsatanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsAtanpi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdatanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdAtanpi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCbrt(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCbrt(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCbrt(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCbrt(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscdfnorm)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCdfNorm(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcdfnorm)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCdfNorm(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscdfnorm)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCdfNorm(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcdfnorm)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCdfNorm(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscdfnorminv)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCdfNormInv(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcdfnorminv)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCdfNormInv(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscdfnorminv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCdfNormInv(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcdfnorminv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCdfNormInv(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsceil)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCeil(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdceil)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCeil(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsceil)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCeil(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdceil)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCeil(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vccis)) match(construct={target variant dispatch}, device={arch(gen)})
void vcCIS(const MKL_INT n, const float * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzcis)) match(construct={target variant dispatch}, device={arch(gen)})
void vzCIS(const MKL_INT n, const double * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmccis)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcCIS(const MKL_INT n, const float * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzcis)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzCIS(const MKL_INT n, const double * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vcConj(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vzConj(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcConj(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzConj(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscopysign)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCopySign(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcopysign)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCopySign(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscopysign)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCopySign(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcopysign)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCopySign(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscos)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCos(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcos)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCos(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vccos)) match(construct={target variant dispatch}, device={arch(gen)})
void vcCos(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzcos)) match(construct={target variant dispatch}, device={arch(gen)})
void vzCos(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCos(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCos(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmccos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcCos(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzcos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzCos(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscosd)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCosd(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcosd)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCosd(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscosd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCosd(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcosd)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCosd(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCosh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCosh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vccosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcCosh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzcosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzCosh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCosh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCosh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmccosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcCosh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzcosh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzCosh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vscospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsCospi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdcospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdCospi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmscospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsCospi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdcospi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdCospi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vsDiv(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vddiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vdDiv(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vcDiv(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vzDiv(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsDiv(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmddiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdDiv(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcDiv(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzdiv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzDiv(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vserf)) match(construct={target variant dispatch}, device={arch(gen)})
void vsErf(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vderf)) match(construct={target variant dispatch}, device={arch(gen)})
void vdErf(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmserf)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsErf(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmderf)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdErf(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vserfc)) match(construct={target variant dispatch}, device={arch(gen)})
void vsErfc(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vderfc)) match(construct={target variant dispatch}, device={arch(gen)})
void vdErfc(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmserfc)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsErfc(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmderfc)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdErfc(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vserfcinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vsErfcInv(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vderfcinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vdErfcInv(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmserfcinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsErfcInv(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmderfcinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdErfcInv(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vserfinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vsErfInv(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vderfinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vdErfInv(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmserfinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsErfInv(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmderfinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdErfInv(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vsExp(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vdExp(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vcExp(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vzExp(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsExp(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdExp(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcExp(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzexp)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzExp(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsexp10)) match(construct={target variant dispatch}, device={arch(gen)})
void vsExp10(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdexp10)) match(construct={target variant dispatch}, device={arch(gen)})
void vdExp10(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsexp10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsExp10(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdexp10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdExp10(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsexp2)) match(construct={target variant dispatch}, device={arch(gen)})
void vsExp2(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdexp2)) match(construct={target variant dispatch}, device={arch(gen)})
void vdExp2(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsexp2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsExp2(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdexp2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdExp2(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsexpint1)) match(construct={target variant dispatch}, device={arch(gen)})
void vsExpInt1(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdexpint1)) match(construct={target variant dispatch}, device={arch(gen)})
void vdExpInt1(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsexpint1)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsExpInt1(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdexpint1)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdExpInt1(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsexpm1)) match(construct={target variant dispatch}, device={arch(gen)})
void vsExpm1(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdexpm1)) match(construct={target variant dispatch}, device={arch(gen)})
void vdExpm1(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsexpm1)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsExpm1(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdexpm1)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdExpm1(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfdim)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFdim(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfdim)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFdim(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfdim)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFdim(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfdim)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFdim(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfloor)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFloor(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfloor)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFloor(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfloor)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFloor(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfloor)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFloor(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfmax)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFmax(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfmax)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFmax(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfmax)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFmax(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfmax)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFmax(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfmin)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFmin(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfmin)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFmin(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfmin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFmin(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfmin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFmin(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfmod)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFmod(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfmod)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFmod(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfmod)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFmod(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfmod)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFmod(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vsFrac(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vdFrac(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsFrac(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdFrac(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vshypot)) match(construct={target variant dispatch}, device={arch(gen)})
void vsHypot(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdhypot)) match(construct={target variant dispatch}, device={arch(gen)})
void vdHypot(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmshypot)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsHypot(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdhypot)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdHypot(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vsInv(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vdInv(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsInv(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdinv)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdInv(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsinvcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vsInvCbrt(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdinvcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vdInvCbrt(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsinvcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsInvCbrt(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdinvcbrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdInvCbrt(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsinvsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vsInvSqrt(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdinvsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vdInvSqrt(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsinvsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsInvSqrt(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdinvsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdInvSqrt(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLGamma(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLGamma(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLGamma(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLGamma(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslinearfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLinearFrac(const MKL_INT n, const float * a, const float * b, const float c, const float d, const float e, const float f, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlinearfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLinearFrac(const MKL_INT n, const double * a, const double * b, const double c, const double d, const double e, const double f, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslinearfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLinearFrac(const MKL_INT n, const float * a, const float * b, const float c, const float d, const float e, const float f, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlinearfrac)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLinearFrac(const MKL_INT n, const double * a, const double * b, const double c, const double d, const double e, const double f, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsln)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLn(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdln)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLn(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcln)) match(construct={target variant dispatch}, device={arch(gen)})
void vcLn(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzln)) match(construct={target variant dispatch}, device={arch(gen)})
void vzLn(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsln)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLn(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdln)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLn(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcln)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcLn(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzln)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzLn(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLog10(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLog10(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vclog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vcLog10(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzlog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vzLog10(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLog10(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLog10(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmclog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcLog10(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzlog10)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzLog10(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslog1p)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLog1p(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlog1p)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLog1p(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslog1p)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLog1p(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlog1p)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLog1p(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslog2)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLog2(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlog2)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLog2(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslog2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLog2(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlog2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLog2(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vslogb)) match(construct={target variant dispatch}, device={arch(gen)})
void vsLogb(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdlogb)) match(construct={target variant dispatch}, device={arch(gen)})
void vdLogb(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmslogb)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsLogb(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdlogb)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdLogb(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsmaxmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vsMaxMag(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdmaxmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vdMaxMag(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsmaxmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsMaxMag(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdmaxmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdMaxMag(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsminmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vsMinMag(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdminmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vdMinMag(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsminmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsMinMag(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdminmag)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdMinMag(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsmodf)) match(construct={target variant dispatch}, device={arch(gen)})
void vsModf(const MKL_INT n, const float * a, float * y, float * z) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdmodf)) match(construct={target variant dispatch}, device={arch(gen)})
void vdModf(const MKL_INT n, const double * a, double * y, double * z) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsmodf)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsModf(const MKL_INT n, const float * a, float * y, float * z, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdmodf)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdModf(const MKL_INT n, const double * a, double * y, double * z, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vsMul(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vdMul(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vcMul(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vzMul(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsMul(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdMul(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcMul(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzmul)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzMul(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcmulbyconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vcMulByConj(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzmulbyconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vzMulByConj(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcmulbyconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcMulByConj(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzmulbyconj)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzMulByConj(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsnearbyint)) match(construct={target variant dispatch}, device={arch(gen)})
void vsNearbyInt(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdnearbyint)) match(construct={target variant dispatch}, device={arch(gen)})
void vdNearbyInt(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsnearbyint)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsNearbyInt(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdnearbyint)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdNearbyInt(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsnextafter)) match(construct={target variant dispatch}, device={arch(gen)})
void vsNextAfter(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdnextafter)) match(construct={target variant dispatch}, device={arch(gen)})
void vdNextAfter(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsnextafter)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsNextAfter(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdnextafter)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdNextAfter(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vspow)) match(construct={target variant dispatch}, device={arch(gen)})
void vsPow(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vdPow(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vcPow(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vzPow(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmspow)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsPow(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdPow(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcPow(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzpow)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzPow(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vspow2o3)) match(construct={target variant dispatch}, device={arch(gen)})
void vsPow2o3(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdpow2o3)) match(construct={target variant dispatch}, device={arch(gen)})
void vdPow2o3(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmspow2o3)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsPow2o3(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdpow2o3)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdPow2o3(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vspow3o2)) match(construct={target variant dispatch}, device={arch(gen)})
void vsPow3o2(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdpow3o2)) match(construct={target variant dispatch}, device={arch(gen)})
void vdPow3o2(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmspow3o2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsPow3o2(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdpow3o2)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdPow3o2(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vspowr)) match(construct={target variant dispatch}, device={arch(gen)})
void vsPowr(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdpowr)) match(construct={target variant dispatch}, device={arch(gen)})
void vdPowr(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmspowr)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsPowr(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdpowr)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdPowr(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vspowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vsPowx(const MKL_INT n, const float * a, const float b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vdPowx(const MKL_INT n, const double * a, const double b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vcPowx(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vzPowx(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmspowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsPowx(const MKL_INT n, const float * a, const float b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdPowx(const MKL_INT n, const double * a, const double b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcPowx(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzpowx)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzPowx(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsremainder)) match(construct={target variant dispatch}, device={arch(gen)})
void vsRemainder(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdremainder)) match(construct={target variant dispatch}, device={arch(gen)})
void vdRemainder(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsremainder)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsRemainder(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdremainder)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdRemainder(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsrint)) match(construct={target variant dispatch}, device={arch(gen)})
void vsRint(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdrint)) match(construct={target variant dispatch}, device={arch(gen)})
void vdRint(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsrint)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsRint(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdrint)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdRint(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vsround)) match(construct={target variant dispatch}, device={arch(gen)})
void vsRound(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdround)) match(construct={target variant dispatch}, device={arch(gen)})
void vdRound(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmsround)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsRound(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdround)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdRound(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssin)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSin(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSin(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vcSin(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vzSin(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSin(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSin(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcSin(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzsin)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzSin(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssincos)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSinCos(const MKL_INT n, const float * a, float * y, float * z) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsincos)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSinCos(const MKL_INT n, const double * a, double * y, double * z) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssincos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSinCos(const MKL_INT n, const float * a, float * y, float * z, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsincos)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSinCos(const MKL_INT n, const double * a, double * y, double * z, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssind)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSind(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsind)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSind(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssind)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSind(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsind)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSind(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSinh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSinh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcSinh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzSinh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSinh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSinh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcSinh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzsinh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzSinh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSinpi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSinpi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSinpi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsinpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSinpi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssqr)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSqr(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsqr)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSqr(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssqr)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSqr(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsqr)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSqr(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSqrt(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSqrt(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vcSqrt(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vzSqrt(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSqrt(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSqrt(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcSqrt(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzsqrt)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzSqrt(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vssub)) match(construct={target variant dispatch}, device={arch(gen)})
void vsSub(const MKL_INT n, const float * a, const float * b, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vdSub(const MKL_INT n, const double * a, const double * b, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vcsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vcSub(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vzsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vzSub(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmssub)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsSub(const MKL_INT n, const float * a, const float * b, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdSub(const MKL_INT n, const double * a, const double * b, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmcsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcSub(const MKL_INT n, const MKL_Complex8 * a, const MKL_Complex8 * b, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmzsub)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzSub(const MKL_INT n, const MKL_Complex16 * a, const MKL_Complex16 * b, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstan)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTan(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtan)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTan(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vctan)) match(construct={target variant dispatch}, device={arch(gen)})
void vcTan(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vztan)) match(construct={target variant dispatch}, device={arch(gen)})
void vzTan(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTan(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTan(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmctan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcTan(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmztan)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzTan(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstand)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTand(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtand)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTand(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstand)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTand(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtand)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTand(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTanh(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTanh(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vctanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vcTanh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vztanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vzTanh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTanh(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTanh(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmctanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmcTanh(const MKL_INT n, const MKL_Complex8 * a, MKL_Complex8 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmztanh)) match(construct={target variant dispatch}, device={arch(gen)})
void vmzTanh(const MKL_INT n, const MKL_Complex16 * a, MKL_Complex16 * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTanpi(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTanpi(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTanpi(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtanpi)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTanpi(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTGamma(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTGamma(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTGamma(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtgamma)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTGamma(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vstrunc)) match(construct={target variant dispatch}, device={arch(gen)})
void vsTrunc(const MKL_INT n, const float * a, float * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vdtrunc)) match(construct={target variant dispatch}, device={arch(gen)})
void vdTrunc(const MKL_INT n, const double * a, double * y) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmstrunc)) match(construct={target variant dispatch}, device={arch(gen)})
void vmsTrunc(const MKL_INT n, const float * a, float * y, MKL_INT64 mode) NOTHROW;

#pragma omp declare variant (MKL_VARIANT_NAME(vm, vmdtrunc)) match(construct={target variant dispatch}, device={arch(gen)})
void vmdTrunc(const MKL_INT n, const double * a, double * y, MKL_INT64 mode) NOTHROW;


#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* ifndef _MKL_VML_OMP_OFFLOAD_H_ */
