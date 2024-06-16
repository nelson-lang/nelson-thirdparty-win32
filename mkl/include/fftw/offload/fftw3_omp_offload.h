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
!      Intel(R) oneAPI Math Kernel Library (Intel(R) oneMKL)
!      FFTW3 interface for OpenMP target (offload)
!******************************************************************************/

#ifndef FFTW3_OMP_OFFLOAD_H_INCLUDED
#define FFTW3_OMP_OFFLOAD_H_INCLUDED

#include "../fftw3.h"
#include "mkl_dfti_omp_offload.h"
#if (_OPENMP >= 202011)
#include <omp.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    // Double precision offload function declarations
    extern fftw_plan fftw_plan_dft_1d_omp_offload(int n0, fftw_complex* in,
                                                  fftw_complex* out, int sign,
                                                  unsigned flags,
                                                  void* interop_obj);

    extern fftw_plan fftw_plan_dft_2d_omp_offload(int n0, int n1,
                                                  fftw_complex* in,
                                                  fftw_complex* out, int sign,
                                                  unsigned flags,
                                                  void* interop_obj);

    extern fftw_plan fftw_plan_dft_3d_omp_offload(int n0, int n1, int n2,
                                                  fftw_complex* in,
                                                  fftw_complex* out, int sign,
                                                  unsigned flags,
                                                  void* interop_obj);

    extern fftw_plan fftw_plan_dft_omp_offload(int rank, const int* n,
                                               fftw_complex* in,
                                               fftw_complex* out, int sign,
                                               unsigned flags,
                                               void* interop_obj);

    extern fftw_plan
    fftw_plan_many_dft_omp_offload(int rank, const int* n, int howmany,
                                   fftw_complex* in, const int* inembed,
                                   int istride, int idist, fftw_complex* out,
                                   const int* onembed, int ostride, int odist,
                                   int sign, unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_guru_dft_omp_offload(
        int rank, const fftw_iodim* dims, int howmany_rank,
        const fftw_iodim* howmany_dims, fftw_complex* in, fftw_complex* out,
        int sign, unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_guru64_dft_omp_offload(
        int rank, const fftw_iodim64* dims, int howmany_rank,
        const fftw_iodim64* howmany_dims, fftw_complex* in, fftw_complex* out,
        int sign, unsigned flags, void* interop_obj);

    // c2r
    extern fftw_plan fftw_plan_dft_c2r_1d_omp_offload(int n, fftw_complex* in,
                                                      double* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_c2r_2d_omp_offload(int nx, int ny,
                                                      fftw_complex* in,
                                                      double* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_c2r_3d_omp_offload(int nx, int ny, int nz,
                                                      fftw_complex* in,
                                                      double* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_c2r_omp_offload(int rank, const int* n,
                                                   fftw_complex* in,
                                                   double* out, unsigned flags,
                                                   void* interop_obj);

    extern fftw_plan fftw_plan_guru_dft_c2r_omp_offload(
        int rank, const fftw_iodim* dims, int howmany_rank,
        const fftw_iodim* howmany_dims, fftw_complex* in, double* out,
        unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_guru64_dft_c2r_omp_offload(
        int rank, const fftw_iodim64* dims, int howmany_rank,
        const fftw_iodim64* howmany_dims, fftw_complex* in, double* out,
        unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_many_dft_c2r_omp_offload(
        int rank, const int* n, int howmany, fftw_complex* in,
        const int* inembed, int istride, int idist, double* out,
        const int* onembed, int ostride, int odist, unsigned flags,
        void* interop_obj);

    // r2c
    extern fftw_plan fftw_plan_dft_r2c_1d_omp_offload(int n, double* in,
                                                      fftw_complex* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_r2c_2d_omp_offload(int nx, int ny,
                                                      double* in,
                                                      fftw_complex* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_r2c_3d_omp_offload(int nx, int ny, int nz,
                                                      double* in,
                                                      fftw_complex* out,
                                                      unsigned flags,
                                                      void* interop_obj);

    extern fftw_plan fftw_plan_dft_r2c_omp_offload(int rank, const int* n,
                                                   double* in,
                                                   fftw_complex* out,
                                                   unsigned flags,
                                                   void* interop_obj);

    extern fftw_plan fftw_plan_guru_dft_r2c_omp_offload(
        int rank, const fftw_iodim* dims, int howmany_rank,
        const fftw_iodim* howmany_dims, double* in, fftw_complex* out,
        unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_guru64_dft_r2c_omp_offload(
        int rank, const fftw_iodim64* dims, int howmany_rank,
        const fftw_iodim64* howmany_dims, double* in, fftw_complex* out,
        unsigned flags, void* interop_obj);

    extern fftw_plan fftw_plan_many_dft_r2c_omp_offload(
        int rank, const int* n, int howmany, double* in, const int* inembed,
        int istride, int idist, fftw_complex* out, const int* onembed,
        int ostride, int odist, unsigned flags, void* interop_obj);

    extern void fftw_execute_omp_offload(const fftw_plan plan,
                                         void* interop_obj);
    extern void fftw_execute_dft_omp_offload(const fftw_plan plan,
                                             fftw_complex* in,
                                             fftw_complex* out,
                                             void* interop_obj);
    extern void fftw_execute_dft_r2c_omp_offload(const fftw_plan plan,
                                                 double* in, fftw_complex* out,
                                                 void* interop_obj);
    extern void fftw_execute_dft_c2r_omp_offload(const fftw_plan plan,
                                                 fftw_complex* in, double* out,
                                                 void* interop_obj);

    // Single precision offload function declarations
    extern fftwf_plan fftwf_plan_dft_1d_omp_offload(int n0, fftwf_complex* in,
                                                    fftwf_complex* out,
                                                    int sign, unsigned flags,
                                                    void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_2d_omp_offload(int n0, int n1,
                                                    fftwf_complex* in,
                                                    fftwf_complex* out,
                                                    int sign, unsigned flags,
                                                    void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_3d_omp_offload(int n0, int n1, int n2,
                                                    fftwf_complex* in,
                                                    fftwf_complex* out,
                                                    int sign, unsigned flags,
                                                    void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_omp_offload(int rank, const int* n,
                                                 fftwf_complex* in,
                                                 fftwf_complex* out, int sign,
                                                 unsigned flags,
                                                 void* interop_obj);

    extern fftwf_plan fftwf_plan_many_dft_omp_offload(
        int rank, const int* n, int howmany, fftwf_complex* in,
        const int* inembed, int istride, int idist, fftwf_complex* out,
        const int* onembed, int ostride, int odist, int sign, unsigned flags,
        void* interop_obj);

    extern fftwf_plan fftwf_plan_guru_dft_omp_offload(
        int rank, const fftwf_iodim* dims, int howmany_rank,
        const fftwf_iodim* howmany_dims, fftwf_complex* in, fftwf_complex* out,
        int sign, unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_guru64_dft_omp_offload(
        int rank, const fftwf_iodim64* dims, int howmany_rank,
        const fftwf_iodim64* howmany_dims, fftwf_complex* in,
        fftwf_complex* out, int sign, unsigned flags, void* interop_obj);

    // c2r
    extern fftwf_plan
    fftwf_plan_dft_c2r_1d_omp_offload(int n, fftwf_complex* in, float* out,
                                      unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_c2r_2d_omp_offload(int nx, int ny,
                                                        fftwf_complex* in,
                                                        float* out,
                                                        unsigned flags,
                                                        void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_c2r_3d_omp_offload(int nx, int ny, int nz,
                                                        fftwf_complex* in,
                                                        float* out,
                                                        unsigned flags,
                                                        void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_c2r_omp_offload(int rank, const int* n,
                                                     fftwf_complex* in,
                                                     float* out, unsigned flags,
                                                     void* interop_obj);

    extern fftwf_plan fftwf_plan_guru_dft_c2r_omp_offload(
        int rank, const fftwf_iodim* dims, int howmany_rank,
        const fftwf_iodim* howmany_dims, fftwf_complex* in, float* out,
        unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_guru64_dft_c2r_omp_offload(
        int rank, const fftwf_iodim64* dims, int howmany_rank,
        const fftwf_iodim64* howmany_dims, fftwf_complex* in, float* out,
        unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_many_dft_c2r_omp_offload(
        int rank, const int* n, int howmany, fftwf_complex* in,
        const int* inembed, int istride, int idist, float* out,
        const int* onembed, int ostride, int odist, unsigned flags,
        void* interop_obj);

    // r2c
    extern fftwf_plan fftwf_plan_dft_r2c_1d_omp_offload(int n, float* in,
                                                        fftwf_complex* out,
                                                        unsigned flags,
                                                        void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_r2c_2d_omp_offload(int nx, int ny,
                                                        float* in,
                                                        fftwf_complex* out,
                                                        unsigned flags,
                                                        void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_r2c_3d_omp_offload(int nx, int ny, int nz,
                                                        float* in,
                                                        fftwf_complex* out,
                                                        unsigned flags,
                                                        void* interop_obj);

    extern fftwf_plan fftwf_plan_dft_r2c_omp_offload(int rank, const int* n,
                                                     float* in,
                                                     fftwf_complex* out,
                                                     unsigned flags,
                                                     void* interop_obj);

    extern fftwf_plan fftwf_plan_guru_dft_r2c_omp_offload(
        int rank, const fftwf_iodim* dims, int howmany_rank,
        const fftwf_iodim* howmany_dims, float* in, fftwf_complex* out,
        unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_guru64_dft_r2c_omp_offload(
        int rank, const fftwf_iodim64* dims, int howmany_rank,
        const fftwf_iodim64* howmany_dims, float* in, fftwf_complex* out,
        unsigned flags, void* interop_obj);

    extern fftwf_plan fftwf_plan_many_dft_r2c_omp_offload(
        int rank, const int* n, int howmany, float* in, const int* inembed,
        int istride, int idist, fftwf_complex* out, const int* onembed,
        int ostride, int odist, unsigned flags, void* interop_obj);

    extern void fftwf_execute_omp_offload(const fftwf_plan plan,
                                          void* interop_obj);
    extern void fftwf_execute_dft_omp_offload(const fftwf_plan plan,
                                              fftwf_complex* in,
                                              fftwf_complex* out,
                                              void* interop_obj);
    extern void fftwf_execute_dft_r2c_omp_offload(const fftwf_plan plan,
                                                  float* in, fftwf_complex* out,
                                                  void* interop_obj);
    extern void fftwf_execute_dft_c2r_omp_offload(const fftwf_plan plan,
                                                  fftwf_complex* in, float* out,
                                                  void* interop_obj);

// Double precision variant function declarations for the standard fftw routines
#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_1d_omp_offload)                      \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_1d_omp_offload)                      \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_1d(int n0, fftw_complex* in,
                                      fftw_complex* out, int sign,
                                      unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_2d_omp_offload)                      \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_2d_omp_offload)                      \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_2d(int n0, int n1, fftw_complex* in,
                                      fftw_complex* out, int sign,
                                      unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_3d_omp_offload)                      \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_3d_omp_offload)                      \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_3d(int n0, int n1, int n2, fftw_complex* in,
                                      fftw_complex* out, int sign,
                                      unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_omp_offload)                         \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_omp_offload)                         \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft(int rank, const int* n, fftw_complex* in,
                                   fftw_complex* out, int sign, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_many_dft_omp_offload)                    \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_many_dft_omp_offload)                    \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_many_dft(int rank, const int* n, int howmany,
                                        fftw_complex* in, const int* inembed,
                                        int istride, int idist,
                                        fftw_complex* out, const int* onembed,
                                        int ostride, int odist, int sign,
                                        unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_guru_dft_omp_offload)                    \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_guru_dft_omp_offload)                    \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_guru_dft(int rank, const fftw_iodim* dims,
                                        int howmany_rank,
                                        const fftw_iodim* howmany_dims,
                                        fftw_complex* in, fftw_complex* out,
                                        int sign, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_c2r_1d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
// c2r
#pragma omp declare variant(fftw_plan_dft_c2r_1d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_c2r_1d(int n, fftw_complex* in, double* out,
                                          unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_c2r_2d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_c2r_2d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_c2r_2d(int nx, int ny, fftw_complex* in,
                                          double* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_c2r_3d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_c2r_3d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_c2r_3d(int nx, int ny, int nz,
                                          fftw_complex* in, double* out,
                                          unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_c2r_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_c2r_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_c2r(int rank, const int* n, fftw_complex* in,
                                       double* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_guru_dft_c2r_omp_offload)                \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_guru_dft_c2r_omp_offload)                \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_guru_dft_c2r(int rank, const fftw_iodim* dims,
                                            int howmany_rank,
                                            const fftw_iodim* howmany_dims,
                                            fftw_complex* in, double* out,
                                            unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_many_dft_c2r_omp_offload)                \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_many_dft_c2r_omp_offload)                \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_many_dft_c2r(int rank, const int* n, int howmany,
                                            fftw_complex* in,
                                            const int* inembed, int istride,
                                            int idist, double* out,
                                            const int* onembed, int ostride,
                                            int odist, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_r2c_1d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
// r2c
#pragma omp declare variant(fftw_plan_dft_r2c_1d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_r2c_1d(int n, double* in, fftw_complex* out,
                                          unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_r2c_2d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_r2c_2d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_r2c_2d(int nx, int ny, double* in,
                                          fftw_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_r2c_3d_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_r2c_3d_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_r2c_3d(int nx, int ny, int nz, double* in,
                                          fftw_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_dft_r2c_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_dft_r2c_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_dft_r2c(int rank, const int* n, double* in,
                                       fftw_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_guru_dft_r2c_omp_offload)                \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_guru_dft_r2c_omp_offload)                \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_guru_dft_r2c(int rank, const fftw_iodim* dims,
                                            int howmany_rank,
                                            const fftw_iodim* howmany_dims,
                                            double* in, fftw_complex* out,
                                            unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_plan_many_dft_r2c_omp_offload)                \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_plan_many_dft_r2c_omp_offload)                \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftw_plan fftw_plan_many_dft_r2c(int rank, const int* n, int howmany,
                                            double* in, const int* inembed,
                                            int istride, int idist,
                                            fftw_complex* out,
                                            const int* onembed, int ostride,
                                            int odist, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_execute_omp_offload)                          \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_execute_omp_offload)                          \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftw_execute(const fftw_plan plan);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_execute_dft_omp_offload)                      \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_execute_dft_omp_offload)                      \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftw_execute_dft(const fftw_plan plan, fftw_complex* in,
                                 fftw_complex* out);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_execute_dft_r2c_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_execute_dft_r2c_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftw_execute_dft_r2c(const fftw_plan plan, double* in,
                                     fftw_complex* out);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftw_execute_dft_c2r_omp_offload)                  \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftw_execute_dft_c2r_omp_offload)                  \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftw_execute_dft_c2r(const fftw_plan plan, fftw_complex* in,
                                     double* out);

// Single precision variant function declaratnons for the standard fftwf
// routines
#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_1d_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_1d_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_1d(int n0, fftwf_complex* in,
                                        fftwf_complex* out, int sign,
                                        unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_2d_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_2d_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_2d(int n0, int n1, fftwf_complex* in,
                                        fftwf_complex* out, int sign,
                                        unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_3d_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_3d_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_3d(int n0, int n1, int n2,
                                        fftwf_complex* in, fftwf_complex* out,
                                        int sign, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_omp_offload)                        \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_omp_offload)                        \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft(int rank, const int* n, fftwf_complex* in,
                                     fftwf_complex* out, int sign,
                                     unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_many_dft_omp_offload)                   \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_many_dft_omp_offload)                   \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_many_dft(int rank, const int* n, int howmany,
                                          fftwf_complex* in, const int* inembed,
                                          int istride, int idist,
                                          fftwf_complex* out,
                                          const int* onembed, int ostride,
                                          int odist, int sign, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_guru_dft_omp_offload)                   \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_guru_dft_omp_offload)                   \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_guru_dft(int rank, const fftwf_iodim* dims,
                                          int howmany_rank,
                                          const fftwf_iodim* howmany_dims,
                                          fftwf_complex* in, fftwf_complex* out,
                                          int sign, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_c2r_1d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
// c2r
#pragma omp declare variant(fftwf_plan_dft_c2r_1d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_c2r_1d(int n, fftwf_complex* in,
                                            float* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_c2r_2d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_c2r_2d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_c2r_2d(int nx, int ny, fftwf_complex* in,
                                            float* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_c2r_3d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_c2r_3d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_c2r_3d(int nx, int ny, int nz,
                                            fftwf_complex* in, float* out,
                                            unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_c2r_omp_offload)                    \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_c2r_omp_offload)                    \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_c2r(int rank, const int* n,
                                         fftwf_complex* in, float* out,
                                         unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_guru_dft_c2r_omp_offload)               \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_guru_dft_c2r_omp_offload)               \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_guru_dft_c2r(int rank, const fftwf_iodim* dims,
                                              int howmany_rank,
                                              const fftwf_iodim* howmany_dims,
                                              fftwf_complex* in, float* out,
                                              unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_many_dft_c2r_omp_offload)               \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_many_dft_c2r_omp_offload)               \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_many_dft_c2r(int rank, const int* n,
                                              int howmany, fftwf_complex* in,
                                              const int* inembed, int istride,
                                              int idist, float* out,
                                              const int* onembed, int ostride,
                                              int odist, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_r2c_1d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
// r2c
#pragma omp declare variant(fftwf_plan_dft_r2c_1d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_r2c_1d(int n, float* in,
                                            fftwf_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_r2c_2d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_r2c_2d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_r2c_2d(int nx, int ny, float* in,
                                            fftwf_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_r2c_3d_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_r2c_3d_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_r2c_3d(int nx, int ny, int nz, float* in,
                                            fftwf_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_dft_r2c_omp_offload)                    \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_dft_r2c_omp_offload)                    \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_dft_r2c(int rank, const int* n, float* in,
                                         fftwf_complex* out, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_guru_dft_r2c_omp_offload)               \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_guru_dft_r2c_omp_offload)               \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_guru_dft_r2c(int rank, const fftwf_iodim* dims,
                                              int howmany_rank,
                                              const fftwf_iodim* howmany_dims,
                                              float* in, fftwf_complex* out,
                                              unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_plan_many_dft_r2c_omp_offload)               \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_plan_many_dft_r2c_omp_offload)               \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern fftwf_plan fftwf_plan_many_dft_r2c(int rank, const int* n,
                                              int howmany, float* in,
                                              const int* inembed, int istride,
                                              int idist, fftwf_complex* out,
                                              const int* onembed, int ostride,
                                              int odist, unsigned flags);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_execute_omp_offload)                         \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_execute_omp_offload)                         \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftwf_execute(const fftwf_plan plan);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_execute_dft_omp_offload)                     \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_execute_dft_omp_offload)                     \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftwf_execute_dft(const fftwf_plan plan, fftwf_complex* in,
                                  fftwf_complex* out);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_execute_dft_r2c_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_execute_dft_r2c_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftwf_execute_dft_r2c(const fftwf_plan plan, float* in,
                                      fftwf_complex* out);

#if (_OPENMP >= 202011)
#pragma omp declare variant(fftwf_execute_dft_c2r_omp_offload)                 \
    match(construct = {dispatch}, device = {arch(gen)})                        \
        adjust_args(need_device_ptr : in, out)                                 \
        append_args(interop(prefer_type("sycl","level_zero"),targetsync))
#endif
#pragma omp declare variant(fftwf_execute_dft_c2r_omp_offload)                 \
    match(construct = {target variant dispatch}, device = {arch(gen)})
    extern void fftwf_execute_dft_c2r(const fftwf_plan plan, fftwf_complex* in,
                                      float* out);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
