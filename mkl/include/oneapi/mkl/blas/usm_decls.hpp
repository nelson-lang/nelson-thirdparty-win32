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

// Level 3

#ifndef ONEMKL_INLINE_DECLARE
#define ONEMKL_INLINE_DECLARE static inline
#endif

#define ONEMKL_DECLARE_GEMM(Ta, Tb, Tc, Ts) \
DLL_EXPORT sycl::event gemm(sycl::queue &queue, transpose transa, transpose transb, \
                                std::int64_t m, std::int64_t n, std::int64_t k, \
                                value_or_pointer<Ts> alpha, const Ta *a, std::int64_t lda, \
                                const Tb *b, std::int64_t ldb, \
                                value_or_pointer<Ts> beta, Tc *c, std::int64_t ldc, \
                                compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemm(sycl::queue &queue, transpose transa, transpose transb, \
                                   std::int64_t m, std::int64_t n, std::int64_t k, \
                                   value_or_pointer<Ts> alpha, const Ta *a, std::int64_t lda, \
                                   const Tb *b, std::int64_t ldb, \
                                   value_or_pointer<Ts> beta, Tc *c, std::int64_t ldc, \
                                   const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemm(queue, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_GEMM(float, float, float, float)
ONEMKL_DECLARE_GEMM(double, double, double, double)
ONEMKL_DECLARE_GEMM(std::complex<float>, std::complex<float>, std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_GEMM(std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_GEMM(sycl::half, sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_GEMM(sycl::half, sycl::half, float, float)
ONEMKL_DECLARE_GEMM(bfloat16, bfloat16, bfloat16, float)
ONEMKL_DECLARE_GEMM(bfloat16, bfloat16, float, float)
ONEMKL_DECLARE_GEMM(std::int8_t, std::int8_t, std::int32_t, float)
ONEMKL_DECLARE_GEMM(std::int8_t, std::int8_t, float, float)

#undef ONEMKL_DECLARE_GEMM

#define ONEMKL_DECLARE_SYMM(T) \
DLL_EXPORT sycl::event symm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, std::int64_t ldc, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event symm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, \
              std::int64_t ldc, const std::vector<sycl::event> &dependencies = {}) \
{ \
    return symm(queue, left_right, upper_lower, m, n, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_SYMM(float)
ONEMKL_DECLARE_SYMM(double)
ONEMKL_DECLARE_SYMM(std::complex<float>)
ONEMKL_DECLARE_SYMM(std::complex<double>)

#undef ONEMKL_DECLARE_SYMM

#define ONEMKL_DECLARE_HEMM(T) \
DLL_EXPORT sycl::event hemm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, std::int64_t ldc, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event hemm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, \
              std::int64_t ldc, const std::vector<sycl::event> &dependencies = {}) \
{ \
    return hemm(queue, left_right, upper_lower, m, n, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_HEMM(std::complex<float>)
ONEMKL_DECLARE_HEMM(std::complex<double>)

#undef ONEMKL_DECLARE_HEMM

#define ONEMKL_DECLARE_SYRK(T) \
DLL_EXPORT sycl::event syrk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              value_or_pointer<T> beta, T *c, std::int64_t ldc, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event syrk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              value_or_pointer<T> beta, T *c, std::int64_t ldc, \
              const std::vector<sycl::event> &dependencies = {}) \
{ \
    return syrk(queue, upper_lower, trans, n, k, alpha, a, lda, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_SYRK(float)
ONEMKL_DECLARE_SYRK(double)
ONEMKL_DECLARE_SYRK(std::complex<float>)
ONEMKL_DECLARE_SYRK(std::complex<double>)

#undef ONEMKL_DECLARE_SYRK

#define ONEMKL_DECLARE_HERK(T, Treal) \
DLL_EXPORT sycl::event herk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              value_or_pointer<Treal> alpha, const T *a, std::int64_t lda, \
              value_or_pointer<Treal> beta, T *c, std::int64_t ldc, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event herk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              value_or_pointer<Treal> alpha, const T *a, std::int64_t lda, \
              value_or_pointer<Treal> beta, T *c, std::int64_t ldc, \
              const std::vector<sycl::event> &dependencies = {}) \
{ \
    return herk(queue, upper_lower, trans, n, k, alpha, a, lda, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_HERK(std::complex<float>, float)
ONEMKL_DECLARE_HERK(std::complex<double>, double)

#undef ONEMKL_DECLARE_HERK

#define ONEMKL_DECLARE_SYR2K(T) \
DLL_EXPORT sycl::event syr2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, \
               value_or_pointer<T> beta, T *c, std::int64_t ldc, \
               compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event syr2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, \
               value_or_pointer<T> beta, T *c, std::int64_t ldc, \
               const std::vector<sycl::event> &dependencies = {}) \
{ \
    return syr2k(queue, upper_lower, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_SYR2K(float)
ONEMKL_DECLARE_SYR2K(double)
ONEMKL_DECLARE_SYR2K(std::complex<float>)
ONEMKL_DECLARE_SYR2K(std::complex<double>)

#undef ONEMKL_DECLARE_SYR2K

#define ONEMKL_DECLARE_HER2K(T, Treal) \
DLL_EXPORT sycl::event her2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, \
               value_or_pointer<Treal> beta, T *c, std::int64_t ldc, \
               compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event her2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, \
               value_or_pointer<Treal> beta, T *c, std::int64_t ldc, \
               const std::vector<sycl::event> &dependencies = {}) \
{ \
    return her2k(queue, upper_lower, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_HER2K(std::complex<float>, float)
ONEMKL_DECLARE_HER2K(std::complex<double>, double)

#undef ONEMKL_DECLARE_HER2K

#define ONEMKL_DECLARE_TRMM(T) \
DLL_EXPORT sycl::event trmm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              T *b, std::int64_t ldb, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event trmm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              T *b, std::int64_t ldb, \
              const std::vector<sycl::event> &dependencies = {}) \
{ \
    return trmm(queue, left_right, upper_lower, trans, unit_diag, m, n, alpha, a, lda, b, ldb, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_TRMM(float)
ONEMKL_DECLARE_TRMM(double)
ONEMKL_DECLARE_TRMM(std::complex<float>)
ONEMKL_DECLARE_TRMM(std::complex<double>)

#undef ONEMKL_DECLARE_TRMM

#define ONEMKL_DECLARE_TRSM(T) \
DLL_EXPORT sycl::event trsm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              T *b, std::int64_t ldb, \
              compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event trsm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              T *b, std::int64_t ldb, \
              const std::vector<sycl::event> &dependencies = {}) \
{ \
    return trsm(queue, left_right, upper_lower, trans, unit_diag, m, n, alpha, a, lda, b, ldb, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_TRSM(float)
ONEMKL_DECLARE_TRSM(double)
ONEMKL_DECLARE_TRSM(std::complex<float>)
ONEMKL_DECLARE_TRSM(std::complex<double>)

#undef ONEMKL_DECLARE_TRSM

// Level 2

#define ONEMKL_DECLARE_DGMM(T) \
DLL_EXPORT sycl::event dgmm(sycl::queue &queue, side left_right, \
              std::int64_t m, std::int64_t n, \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, \
              T *c, std::int64_t ldc, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_DGMM(float)
ONEMKL_DECLARE_DGMM(double)
ONEMKL_DECLARE_DGMM(std::complex<float>)
ONEMKL_DECLARE_DGMM(std::complex<double>)

#undef ONEMKL_DECLARE_DGMM

#define ONEMKL_DECLARE_GEMV(T) \
DLL_EXPORT sycl::event gemv(sycl::queue &queue, transpose trans, std::int64_t m, std::int64_t n, \
              value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GEMV(float)
ONEMKL_DECLARE_GEMV(double)
ONEMKL_DECLARE_GEMV(std::complex<float>)
ONEMKL_DECLARE_GEMV(std::complex<double>)

#undef ONEMKL_DECLARE_GEMV

#define ONEMKL_DECLARE_GBMV(T) \
DLL_EXPORT sycl::event gbmv(sycl::queue &queue, transpose trans, std::int64_t m, std::int64_t n, \
              std::int64_t kl, std::int64_t ku, value_or_pointer<T> alpha,  \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GBMV(float)
ONEMKL_DECLARE_GBMV(double)
ONEMKL_DECLARE_GBMV(std::complex<float>)
ONEMKL_DECLARE_GBMV(std::complex<double>)

#undef ONEMKL_DECLARE_GBMV

#define ONEMKL_DECLARE_GER(T) \
DLL_EXPORT sycl::event ger(sycl::queue &queue, std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, \
             const T *x, std::int64_t incx, const T *y, std::int64_t incy, \
             T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GER(float)
ONEMKL_DECLARE_GER(double)

#undef ONEMKL_DECLARE_GER

#define ONEMKL_DECLARE_GERC(T) \
DLL_EXPORT sycl::event gerc(sycl::queue &queue, std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GERC(std::complex<float>)
ONEMKL_DECLARE_GERC(std::complex<double>)

#undef ONEMKL_DECLARE_GERC

#define ONEMKL_DECLARE_GERU(T) \
DLL_EXPORT sycl::event geru(sycl::queue &queue, std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GERU(std::complex<float>)
ONEMKL_DECLARE_GERU(std::complex<double>)

#undef ONEMKL_DECLARE_GERU

#define ONEMKL_DECLARE_HBMV(T) \
DLL_EXPORT sycl::event hbmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, \
              std::int64_t k, value_or_pointer<T> alpha,                    \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HBMV(std::complex<float>)
ONEMKL_DECLARE_HBMV(std::complex<double>)

#undef ONEMKL_DECLARE_HBMV

#define ONEMKL_DECLARE_HEMV(T) \
DLL_EXPORT sycl::event hemv(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HEMV(std::complex<float>)
ONEMKL_DECLARE_HEMV(std::complex<double>)

#undef ONEMKL_DECLARE_HEMV

#define ONEMKL_DECLARE_HER(T, Treal) \
DLL_EXPORT sycl::event her(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<Treal> alpha, \
              const T *x, std::int64_t incx, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HER(std::complex<float>, float)
ONEMKL_DECLARE_HER(std::complex<double>, double)

#undef ONEMKL_DECLARE_HER

#define ONEMKL_DECLARE_HER2(T) \
DLL_EXPORT sycl::event her2(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HER2(std::complex<float>)
ONEMKL_DECLARE_HER2(std::complex<double>)

#undef ONEMKL_DECLARE_HER2

#define ONEMKL_DECLARE_HPMV(T) \
DLL_EXPORT sycl::event hpmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *a, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HPMV(std::complex<float>)
ONEMKL_DECLARE_HPMV(std::complex<double>)

#undef ONEMKL_DECLARE_HPMV

#define ONEMKL_DECLARE_HPR(T, Treal) \
DLL_EXPORT sycl::event hpr(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<Treal> alpha, \
              const T *x, std::int64_t incx, \
              T *a, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HPR(std::complex<float>, float)
ONEMKL_DECLARE_HPR(std::complex<double>, double)

#undef ONEMKL_DECLARE_HPR

#define ONEMKL_DECLARE_HPR2(T) \
DLL_EXPORT sycl::event hpr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_HPR2(std::complex<float>)
ONEMKL_DECLARE_HPR2(std::complex<double>)

#undef ONEMKL_DECLARE_HPR2

#define ONEMKL_DECLARE_SBMV(T) \
DLL_EXPORT sycl::event sbmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, \
              std::int64_t k, value_or_pointer<T> alpha,                    \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SBMV(float)
ONEMKL_DECLARE_SBMV(double)

#undef ONEMKL_DECLARE_SBMV

#define ONEMKL_DECLARE_SYMV(T) \
DLL_EXPORT sycl::event symv(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *a, std::int64_t lda, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SYMV(float)
ONEMKL_DECLARE_SYMV(double)
ONEMKL_DECLARE_SYMV(std::complex<float>)
ONEMKL_DECLARE_SYMV(std::complex<double>)

#undef ONEMKL_DECLARE_SYMV

#define ONEMKL_DECLARE_SYR(T) \
DLL_EXPORT sycl::event syr(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SYR(float)
ONEMKL_DECLARE_SYR(double)
ONEMKL_DECLARE_SYR(std::complex<float>)
ONEMKL_DECLARE_SYR(std::complex<double>)

#undef ONEMKL_DECLARE_SYR

#define ONEMKL_DECLARE_SYR2(T) \
DLL_EXPORT sycl::event syr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, std::int64_t lda, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SYR2(float)
ONEMKL_DECLARE_SYR2(double)
ONEMKL_DECLARE_SYR2(std::complex<float>)
ONEMKL_DECLARE_SYR2(std::complex<double>)

#undef ONEMKL_DECLARE_SYR2

#define ONEMKL_DECLARE_SPMV(T) \
DLL_EXPORT sycl::event spmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *a, \
              const T *x, std::int64_t incx, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SPMV(float)
ONEMKL_DECLARE_SPMV(double)

#undef ONEMKL_DECLARE_SPMV

#define ONEMKL_DECLARE_SPR(T) \
DLL_EXPORT sycl::event spr(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              T *a, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SPR(float)
ONEMKL_DECLARE_SPR(double)

#undef ONEMKL_DECLARE_SPR

#define ONEMKL_DECLARE_SPR2(T) \
DLL_EXPORT sycl::event spr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, value_or_pointer<T> alpha, \
              const T *x, std::int64_t incx, \
              const T *y, std::int64_t incy, \
              T *a, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SPR2(float)
ONEMKL_DECLARE_SPR2(double)

#undef ONEMKL_DECLARE_SPR2

#define ONEMKL_DECLARE_TBMV(T) \
DLL_EXPORT sycl::event tbmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, std::int64_t k, \
              const T *a, std::int64_t lda, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TBMV(float)
ONEMKL_DECLARE_TBMV(double)
ONEMKL_DECLARE_TBMV(std::complex<float>)
ONEMKL_DECLARE_TBMV(std::complex<double>)

#undef ONEMKL_DECLARE_TBMV

#define ONEMKL_DECLARE_TBSV(T) \
DLL_EXPORT sycl::event tbsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, std::int64_t k, \
              const T *a, std::int64_t lda, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TBSV(float)
ONEMKL_DECLARE_TBSV(double)
ONEMKL_DECLARE_TBSV(std::complex<float>)
ONEMKL_DECLARE_TBSV(std::complex<double>)

#undef ONEMKL_DECLARE_TBSV

#define ONEMKL_DECLARE_TPMV(T) \
DLL_EXPORT sycl::event tpmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              const T *a, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TPMV(float)
ONEMKL_DECLARE_TPMV(double)
ONEMKL_DECLARE_TPMV(std::complex<float>)
ONEMKL_DECLARE_TPMV(std::complex<double>)

#undef ONEMKL_DECLARE_TPMV

#define ONEMKL_DECLARE_TPSV(T) \
DLL_EXPORT sycl::event tpsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              const T *a, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TPSV(float)
ONEMKL_DECLARE_TPSV(double)
ONEMKL_DECLARE_TPSV(std::complex<float>)
ONEMKL_DECLARE_TPSV(std::complex<double>)

#undef ONEMKL_DECLARE_TPSV

#define ONEMKL_DECLARE_TRMV(T) \
DLL_EXPORT sycl::event trmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              const T *a, std::int64_t lda, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TRMV(float)
ONEMKL_DECLARE_TRMV(double)
ONEMKL_DECLARE_TRMV(std::complex<float>)
ONEMKL_DECLARE_TRMV(std::complex<double>)

#undef ONEMKL_DECLARE_TRMV

#define ONEMKL_DECLARE_TRSV(T) \
DLL_EXPORT sycl::event trsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              const T *a, std::int64_t lda, \
              T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_TRSV(float)
ONEMKL_DECLARE_TRSV(double)
ONEMKL_DECLARE_TRSV(std::complex<float>)
ONEMKL_DECLARE_TRSV(std::complex<double>)

#undef ONEMKL_DECLARE_TRSV

// Level 1

#define ONEMKL_DECLARE_DOTC(T) \
DLL_EXPORT sycl::event dotc(sycl::queue &queue, std::int64_t n, const T *x, \
              std::int64_t incx, const T *y, std::int64_t incy, \
              T *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_DOTC(std::complex<float>)
ONEMKL_DECLARE_DOTC(std::complex<double>)

#undef ONEMKL_DECLARE_DOTC

#define ONEMKL_DECLARE_DOTU(T) \
DLL_EXPORT sycl::event dotu(sycl::queue &queue, std::int64_t n, const T *x, \
              std::int64_t incx, const T *y, std::int64_t incy, \
              T *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_DOTU(std::complex<float>)
ONEMKL_DECLARE_DOTU(std::complex<double>)

#undef ONEMKL_DECLARE_DOTU

#define ONEMKL_DECLARE_IAMAX(Tf, Ti) \
DLL_EXPORT sycl::event iamax(sycl::queue &queue, std::int64_t n, const Tf *x, std::int64_t incx, \
                             Ti *result, index_base base, \
                             const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event iamax(sycl::queue &queue, std::int64_t n, const Tf *x, \
                                        std::int64_t incx, Ti *result, \
                                        const std::vector<sycl::event> &dependencies = {}) \
{ \
    return iamax(queue, n, x, incx, result, index_base::zero, dependencies); \
}

ONEMKL_DECLARE_IAMAX(float, std::int64_t)
ONEMKL_DECLARE_IAMAX(float, std::int32_t)
ONEMKL_DECLARE_IAMAX(double, std::int64_t)
ONEMKL_DECLARE_IAMAX(double, std::int32_t)
ONEMKL_DECLARE_IAMAX(std::complex<float>, std::int64_t)
ONEMKL_DECLARE_IAMAX(std::complex<float>, std::int32_t)
ONEMKL_DECLARE_IAMAX(std::complex<double>, std::int64_t)
ONEMKL_DECLARE_IAMAX(std::complex<double>, std::int32_t)

#undef ONEMKL_DECLARE_IAMAX

#define ONEMKL_DECLARE_IAMIN(Tf, Ti) \
DLL_EXPORT sycl::event iamin(sycl::queue &queue, std::int64_t n, const Tf *x, std::int64_t incx, \
                             Ti *result, index_base base, \
                             const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event iamin(sycl::queue &queue, std::int64_t n, const Tf *x, \
                                        std::int64_t incx, Ti *result, \
                                        const std::vector<sycl::event> &dependencies = {}) \
{ \
    return iamin(queue, n, x, incx, result, index_base::zero, dependencies); \
}

ONEMKL_DECLARE_IAMIN(float, std::int64_t)
ONEMKL_DECLARE_IAMIN(float, std::int32_t)
ONEMKL_DECLARE_IAMIN(double, std::int64_t)
ONEMKL_DECLARE_IAMIN(double, std::int32_t)
ONEMKL_DECLARE_IAMIN(std::complex<float>, std::int64_t)
ONEMKL_DECLARE_IAMIN(std::complex<float>, std::int32_t)
ONEMKL_DECLARE_IAMIN(std::complex<double>, std::int64_t)
ONEMKL_DECLARE_IAMIN(std::complex<double>, std::int32_t)

#undef ONEMKL_DECLARE_IAMIN

#define ONEMKL_DECLARE_ASUM(T, Tres) \
DLL_EXPORT sycl::event asum(sycl::queue &queue, std::int64_t n, const T *x, std::int64_t incx, Tres *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ASUM(float, float)
ONEMKL_DECLARE_ASUM(double, double)
ONEMKL_DECLARE_ASUM(std::complex<float>, float)
ONEMKL_DECLARE_ASUM(std::complex<double>, double)

#undef ONEMKL_DECLARE_ASUM

#define ONEMKL_DECLARE_AXPY(T) \
DLL_EXPORT sycl::event axpy(sycl::queue &queue, std::int64_t n, value_or_pointer<T> alpha, const T *x, std::int64_t incx, T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_AXPY(sycl::half)
ONEMKL_DECLARE_AXPY(bfloat16)
ONEMKL_DECLARE_AXPY(float)
ONEMKL_DECLARE_AXPY(double)
ONEMKL_DECLARE_AXPY(std::complex<float>)
ONEMKL_DECLARE_AXPY(std::complex<double>)

#undef ONEMKL_DECLARE_AXPY

#define ONEMKL_DECLARE_AXPBY(T) \
DLL_EXPORT sycl::event axpby(sycl::queue &queue, std::int64_t n, value_or_pointer<T> alpha, const T *x, std::int64_t incx, value_or_pointer<T> beta, T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_AXPBY(float)
ONEMKL_DECLARE_AXPBY(double)
ONEMKL_DECLARE_AXPBY(std::complex<float>)
ONEMKL_DECLARE_AXPBY(std::complex<double>)

#undef ONEMKL_DECLARE_AXPBY

#define ONEMKL_DECLARE_COPY(T) \
DLL_EXPORT sycl::event copy(sycl::queue &queue, std::int64_t n, const T *x, std::int64_t incx, T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_COPY(float)
ONEMKL_DECLARE_COPY(double)
ONEMKL_DECLARE_COPY(std::complex<float>)
ONEMKL_DECLARE_COPY(std::complex<double>)

#undef ONEMKL_DECLARE_COPY

#define ONEMKL_DECLARE_DOT(T, Tres) \
DLL_EXPORT sycl::event dot(sycl::queue &queue, std::int64_t n, const T *x, std::int64_t incx, const T *y, std::int64_t incy, Tres *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_DOT(sycl::half, sycl::half)
ONEMKL_DECLARE_DOT(bfloat16, bfloat16)
ONEMKL_DECLARE_DOT(float, float)
ONEMKL_DECLARE_DOT(double, double)
ONEMKL_DECLARE_DOT(float, double)

#undef ONEMKL_DECLARE_DOT

#define ONEMKL_DECLARE_SDSDOT(T) \
DLL_EXPORT sycl::event sdsdot(sycl::queue &queue, std::int64_t n, T sb, const T *x, std::int64_t incx, const T *y, std::int64_t incy, T *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SDSDOT(float)

#undef ONEMKL_DECLARE_SDSDOT

#define ONEMKL_DECLARE_NRM2(T, Tres) \
DLL_EXPORT sycl::event nrm2(sycl::queue &queue, std::int64_t n, const T *x, std::int64_t incx, Tres *result, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_NRM2(sycl::half, sycl::half)
ONEMKL_DECLARE_NRM2(bfloat16, bfloat16)
ONEMKL_DECLARE_NRM2(float, float)
ONEMKL_DECLARE_NRM2(double, double)
ONEMKL_DECLARE_NRM2(std::complex<float>, float)
ONEMKL_DECLARE_NRM2(std::complex<double>, double)

#undef ONEMKL_DECLARE_NRM2

#define ONEMKL_DECLARE_ROT(T, Tc, Ts) \
DLL_EXPORT sycl::event rot(sycl::queue &queue, std::int64_t n, T *x, std::int64_t incx, T *y, std::int64_t incy, value_or_pointer<Tc> c, value_or_pointer<Ts> s, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ROT(sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_ROT(bfloat16, bfloat16, bfloat16)
ONEMKL_DECLARE_ROT(float, float, float)
ONEMKL_DECLARE_ROT(double, double, double)
ONEMKL_DECLARE_ROT(std::complex<float>, float, float)
ONEMKL_DECLARE_ROT(std::complex<float>, float, std::complex<float>)
ONEMKL_DECLARE_ROT(std::complex<double>, double, double)
ONEMKL_DECLARE_ROT(std::complex<double>, double, std::complex<double>)

#undef ONEMKL_DECLARE_ROT

#define ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS(T, Tc, Ts) \
DLL_EXPORT sycl::event rot(sycl::queue &queue, std::int64_t n, T *x, std::int64_t incx, T *y, std::int64_t incy, value_or_pointer<Tc> c, Ts s, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS(std::complex<float>, float, float)
ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS(std::complex<float>, float, std::complex<float>)
ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS(std::complex<double>, double, double)
ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS(std::complex<double>, double, std::complex<double>)

#undef ONEMKL_DECLARE_ROT_EXPLICIT_SCALARS

#define ONEMKL_DECLARE_ROTG(T, Tc) \
DLL_EXPORT sycl::event rotg(sycl::queue &queue, T *a, T *b, Tc *c, T *s, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ROTG(float, float)
ONEMKL_DECLARE_ROTG(double, double)
ONEMKL_DECLARE_ROTG(std::complex<float>, float)
ONEMKL_DECLARE_ROTG(std::complex<double>, double)

#undef ONEMKL_DECLARE_ROTG

#define ONEMKL_DECLARE_ROTM(T) \
DLL_EXPORT sycl::event rotm(sycl::queue &queue, std::int64_t n, T *x, std::int64_t incx, T *y, std::int64_t incy, const T *param, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ROTM(float)
ONEMKL_DECLARE_ROTM(double)

#undef ONEMKL_DECLARE_ROTM

#define ONEMKL_DECLARE_ROTMG(T) \
DLL_EXPORT sycl::event rotmg(sycl::queue &queue, T *d1, T *d2, T *x1, value_or_pointer<T> y1, T *param, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_ROTMG(float)
ONEMKL_DECLARE_ROTMG(double)

#undef ONEMKL_DECLARE_ROTMG

#define ONEMKL_DECLARE_SCAL(T, Ts) \
DLL_EXPORT sycl::event scal(sycl::queue &queue, std::int64_t n, value_or_pointer<Ts> alpha, T *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SCAL(sycl::half, sycl::half)
ONEMKL_DECLARE_SCAL(bfloat16, bfloat16)
ONEMKL_DECLARE_SCAL(float, float)
ONEMKL_DECLARE_SCAL(double, double)
ONEMKL_DECLARE_SCAL(std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_SCAL(std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_SCAL(std::complex<float>, float)
ONEMKL_DECLARE_SCAL(std::complex<double>, double)
DLL_EXPORT sycl::event scal(sycl::queue &queue, std::int64_t n, float alpha, std::complex<float> *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});
DLL_EXPORT sycl::event scal(sycl::queue &queue, std::int64_t n, double alpha, std::complex<double> *x, std::int64_t incx, const std::vector<sycl::event> &dependencies = {});

#undef ONEMKL_DECLARE_SCAL

#define ONEMKL_DECLARE_SWAP(T) \
DLL_EXPORT sycl::event swap(sycl::queue &queue, std::int64_t n, T *x, std::int64_t incx, T *y, std::int64_t incy, const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_SWAP(float)
ONEMKL_DECLARE_SWAP(double)
ONEMKL_DECLARE_SWAP(std::complex<float>)
ONEMKL_DECLARE_SWAP(std::complex<double>)

#undef ONEMKL_DECLARE_SWAP

// Batch API

#define ONEMKL_DECLARE_GEMM_BATCH(Ta, Tb, Tc, Ts) \
    ONEMKL_DECLARE_GEMM_BATCH_STRIDED(Ta, Tb, Tc, Ts) \
    ONEMKL_DECLARE_GEMM_BATCH_GROUP(Ta, Tb, Tc, Ts, std::int64_t)  \
    ONEMKL_DECLARE_GEMM_BATCH_GROUP(Ta, Tb, Tc, Ts, std::int32_t)  \
    ONEMKL_DECLARE_GEMM_BATCH_SPAN(Ta, Tb, Tc, Ts)

#define ONEMKL_DECLARE_GEMM_BATCH_STRIDED(Ta, Tb, Tc, Ts) \
DLL_EXPORT sycl::event gemm_batch(sycl::queue &queue, transpose transa, transpose transb, \
                           std::int64_t m, std::int64_t n, std::int64_t k, value_or_pointer<Ts> alpha, \
                           const Ta *a, std::int64_t lda, std::int64_t stride_a, \
                           const Tb *b, std::int64_t ldb, std::int64_t stride_b, \
                           value_or_pointer<Ts> beta, Tc *c, std::int64_t ldc, \
                           std::int64_t stride_c, std::int64_t batch_size, \
                           compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemm_batch(sycl::queue &queue, transpose transa, transpose transb, \
                           std::int64_t m, std::int64_t n, std::int64_t k, value_or_pointer<Ts> alpha, \
                           const Ta *a, std::int64_t lda, std::int64_t stride_a, \
                           const Tb *b, std::int64_t ldb, std::int64_t stride_b, \
                           value_or_pointer<Ts> beta, Tc *c, std::int64_t ldc, \
                           std::int64_t stride_c, std::int64_t batch_size, \
                           const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemm_batch(queue, transa, transb, m, n, k, alpha, a, lda, stride_a, b, ldb, stride_b, beta, c, ldc, stride_c, batch_size, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

#define ONEMKL_DECLARE_GEMM_BATCH_GROUP(Ta, Tb, Tc, Ts, Ti) \
DLL_EXPORT sycl::event gemm_batch(sycl::queue &queue, const transpose *transa, const transpose *transb, \
                           const Ti *m, const Ti *n, const Ti *k, const Ts *alpha, \
                           const Ta **a, const Ti *lda, \
                           const Tb **b, const Ti *ldb, \
                           const Ts *beta, Tc **c, const Ti *ldc, \
                           std::int64_t group_count, const Ti *groupsize, \
                           compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemm_batch(sycl::queue &queue, const transpose *transa, const transpose *transb, \
                           const Ti *m, const Ti *n, const Ti *k, const Ts *alpha, \
                           const Ta **a, const Ti *lda, \
                           const Tb **b, const Ti *ldb, \
                           const Ts *beta, Tc **c, const Ti *ldc, \
                           std::int64_t group_count, const Ti *groupsize, \
                           const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemm_batch(queue, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc, group_count, groupsize, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

#define ONEMKL_DECLARE_GEMM_BATCH_SPAN(Ta, Tb, Tc, Ts) \
DLL_EXPORT sycl::event gemm_batch(sycl::queue &queue, \
                                      const sycl::span<transpose> &transa, const sycl::span<transpose> &transb, \
                                      const sycl::span<std::int64_t> &m, const sycl::span<std::int64_t> &n, \
                                      const sycl::span<std::int64_t> &k, \
                                      const sycl::span<Ts> &alpha, \
                                      const sycl::span<const Ta*> &a, const sycl::span<std::int64_t> &lda, \
                                      const sycl::span<const Tb*> &b, const sycl::span<std::int64_t> &ldb, \
                                      const sycl::span<Ts> &beta, \
                                      const sycl::span<Tc*> &c, const sycl::span<std::int64_t> &ldc, \
                                      size_t group_count, const sycl::span<size_t> &groupsize, \
                                      compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemm_batch(sycl::queue &queue, \
                                      const sycl::span<transpose> &transa, const sycl::span<transpose> &transb, \
                                      const sycl::span<std::int64_t> &m, const sycl::span<std::int64_t> &n, \
                                      const sycl::span<std::int64_t> &k, \
                                      const sycl::span<Ts> &alpha, \
                                      const sycl::span<const Ta*> &a, const sycl::span<std::int64_t> &lda, \
                                      const sycl::span<const Tb*> &b, const sycl::span<std::int64_t> &ldb, \
                                      const sycl::span<Ts> &beta, \
                                      const sycl::span<Tc*> &c, const sycl::span<std::int64_t> &ldc, \
                                      size_t group_count, const sycl::span<size_t> &groupsize, \
                                      const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemm_batch(queue, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc, group_count, groupsize, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_GEMM_BATCH(float, float, float, float)
ONEMKL_DECLARE_GEMM_BATCH(double, double, double, double)
ONEMKL_DECLARE_GEMM_BATCH(std::complex<float>, std::complex<float>, std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_GEMM_BATCH(std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_GEMM_BATCH(sycl::half, sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_GEMM_BATCH(sycl::half, sycl::half, float, float)
ONEMKL_DECLARE_GEMM_BATCH(bfloat16, bfloat16, bfloat16, float)
ONEMKL_DECLARE_GEMM_BATCH(bfloat16, bfloat16, float, float)
ONEMKL_DECLARE_GEMM_BATCH(std::int8_t, std::int8_t, std::int32_t, float)
ONEMKL_DECLARE_GEMM_BATCH(std::int8_t, std::int8_t, float, float)

#undef ONEMKL_DECLARE_GEMM_BATCH


#define ONEMKL_DECLARE_SYRK_BATCH(T) \
    ONEMKL_DECLARE_SYRK_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_SYRK_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_SYRK_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_SYRK_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event syrk_batch(sycl::queue &queue, \
                                      uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
                                      value_or_pointer<T> alpha, const T *a, std::int64_t lda, std::int64_t stride_a, \
                                      value_or_pointer<T> beta, T *c, std::int64_t ldc, std::int64_t stride_c, \
                                      std::int64_t batch_size, \
                                      compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event syrk_batch(sycl::queue &queue, \
                                      uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
                                      value_or_pointer<T> alpha, const T *a, std::int64_t lda, std::int64_t stride_a, \
                                      value_or_pointer<T> beta, T *c, std::int64_t ldc, std::int64_t stride_c, \
                                      std::int64_t batch_size, const std::vector<sycl::event> &dependencies = {}) \
{ \
    return syrk_batch(queue, upper_lower, trans, n, k, alpha, a, lda, stride_a, beta, c, ldc, stride_c, batch_size, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

#define ONEMKL_DECLARE_SYRK_BATCH_GROUP(T, Ti) \
DLL_EXPORT sycl::event syrk_batch(sycl::queue &queue, \
                                  const uplo *upper_lower, const transpose *trans, const Ti *n, const Ti *k, \
                                  const T *alpha, const T **a, const Ti *lda, const T *beta, \
                                  T **c, const Ti *ldc, \
                                  std::int64_t group_count, const Ti *groupsize, \
                                  compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event syrk_batch(sycl::queue &queue, \
                                      const uplo *upper_lower, const transpose *trans, const Ti *n, const Ti *k, \
                                      const T *alpha, const T **a, const Ti *lda, const T *beta, \
                                      T **c, const Ti *ldc, \
                                      std::int64_t group_count, const Ti *groupsize, \
                                      const std::vector<sycl::event> &dependencies = {}) \
{ \
    return syrk_batch(queue, upper_lower, trans, n, k, alpha, a, lda, beta, c, ldc, group_count, groupsize, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_SYRK_BATCH(float)
ONEMKL_DECLARE_SYRK_BATCH(double)
ONEMKL_DECLARE_SYRK_BATCH(std::complex<float>)
ONEMKL_DECLARE_SYRK_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_SYRK_BATCH

#define ONEMKL_DECLARE_TRSM_BATCH(T) \
    ONEMKL_DECLARE_TRSM_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_TRSM_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_TRSM_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_TRSM_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event trsm_batch(sycl::queue &queue, side left_right, uplo upper_lower, \
                           transpose trans, diag unit_diag, \
                           std::int64_t m, std::int64_t n, \
                           value_or_pointer<T> alpha, const T *a, \
                           std::int64_t lda, std::int64_t stride_a, \
                           T *b, std::int64_t ldb, std::int64_t stride_b, \
                           std::int64_t batch_size, \
                           compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event trsm_batch(sycl::queue &queue, side left_right, uplo upper_lower, \
                           transpose trans, diag unit_diag, \
                           std::int64_t m, std::int64_t n, \
                           value_or_pointer<T> alpha, const T *a, \
                           std::int64_t lda, std::int64_t stride_a, \
                           T *b, std::int64_t ldb, std::int64_t stride_b, \
                           std::int64_t batch_size, \
                           const std::vector<sycl::event> &dependencies = {}) \
{ \
    return trsm_batch(queue, left_right, upper_lower, trans, unit_diag, m, n, alpha, a, lda, stride_a, b, ldb, stride_b, batch_size, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

#define ONEMKL_DECLARE_TRSM_BATCH_GROUP(T, Ti) \
DLL_EXPORT sycl::event trsm_batch(sycl::queue &queue, const side *left_right, const uplo *upper_lower, \
                           const transpose *trans, const diag *unit_diag, \
                           const Ti *m, const Ti *n, \
                           const T *alpha, const T **a, const Ti *lda, \
                           T **b, const Ti *ldb, \
                           std::int64_t group_count, const Ti *group_size, \
                           compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event trsm_batch(sycl::queue &queue, const side *left_right, const uplo *upper_lower, \
                           const transpose *trans, const diag *unit_diag, \
                           const Ti *m, const Ti *n, \
                           const T *alpha, const T **a, const Ti *lda, \
                           T **b, const Ti *ldb, \
                           std::int64_t group_count, const Ti *group_size, \
                           const std::vector<sycl::event> &dependencies = {}) \
{ \
    return trsm_batch(queue, left_right, upper_lower, trans, unit_diag, m, n, alpha, a, lda, b, ldb, group_count, group_size, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_TRSM_BATCH(float)
ONEMKL_DECLARE_TRSM_BATCH(double)
ONEMKL_DECLARE_TRSM_BATCH(std::complex<float>)
ONEMKL_DECLARE_TRSM_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_TRSM_BATCH

#define ONEMKL_DECLARE_DGMM_BATCH(T) \
    ONEMKL_DECLARE_DGMM_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_DGMM_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_DGMM_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_DGMM_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event dgmm_batch(sycl::queue &queue, side left_right, \
              std::int64_t m, std::int64_t n, \
              const T *a, std::int64_t lda, std::int64_t stridea, \
              const T *x, std::int64_t incx, std::int64_t stridex, \
              T *c, std::int64_t ldc, std::int64_t stridec, std::int64_t batch_size, \
              const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_DGMM_BATCH_GROUP(Tf, Ti) \
DLL_EXPORT sycl::event dgmm_batch(sycl::queue &queue, const side *left_right, \
              const Ti *m, const Ti *n, \
              const Tf **a, const Ti *lda, \
              const Tf **x, const Ti *incx, \
              Tf **c, const Ti *ldc, \
              std::int64_t group_count, const Ti *group_size, \
              const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_DGMM_BATCH(float)
ONEMKL_DECLARE_DGMM_BATCH(double)
ONEMKL_DECLARE_DGMM_BATCH(std::complex<float>)
ONEMKL_DECLARE_DGMM_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_DGMM_BATCH_STRIDED
#undef ONEMKL_DECLARE_DGMM_BATCH_GROUP
#undef ONEMKL_DECLARE_DGMM_BATCH

#define ONEMKL_DECLARE_GEMV_BATCH(T) \
    ONEMKL_DECLARE_GEMV_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_GEMV_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_GEMV_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_GEMV_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event gemv_batch(sycl::queue &queue, transpose trans, \
              std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, \
              const T *a, std::int64_t lda, std::int64_t stridea, \
              const T *x, std::int64_t incx, std::int64_t stridex, value_or_pointer<T> beta, \
              T *y, std::int64_t incy, std::int64_t stridey, std::int64_t batch_size, \
              const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_GEMV_BATCH_GROUP(Tf, Ti) \
DLL_EXPORT sycl::event gemv_batch(sycl::queue &queue, const transpose *trans, \
              const Ti *m, const Ti *n, const Tf *alpha, \
              const Tf **a, const Ti *lda, \
              const Tf **x, const Ti *incx, const Tf *beta, \
              Tf **y, const Ti *incy, \
              std::int64_t group_count, const Ti *group_size, \
              const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_GEMV_BATCH(float)
ONEMKL_DECLARE_GEMV_BATCH(double)
ONEMKL_DECLARE_GEMV_BATCH(std::complex<float>)
ONEMKL_DECLARE_GEMV_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_GEMV_BATCH_STRIDED
#undef ONEMKL_DECLARE_GEMV_BATCH_GROUP
#undef ONEMKL_DECLARE_GEMV_BATCH

#define ONEMKL_DECLARE_AXPY_BATCH(T)                 \
    ONEMKL_DECLARE_AXPY_BATCH_STRIDED(T)             \
    ONEMKL_DECLARE_AXPY_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_AXPY_BATCH_GROUP(T, std::int32_t) \

#define ONEMKL_DECLARE_AXPY_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event axpy_batch(sycl::queue &queue, std::int64_t n, value_or_pointer<T> alpha, \
                           const T *x, std::int64_t incx, std::int64_t stridex, \
                           T *y, std::int64_t incy, std::int64_t stridey, std::int64_t batch_size, \
                           const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_AXPY_BATCH_GROUP(Tf, Ti) \
DLL_EXPORT sycl::event axpy_batch(sycl::queue &queue, const Ti *n, const Tf *alpha, const Tf **x, \
                           const Ti *incx, Tf **y, const Ti *incy, std::int64_t group_count, \
                           const Ti *group_size, \
                           const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_AXPY_BATCH(float)
ONEMKL_DECLARE_AXPY_BATCH(double)
ONEMKL_DECLARE_AXPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_AXPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_AXPY_BATCH_STRIDED
#undef ONEMKL_DECLARE_AXPY_BATCH_GROUP
#undef ONEMKL_DECLARE_AXPY_BATCH

#define ONEMKL_DECLARE_COPY_BATCH(T) \
    ONEMKL_DECLARE_COPY_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_COPY_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_COPY_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_COPY_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event copy_batch(sycl::queue &queue, std::int64_t n, \
                                      const T *x, std::int64_t incx, std::int64_t stridex, \
                                      T *y, std::int64_t incy, std::int64_t stridey, \
                                      std::int64_t batch_size, \
                                      const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_COPY_BATCH_GROUP(Tf, Ti) \
DLL_EXPORT sycl::event copy_batch(sycl::queue &queue, const Ti *n, \
                                  const Tf **x, const Ti *incx, Tf **y, const Ti *incy, \
                                  std::int64_t group_count, const Ti *group_size, \
                                  const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_COPY_BATCH(float)
ONEMKL_DECLARE_COPY_BATCH(double)
ONEMKL_DECLARE_COPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_COPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_COPY_BATCH_STRIDED
#undef ONEMKL_DECLARE_COPY_BATCH_GROUP
#undef ONEMKL_DECLARE_COPY_BATCH

// BLAS like

#define ONEMKL_DECLARE_GEMMT(T) \
DLL_EXPORT sycl::event gemmt(sycl::queue &queue, uplo upper_lower, transpose transa, transpose transb, std::int64_t n, \
               std::int64_t k, value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, \
               std::int64_t ldc, compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemmt(sycl::queue &queue, uplo upper_lower, transpose transa, transpose transb, std::int64_t n, \
               std::int64_t k, value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
               const T *b, std::int64_t ldb, value_or_pointer<T> beta, T *c, \
               std::int64_t ldc, const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemmt(queue, upper_lower, transa, transb, n, k, alpha, a, lda, b, ldb, beta, c, ldc, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_GEMMT(float)
ONEMKL_DECLARE_GEMMT(double)
ONEMKL_DECLARE_GEMMT(std::complex<float>)
ONEMKL_DECLARE_GEMMT(std::complex<double>)

#undef ONEMKL_DECLARE_GEMMT

#define ONEMKL_DECLARE_GEMM_BIAS(Ta, Tb) \
DLL_EXPORT sycl::event gemm_bias(sycl::queue &queue, transpose transa, transpose transb, \
                         offset offsetc, std::int64_t m, std::int64_t n, std::int64_t k, value_or_pointer<float> alpha, \
                         const Ta *a, std::int64_t lda, Ta ao, \
                         const Tb *b, std::int64_t ldb, Tb bo, \
                         value_or_pointer<float> beta, std::int32_t *c, std::int64_t ldc, const std::int32_t *co, \
                         compute_mode mode, const std::vector<sycl::event> &dependencies = {}); \
ONEMKL_INLINE_DECLARE sycl::event gemm_bias(sycl::queue &queue, transpose transa, transpose transb, \
                         offset offsetc, std::int64_t m, std::int64_t n, std::int64_t k, value_or_pointer<float> alpha, \
                         const Ta *a, std::int64_t lda, Ta ao, \
                         const Tb *b, std::int64_t ldb, Tb bo, \
                         value_or_pointer<float> beta, std::int32_t *c, std::int64_t ldc, const std::int32_t *co, \
                         const std::vector<sycl::event> &dependencies = {}) \
{ \
    return gemm_bias(queue, transa, transb, offsetc, m, n, k, alpha, a, lda, ao, b, ldb, bo, beta, c, ldc, co, MKL_BLAS_COMPUTE_MODE, dependencies); \
}

ONEMKL_DECLARE_GEMM_BIAS(std::int8_t, std::int8_t)
ONEMKL_DECLARE_GEMM_BIAS(std::int8_t, std::uint8_t)
ONEMKL_DECLARE_GEMM_BIAS(std::uint8_t, std::int8_t)
ONEMKL_DECLARE_GEMM_BIAS(std::uint8_t, std::uint8_t)

#undef ONEMKL_DECLARE_GEMM_BIAS

#define ONEMKL_DECLARE_IMATCOPY(T) \
DLL_EXPORT sycl::event imatcopy(sycl::queue &queue, transpose trans, \
                                std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, T *ab, \
                                std::int64_t lda, std::int64_t ldb, \
                                const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_IMATCOPY(float)
ONEMKL_DECLARE_IMATCOPY(double)
ONEMKL_DECLARE_IMATCOPY(std::complex<float>)
ONEMKL_DECLARE_IMATCOPY(std::complex<double>)

#undef ONEMKL_DECLARE_IMATCOPY

#define ONEMKL_DECLARE_OMATCOPY(T) \
DLL_EXPORT sycl::event omatcopy(sycl::queue &queue, transpose trans, \
                                std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, const T *a, \
                                std::int64_t lda, T *b, std::int64_t ldb, \
                                const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_OMATCOPY(float)
ONEMKL_DECLARE_OMATCOPY(double)
ONEMKL_DECLARE_OMATCOPY(std::complex<float>)
ONEMKL_DECLARE_OMATCOPY(std::complex<double>)

#undef ONEMKL_DECLARE_OMATCOPY

#define ONEMKL_DECLARE_OMATADD(T) \
DLL_EXPORT sycl::event omatadd(sycl::queue &queue, transpose transa, transpose transb, \
                               std::int64_t m, std::int64_t n, \
                               value_or_pointer<T> alpha, const T *a, std::int64_t lda, \
                               value_or_pointer<T> beta, const T *b, std::int64_t ldb, \
                               T *c, std::int64_t ldc, \
                               const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_OMATADD(float)
ONEMKL_DECLARE_OMATADD(double)
ONEMKL_DECLARE_OMATADD(std::complex<float>)
ONEMKL_DECLARE_OMATADD(std::complex<double>)

#undef ONEMKL_DECLARE_OMATADD

#define ONEMKL_DECLARE_IMATCOPY_BATCH(T) \
    ONEMKL_DECLARE_IMATCOPY_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_IMATCOPY_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_IMATCOPY_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_IMATCOPY_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event imatcopy_batch(sycl::queue &queue, transpose trans, \
                                          std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, T *ab, std::int64_t lda, \
                                          std::int64_t ldb, std::int64_t stride, std::int64_t batch_size, \
                                          const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_IMATCOPY_BATCH_GROUP(T, Ti) \
DLL_EXPORT sycl::event imatcopy_batch(sycl::queue &queue, const transpose *trans, \
                                      const Ti *m, const Ti *n, const T *alpha, T **ab, \
                                      const Ti *lda, const Ti *ldb, std::int64_t group_count, \
                                      const Ti *groupsize, \
                                      const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_IMATCOPY_BATCH(float)
ONEMKL_DECLARE_IMATCOPY_BATCH(double)
ONEMKL_DECLARE_IMATCOPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_IMATCOPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_IMATCOPY_BATCH_GROUP
#undef ONEMKL_DECLARE_IMATCOPY_BATCH_STRIDED
#undef ONEMKL_DECLARE_IMATCOPY_BATCH

#define ONEMKL_DECLARE_OMATCOPY_BATCH(T) \
    ONEMKL_DECLARE_OMATCOPY_BATCH_STRIDED(T) \
    ONEMKL_DECLARE_OMATCOPY_BATCH_GROUP(T, std::int64_t) \
    ONEMKL_DECLARE_OMATCOPY_BATCH_GROUP(T, std::int32_t)

#define ONEMKL_DECLARE_OMATCOPY_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event omatcopy_batch(sycl::queue &queue, transpose trans, \
                                          std::int64_t m, std::int64_t n, value_or_pointer<T> alpha, \
                                          const T *a, std::int64_t lda, std::int64_t stride_a, \
                                          T *b, std::int64_t ldb, std::int64_t stride_b, \
                                          std::int64_t batch_size, \
                                          const std::vector<sycl::event> &dependencies = {});

#define ONEMKL_DECLARE_OMATCOPY_BATCH_GROUP(T, Ti) \
DLL_EXPORT sycl::event omatcopy_batch(sycl::queue &queue, const transpose *trans, \
                                      const Ti *m, const Ti *n, const T *alpha, const T **a, \
                                      const Ti *lda, T **b, const Ti *ldb, std::int64_t group_count, \
                                      const Ti *groupsize, \
                                      const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_OMATCOPY_BATCH(float)
ONEMKL_DECLARE_OMATCOPY_BATCH(double)
ONEMKL_DECLARE_OMATCOPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_OMATCOPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_OMATCOPY_BATCH_GROUP
#undef ONEMKL_DECLARE_OMATCOPY_BATCH_STRIDED
#undef ONEMKL_DECLARE_OMATCOPY_BATCH

#define ONEMKL_DECLARE_OMATADD_BATCH(T) \
    ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(T)

#define ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(T) \
DLL_EXPORT sycl::event omatadd_batch(sycl::queue &queue, transpose transa, transpose transb, \
                                         std::int64_t m, std::int64_t n, \
                                         value_or_pointer<T> alpha, const T *a, std::int64_t lda, std::int64_t stride_a, \
                                         value_or_pointer<T> beta, const T *b, std::int64_t ldb, std::int64_t stride_b, \
                                         T *c, std::int64_t ldc, std::int64_t stride_c, \
                                         std::int64_t batch_size, \
                                         const std::vector<sycl::event> &dependencies = {});

ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(float)
ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(double)
ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(std::complex<float>)
ONEMKL_DECLARE_OMATADD_BATCH_STRIDED(std::complex<double>)

#undef ONEMKL_DECLARE_OMATADD_BATCH

