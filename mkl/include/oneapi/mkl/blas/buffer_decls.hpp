/*******************************************************************************
* Copyright 2018-2022 Intel Corporation.
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

#define ONEMKL_DECLARE_BUF_GEMM(Ta, Tb, Tc, Ts) \
DLL_EXPORT void gemm(sycl::queue &queue, transpose transa, transpose transb, \
                     std::int64_t m, std::int64_t n, std::int64_t k, \
                     Ts alpha, sycl::buffer<Ta, 1> &a, std::int64_t lda, \
                     sycl::buffer<Tb, 1> &b, std::int64_t ldb, \
                     Ts beta, sycl::buffer<Tc, 1> &c, std::int64_t ldc, \
                     compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_GEMM(float, float, float, float)
ONEMKL_DECLARE_BUF_GEMM(double, double, double, double)
ONEMKL_DECLARE_BUF_GEMM(std::complex<float>, std::complex<float>, std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_BUF_GEMM(std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_BUF_GEMM(sycl::half, sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_GEMM(sycl::half, sycl::half, float, float)
ONEMKL_DECLARE_BUF_GEMM(bfloat16, bfloat16, bfloat16, float)
ONEMKL_DECLARE_BUF_GEMM(bfloat16, bfloat16, float, float)
ONEMKL_DECLARE_BUF_GEMM(std::int8_t, std::int8_t, std::int32_t, float)
ONEMKL_DECLARE_BUF_GEMM(std::int8_t, std::int8_t, float, float)

#undef ONEMKL_DECLARE_BUF_GEMM

#define ONEMKL_DECLARE_BUF_SYMM(T) \
DLL_EXPORT void symm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &b, std::int64_t ldb, T beta, sycl::buffer<T, 1> &c, \
              std::int64_t ldc, compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_SYMM(float)
ONEMKL_DECLARE_BUF_SYMM(double)
ONEMKL_DECLARE_BUF_SYMM(std::complex<float>)
ONEMKL_DECLARE_BUF_SYMM(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYMM

#define ONEMKL_DECLARE_BUF_HEMM(T) \
DLL_EXPORT void hemm(sycl::queue &queue, side left_right, uplo upper_lower, std::int64_t m, std::int64_t n, \
              T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &b, std::int64_t ldb, T beta, sycl::buffer<T, 1> &c, \
              std::int64_t ldc, compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_HEMM(std::complex<float>)
ONEMKL_DECLARE_BUF_HEMM(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HEMM

#define ONEMKL_DECLARE_BUF_SYRK(T) \
DLL_EXPORT void syrk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              T beta, sycl::buffer<T, 1> &c, std::int64_t ldc, \
              compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_SYRK(float)
ONEMKL_DECLARE_BUF_SYRK(double)
ONEMKL_DECLARE_BUF_SYRK(std::complex<float>)
ONEMKL_DECLARE_BUF_SYRK(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYRK

#define ONEMKL_DECLARE_BUF_HERK(T, Treal) \
DLL_EXPORT void herk(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
              Treal alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              Treal beta, sycl::buffer<T, 1> &c, std::int64_t ldc, \
              compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_HERK(std::complex<float>, float)
ONEMKL_DECLARE_BUF_HERK(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_HERK

#define ONEMKL_DECLARE_BUF_SYR2K(T) \
DLL_EXPORT void syr2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
               sycl::buffer<T, 1> &b, std::int64_t ldb, \
               T beta, sycl::buffer<T, 1> &c, std::int64_t ldc, \
               compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_SYR2K(float)
ONEMKL_DECLARE_BUF_SYR2K(double)
ONEMKL_DECLARE_BUF_SYR2K(std::complex<float>)
ONEMKL_DECLARE_BUF_SYR2K(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYR2K

#define ONEMKL_DECLARE_BUF_HER2K(T, Treal) \
DLL_EXPORT void her2k(sycl::queue &queue, uplo upper_lower, transpose trans, std::int64_t n, std::int64_t k, \
               T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
               sycl::buffer<T, 1> &b, std::int64_t ldb, \
               Treal beta, sycl::buffer<T, 1> &c, std::int64_t ldc, \
               compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_HER2K(std::complex<float>, float)
ONEMKL_DECLARE_BUF_HER2K(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_HER2K

#define ONEMKL_DECLARE_BUF_TRMM(T) \
DLL_EXPORT void trmm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &b, std::int64_t ldb, \
              compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_TRMM(float)
ONEMKL_DECLARE_BUF_TRMM(double)
ONEMKL_DECLARE_BUF_TRMM(std::complex<float>)
ONEMKL_DECLARE_BUF_TRMM(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TRMM

#define ONEMKL_DECLARE_BUF_TRSM(T) \
DLL_EXPORT void trsm(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t m, std::int64_t n, \
              T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &b, std::int64_t ldb, \
              compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_TRSM(float)
ONEMKL_DECLARE_BUF_TRSM(double)
ONEMKL_DECLARE_BUF_TRSM(std::complex<float>)
ONEMKL_DECLARE_BUF_TRSM(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TRSM

// Level 2

#define ONEMKL_DECLARE_BUF_DGMM(T) \
DLL_EXPORT void dgmm(sycl::queue &queue, side left_right, \
              std::int64_t m, std::int64_t n, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &c, std::int64_t ldc);

ONEMKL_DECLARE_BUF_DGMM(float)
ONEMKL_DECLARE_BUF_DGMM(double)
ONEMKL_DECLARE_BUF_DGMM(std::complex<float>)
ONEMKL_DECLARE_BUF_DGMM(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_DGMM

#define ONEMKL_DECLARE_BUF_GEMV(T) \
DLL_EXPORT void gemv(sycl::queue &queue, transpose trans, std::int64_t m, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_GEMV(float)
ONEMKL_DECLARE_BUF_GEMV(double)
ONEMKL_DECLARE_BUF_GEMV(std::complex<float>)
ONEMKL_DECLARE_BUF_GEMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GEMV

#define ONEMKL_DECLARE_BUF_GBMV(T) \
DLL_EXPORT void gbmv(sycl::queue &queue, transpose trans, std::int64_t m, std::int64_t n, std::int64_t kl, std::int64_t ku, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_GBMV(float)
ONEMKL_DECLARE_BUF_GBMV(double)
ONEMKL_DECLARE_BUF_GBMV(std::complex<float>)
ONEMKL_DECLARE_BUF_GBMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GBMV

#define ONEMKL_DECLARE_BUF_GER(T) \
DLL_EXPORT void ger(sycl::queue &queue, std::int64_t m, std::int64_t n, T alpha, \
             sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, \
             sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_GER(float)
ONEMKL_DECLARE_BUF_GER(double)

#undef ONEMKL_DECLARE_BUF_GER

#define ONEMKL_DECLARE_BUF_GERC(T) \
DLL_EXPORT void gerc(sycl::queue &queue, std::int64_t m, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_GERC(std::complex<float>)
ONEMKL_DECLARE_BUF_GERC(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GERC

#define ONEMKL_DECLARE_BUF_GERU(T) \
DLL_EXPORT void geru(sycl::queue &queue, std::int64_t m, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_GERU(std::complex<float>)
ONEMKL_DECLARE_BUF_GERU(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GERU

#define ONEMKL_DECLARE_BUF_HBMV(T) \
DLL_EXPORT void hbmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, std::int64_t k, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_HBMV(std::complex<float>)
ONEMKL_DECLARE_BUF_HBMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HBMV

#define ONEMKL_DECLARE_BUF_HEMV(T) \
DLL_EXPORT void hemv(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_HEMV(std::complex<float>)
ONEMKL_DECLARE_BUF_HEMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HEMV

#define ONEMKL_DECLARE_BUF_HER(T, Treal) \
DLL_EXPORT void her(sycl::queue &queue, uplo upper_lower, std::int64_t n, Treal alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &a, std::int64_t lda); \

ONEMKL_DECLARE_BUF_HER(std::complex<float>, float)
ONEMKL_DECLARE_BUF_HER(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_HER

#define ONEMKL_DECLARE_BUF_HER2(T) \
DLL_EXPORT void her2(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_HER2(std::complex<float>)
ONEMKL_DECLARE_BUF_HER2(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HER2

#define ONEMKL_DECLARE_BUF_HPMV(T) \
DLL_EXPORT void hpmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_HPMV(std::complex<float>)
ONEMKL_DECLARE_BUF_HPMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HPMV

#define ONEMKL_DECLARE_BUF_HPR(T, Treal) \
DLL_EXPORT void hpr(sycl::queue &queue, uplo upper_lower, std::int64_t n, Treal alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &a);

ONEMKL_DECLARE_BUF_HPR(std::complex<float>, float)
ONEMKL_DECLARE_BUF_HPR(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_HPR

#define ONEMKL_DECLARE_BUF_HPR2(T) \
DLL_EXPORT void hpr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a);

ONEMKL_DECLARE_BUF_HPR2(std::complex<float>)
ONEMKL_DECLARE_BUF_HPR2(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_HPR2

#define ONEMKL_DECLARE_BUF_SBMV(T) \
DLL_EXPORT void sbmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, std::int64_t k, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_SBMV(float)
ONEMKL_DECLARE_BUF_SBMV(double)

#undef ONEMKL_DECLARE_BUF_SBMV

#define ONEMKL_DECLARE_BUF_SYMV(T) \
DLL_EXPORT void symv(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_SYMV(float)
ONEMKL_DECLARE_BUF_SYMV(double)
ONEMKL_DECLARE_BUF_SYMV(std::complex<float>)
ONEMKL_DECLARE_BUF_SYMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYMV

#define ONEMKL_DECLARE_BUF_SYR(T) \
DLL_EXPORT void syr(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_SYR(float)
ONEMKL_DECLARE_BUF_SYR(double)
ONEMKL_DECLARE_BUF_SYR(std::complex<float>)
ONEMKL_DECLARE_BUF_SYR(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYR

#define ONEMKL_DECLARE_BUF_SYR2(T) \
DLL_EXPORT void syr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a, std::int64_t lda);

ONEMKL_DECLARE_BUF_SYR2(float)
ONEMKL_DECLARE_BUF_SYR2(double)
ONEMKL_DECLARE_BUF_SYR2(std::complex<float>)
ONEMKL_DECLARE_BUF_SYR2(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYR2

#define ONEMKL_DECLARE_BUF_SPMV(T) \
DLL_EXPORT void spmv(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, \
              sycl::buffer<T, 1> &x, std::int64_t incx, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_SPMV(float)
ONEMKL_DECLARE_BUF_SPMV(double)

#undef ONEMKL_DECLARE_BUF_SPMV

#define ONEMKL_DECLARE_BUF_SPR(T) \
DLL_EXPORT void spr(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &a);

ONEMKL_DECLARE_BUF_SPR(float)
ONEMKL_DECLARE_BUF_SPR(double)

#undef ONEMKL_DECLARE_BUF_SPR

#define ONEMKL_DECLARE_BUF_SPR2(T) \
DLL_EXPORT void spr2(sycl::queue &queue, uplo upper_lower, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &x, std::int64_t incx, \
              sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &a);

ONEMKL_DECLARE_BUF_SPR2(float)
ONEMKL_DECLARE_BUF_SPR2(double)

#undef ONEMKL_DECLARE_BUF_SPR2

#define ONEMKL_DECLARE_BUF_TBMV(T) \
DLL_EXPORT void tbmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, std::int64_t k, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TBMV(float)
ONEMKL_DECLARE_BUF_TBMV(double)
ONEMKL_DECLARE_BUF_TBMV(std::complex<float>)
ONEMKL_DECLARE_BUF_TBMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TBMV

#define ONEMKL_DECLARE_BUF_TBSV(T) \
DLL_EXPORT void tbsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, std::int64_t k, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TBSV(float)
ONEMKL_DECLARE_BUF_TBSV(double)
ONEMKL_DECLARE_BUF_TBSV(std::complex<float>)
ONEMKL_DECLARE_BUF_TBSV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TBSV

#define ONEMKL_DECLARE_BUF_TPMV(T) \
DLL_EXPORT void tpmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              sycl::buffer<T, 1> &a, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TPMV(float)
ONEMKL_DECLARE_BUF_TPMV(double)
ONEMKL_DECLARE_BUF_TPMV(std::complex<float>)
ONEMKL_DECLARE_BUF_TPMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TPMV

#define ONEMKL_DECLARE_BUF_TPSV(T) \
DLL_EXPORT void tpsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              sycl::buffer<T, 1> &a, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TPSV(float)
ONEMKL_DECLARE_BUF_TPSV(double)
ONEMKL_DECLARE_BUF_TPSV(std::complex<float>)
ONEMKL_DECLARE_BUF_TPSV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TPSV

#define ONEMKL_DECLARE_BUF_TRMV(T) \
DLL_EXPORT void trmv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TRMV(float)
ONEMKL_DECLARE_BUF_TRMV(double)
ONEMKL_DECLARE_BUF_TRMV(std::complex<float>)
ONEMKL_DECLARE_BUF_TRMV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TRMV

#define ONEMKL_DECLARE_BUF_TRSV(T) \
DLL_EXPORT void trsv(sycl::queue &queue, uplo upper_lower, transpose trans, diag unit_diag, \
              std::int64_t n, \
              sycl::buffer<T, 1> &a, std::int64_t lda, \
              sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_TRSV(float)
ONEMKL_DECLARE_BUF_TRSV(double)
ONEMKL_DECLARE_BUF_TRSV(std::complex<float>)
ONEMKL_DECLARE_BUF_TRSV(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TRSV

// Level 1

#define ONEMKL_DECLARE_BUF_DOTC(T) \
DLL_EXPORT void dotc(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, \
              std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &result);

ONEMKL_DECLARE_BUF_DOTC(std::complex<float>)
ONEMKL_DECLARE_BUF_DOTC(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_DOTC

#define ONEMKL_DECLARE_BUF_DOTU(T) \
DLL_EXPORT void dotu(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, \
              std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, \
              sycl::buffer<T, 1> &result);

ONEMKL_DECLARE_BUF_DOTU(std::complex<float>)
ONEMKL_DECLARE_BUF_DOTU(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_DOTU

#define ONEMKL_DECLARE_BUF_IAMAX(Tf, Ti) \
DLL_EXPORT void iamax(sycl::queue &queue, std::int64_t n, sycl::buffer<Tf, 1> &x, std::int64_t incx, \
                      sycl::buffer<Ti, 1> &result, index_base base=index_base::zero);

ONEMKL_DECLARE_BUF_IAMAX(float, std::int64_t)
ONEMKL_DECLARE_BUF_IAMAX(float, std::int32_t)
ONEMKL_DECLARE_BUF_IAMAX(double, std::int64_t)
ONEMKL_DECLARE_BUF_IAMAX(double, std::int32_t)
ONEMKL_DECLARE_BUF_IAMAX(std::complex<float>, std::int64_t)
ONEMKL_DECLARE_BUF_IAMAX(std::complex<float>, std::int32_t)
ONEMKL_DECLARE_BUF_IAMAX(std::complex<double>, std::int64_t)
ONEMKL_DECLARE_BUF_IAMAX(std::complex<double>, std::int32_t)

#undef ONEMKL_DECLARE_BUF_IAMAX

#define ONEMKL_DECLARE_BUF_IAMIN(Tf, Ti) \
DLL_EXPORT void iamin(sycl::queue &queue, std::int64_t n, sycl::buffer<Tf, 1> &x, std::int64_t incx, \
                      sycl::buffer<Ti, 1> &result, index_base base=index_base::zero);

ONEMKL_DECLARE_BUF_IAMIN(float, std::int64_t)
ONEMKL_DECLARE_BUF_IAMIN(float, std::int32_t)
ONEMKL_DECLARE_BUF_IAMIN(double, std::int64_t)
ONEMKL_DECLARE_BUF_IAMIN(double, std::int32_t)
ONEMKL_DECLARE_BUF_IAMIN(std::complex<float>, std::int64_t)
ONEMKL_DECLARE_BUF_IAMIN(std::complex<float>, std::int32_t)
ONEMKL_DECLARE_BUF_IAMIN(std::complex<double>, std::int64_t)
ONEMKL_DECLARE_BUF_IAMIN(std::complex<double>, std::int32_t)

#undef ONEMKL_DECLARE_BUF_IAMIN

#define ONEMKL_DECLARE_BUF_ASUM(T, Tres) \
DLL_EXPORT void asum(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<Tres, 1> &result);

ONEMKL_DECLARE_BUF_ASUM(float, float)
ONEMKL_DECLARE_BUF_ASUM(double, double)
ONEMKL_DECLARE_BUF_ASUM(std::complex<float>, float)
ONEMKL_DECLARE_BUF_ASUM(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_ASUM

#define ONEMKL_DECLARE_BUF_AXPY(T) \
DLL_EXPORT void axpy(sycl::queue &queue, std::int64_t n, T alpha, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_AXPY(sycl::half)
ONEMKL_DECLARE_BUF_AXPY(bfloat16)
ONEMKL_DECLARE_BUF_AXPY(float)
ONEMKL_DECLARE_BUF_AXPY(double)
ONEMKL_DECLARE_BUF_AXPY(std::complex<float>)
ONEMKL_DECLARE_BUF_AXPY(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_AXPY

#define ONEMKL_DECLARE_BUF_AXPBY(T) \
DLL_EXPORT void axpby(sycl::queue &queue, std::int64_t n, T alpha, sycl::buffer<T, 1> &x, std::int64_t incx, T beta, sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_AXPBY(float)
ONEMKL_DECLARE_BUF_AXPBY(double)
ONEMKL_DECLARE_BUF_AXPBY(std::complex<float>)
ONEMKL_DECLARE_BUF_AXPBY(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_AXPBY

#define ONEMKL_DECLARE_BUF_COPY(T) \
DLL_EXPORT void copy(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_COPY(float)
ONEMKL_DECLARE_BUF_COPY(double)
ONEMKL_DECLARE_BUF_COPY(std::complex<float>)
ONEMKL_DECLARE_BUF_COPY(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_COPY

#define ONEMKL_DECLARE_BUF_DOT(T, Tres) \
DLL_EXPORT void dot(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, sycl::buffer<Tres, 1> &result);

ONEMKL_DECLARE_BUF_DOT(sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_DOT(bfloat16, bfloat16)
ONEMKL_DECLARE_BUF_DOT(float, float)
ONEMKL_DECLARE_BUF_DOT(double, double)
ONEMKL_DECLARE_BUF_DOT(float, double)

#undef ONEMKL_DECLARE_BUF_DOT

#define ONEMKL_DECLARE_BUF_SDSDOT(T) \
DLL_EXPORT void sdsdot(sycl::queue &queue, std::int64_t n, T sb, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, sycl::buffer<T, 1> &result);

ONEMKL_DECLARE_BUF_SDSDOT(float)

#undef ONEMKL_DECLARE_BUF_SDSDOT

#define ONEMKL_DECLARE_BUF_NRM2(T, Tres) \
DLL_EXPORT void nrm2(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<Tres, 1> &result);

ONEMKL_DECLARE_BUF_NRM2(sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_NRM2(bfloat16, bfloat16)
ONEMKL_DECLARE_BUF_NRM2(float, float)
ONEMKL_DECLARE_BUF_NRM2(double, double)
ONEMKL_DECLARE_BUF_NRM2(std::complex<float>, float)
ONEMKL_DECLARE_BUF_NRM2(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_NRM2

#define ONEMKL_DECLARE_BUF_ROT(T, Tc, Ts) \
DLL_EXPORT void rot(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, Tc c, Ts s);

ONEMKL_DECLARE_BUF_ROT(sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_ROT(bfloat16, bfloat16, bfloat16)
ONEMKL_DECLARE_BUF_ROT(float, float, float)
ONEMKL_DECLARE_BUF_ROT(double, double, double)
ONEMKL_DECLARE_BUF_ROT(std::complex<float>, float, float)
ONEMKL_DECLARE_BUF_ROT(std::complex<float>, float, std::complex<float>)
ONEMKL_DECLARE_BUF_ROT(std::complex<double>, double, double)
ONEMKL_DECLARE_BUF_ROT(std::complex<double>, double, std::complex<double>)

#undef ONEMKL_DECLARE_BUF_ROT

#define ONEMKL_DECLARE_BUF_ROTG(T, Tc) \
DLL_EXPORT void rotg(sycl::queue &queue, sycl::buffer<T, 1> &a, sycl::buffer<T, 1> &b, sycl::buffer<Tc, 1> &c, sycl::buffer<T, 1> &s);

ONEMKL_DECLARE_BUF_ROTG(float, float)
ONEMKL_DECLARE_BUF_ROTG(double, double)
ONEMKL_DECLARE_BUF_ROTG(std::complex<float>, float)
ONEMKL_DECLARE_BUF_ROTG(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_ROTG

#define ONEMKL_DECLARE_BUF_ROTM(T) \
DLL_EXPORT void rotm(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy, sycl::buffer<T, 1> &param);

ONEMKL_DECLARE_BUF_ROTM(float)
ONEMKL_DECLARE_BUF_ROTM(double)

#undef ONEMKL_DECLARE_BUF_ROTM

#define ONEMKL_DECLARE_BUF_ROTMG(T) \
DLL_EXPORT void rotmg(sycl::queue &queue, sycl::buffer<T, 1> &d1, sycl::buffer<T, 1> &d2, sycl::buffer<T, 1> &x1, T y1, sycl::buffer<T, 1> &param);

ONEMKL_DECLARE_BUF_ROTMG(float)
ONEMKL_DECLARE_BUF_ROTMG(double)

#undef ONEMKL_DECLARE_BUF_ROTMG

#define ONEMKL_DECLARE_BUF_SCAL(T, Ts) \
DLL_EXPORT void scal(sycl::queue &queue, std::int64_t n, Ts alpha, sycl::buffer<T, 1> &x, std::int64_t incx);

ONEMKL_DECLARE_BUF_SCAL(sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_SCAL(bfloat16, bfloat16)
ONEMKL_DECLARE_BUF_SCAL(float, float)
ONEMKL_DECLARE_BUF_SCAL(double, double)
ONEMKL_DECLARE_BUF_SCAL(std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_BUF_SCAL(std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_BUF_SCAL(std::complex<float>, float)
ONEMKL_DECLARE_BUF_SCAL(std::complex<double>, double)

#undef ONEMKL_DECLARE_BUF_SCAL

#define ONEMKL_DECLARE_BUF_SWAP(T) \
DLL_EXPORT void swap(sycl::queue &queue, std::int64_t n, sycl::buffer<T, 1> &x, std::int64_t incx, sycl::buffer<T, 1> &y, std::int64_t incy);

ONEMKL_DECLARE_BUF_SWAP(float)
ONEMKL_DECLARE_BUF_SWAP(double)
ONEMKL_DECLARE_BUF_SWAP(std::complex<float>)
ONEMKL_DECLARE_BUF_SWAP(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SWAP

// Batch API

#define ONEMKL_DECLARE_BUF_GEMM_BATCH(Ta, Tb, Tc, Ts) \
DLL_EXPORT void gemm_batch(sycl::queue &queue, transpose transa, transpose transb, \
                           std::int64_t m, std::int64_t n, std::int64_t k, \
                           Ts alpha, sycl::buffer<Ta, 1> &a, std::int64_t lda, std::int64_t stride_a, \
                           sycl::buffer<Tb, 1> &b, std::int64_t ldb, std::int64_t stride_b, \
                           Ts beta, sycl::buffer<Tc, 1> &c, std::int64_t ldc, std::int64_t stride_c, \
                           std::int64_t batch_size, compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_GEMM_BATCH(float, float, float, float)
ONEMKL_DECLARE_BUF_GEMM_BATCH(double, double, double, double)
ONEMKL_DECLARE_BUF_GEMM_BATCH(std::complex<float>, std::complex<float>, std::complex<float>, std::complex<float>)
ONEMKL_DECLARE_BUF_GEMM_BATCH(std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double>)
ONEMKL_DECLARE_BUF_GEMM_BATCH(sycl::half, sycl::half, sycl::half, sycl::half)
ONEMKL_DECLARE_BUF_GEMM_BATCH(sycl::half, sycl::half, float, float)
ONEMKL_DECLARE_BUF_GEMM_BATCH(bfloat16, bfloat16, bfloat16, float)
ONEMKL_DECLARE_BUF_GEMM_BATCH(bfloat16, bfloat16, float, float)
ONEMKL_DECLARE_BUF_GEMM_BATCH(std::int8_t, std::int8_t, std::int32_t, float)
ONEMKL_DECLARE_BUF_GEMM_BATCH(std::int8_t, std::int8_t, float, float)

#undef ONEMKL_DECLARE_BUF_GEMM_BATCH

#define ONEMKL_DECLARE_BUF_SYRK_BATCH(T) \
DLL_EXPORT void syrk_batch(sycl::queue &queue, \
                           uplo upper_lower, transpose trans, int64_t n, int64_t k, \
                           T alpha, sycl::buffer<T,1> &a, int64_t lda, int64_t stride_a, \
                           T beta, sycl::buffer<T,1> &c, int64_t ldc, int64_t stride_c, \
                           int64_t batch_size, compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_SYRK_BATCH(float)
ONEMKL_DECLARE_BUF_SYRK_BATCH(double)
ONEMKL_DECLARE_BUF_SYRK_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_SYRK_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_SYRK_BATCH

#define ONEMKL_DECLARE_BUF_TRSM_BATCH(T) \
DLL_EXPORT void trsm_batch(sycl::queue &queue, side left_right, uplo upper_lower, transpose trans, diag unit_diag, \
                           std::int64_t m, std::int64_t n, \
                           T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, std::int64_t stride_a, \
                           sycl::buffer<T, 1> &b, std::int64_t ldb, std::int64_t stride_b, \
                           std::int64_t batch_size, compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_TRSM_BATCH(float)
ONEMKL_DECLARE_BUF_TRSM_BATCH(double)
ONEMKL_DECLARE_BUF_TRSM_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_TRSM_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_TRSM_BATCH

#define ONEMKL_DECLARE_BUF_GEMV_BATCH(T) \
DLL_EXPORT void gemv_batch(sycl::queue &queue, transpose trans, \
              std::int64_t m, std::int64_t n, T alpha, \
              sycl::buffer<T, 1> &a, std::int64_t lda, std::int64_t stridea, \
              sycl::buffer<T, 1> &x, std::int64_t incx, std::int64_t stridex, T beta, \
              sycl::buffer<T, 1> &y, std::int64_t incy, std::int64_t stridey, std::int64_t batch_size);

ONEMKL_DECLARE_BUF_GEMV_BATCH(float)
ONEMKL_DECLARE_BUF_GEMV_BATCH(double)
ONEMKL_DECLARE_BUF_GEMV_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_GEMV_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GEMV_BATCH

#define ONEMKL_DECLARE_BUF_DGMM_BATCH(T) \
DLL_EXPORT void dgmm_batch(sycl::queue &queue, side left_right, \
              std::int64_t m, std::int64_t n, \
              sycl::buffer<T, 1> &a, std::int64_t lda, std::int64_t stridea, \
              sycl::buffer<T, 1> &x, std::int64_t incx, std::int64_t stridex, \
              sycl::buffer<T, 1> &c, std::int64_t ldc, std::int64_t stridec, std::int64_t batch_size);

ONEMKL_DECLARE_BUF_DGMM_BATCH(float)
ONEMKL_DECLARE_BUF_DGMM_BATCH(double)
ONEMKL_DECLARE_BUF_DGMM_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_DGMM_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_DGMM_BATCH

#define ONEMKL_DECLARE_BUF_AXPY_BATCH(T) \
DLL_EXPORT void axpy_batch(sycl::queue &queue, std::int64_t n, T alpha, \
                sycl::buffer<T, 1> &x, std::int64_t incx, std::int64_t stridex, \
                sycl::buffer<T, 1> &y, std::int64_t incy, std::int64_t stridey, std::int64_t batch_size);

ONEMKL_DECLARE_BUF_AXPY_BATCH(float)
ONEMKL_DECLARE_BUF_AXPY_BATCH(double)
ONEMKL_DECLARE_BUF_AXPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_AXPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_AXPY_BATCH

#define ONEMKL_DECLARE_BUF_COPY_BATCH(T) \
DLL_EXPORT void copy_batch(sycl::queue &queue, std::int64_t n, \
                           sycl::buffer<T, 1> &x, std::int64_t incx, std::int64_t stridex, \
                           sycl::buffer<T, 1> &y, std::int64_t incy, std::int64_t stridey, \
                           std::int64_t batch_size);

ONEMKL_DECLARE_BUF_COPY_BATCH(float)
ONEMKL_DECLARE_BUF_COPY_BATCH(double)
ONEMKL_DECLARE_BUF_COPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_COPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_COPY_BATCH

// BLAS like

#define ONEMKL_DECLARE_BUF_GEMMT(T) \
DLL_EXPORT void gemmt(sycl::queue &queue, uplo upper_lower, transpose transa, transpose transb, \
               std::int64_t n, std::int64_t k, T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
               sycl::buffer<T, 1> &b, std::int64_t ldb, \
               T beta, sycl::buffer<T, 1> &c, std::int64_t ldc, \
               compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_GEMMT(float)
ONEMKL_DECLARE_BUF_GEMMT(double)
ONEMKL_DECLARE_BUF_GEMMT(std::complex<float>)
ONEMKL_DECLARE_BUF_GEMMT(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_GEMMT

#define ONEMKL_DECLARE_BUF_GEMM_BIAS(Ta, Tb) \
DLL_EXPORT void gemm_bias(sycl::queue &queue, transpose transa, transpose transb, offset offsetc, \
                  std::int64_t m, std::int64_t n, std::int64_t k, float alpha, \
                  sycl::buffer<Ta, 1> &a, std::int64_t lda, Ta ao, \
                  sycl::buffer<Tb, 1> &b, std::int64_t ldb, Tb bo, \
                  float beta, sycl::buffer<std::int32_t, 1> &c, std::int64_t ldc, sycl::buffer<std::int32_t, 1> &co, \
                  compute_mode mode = MKL_BLAS_COMPUTE_MODE);

ONEMKL_DECLARE_BUF_GEMM_BIAS(std::int8_t, std::int8_t)
ONEMKL_DECLARE_BUF_GEMM_BIAS(std::int8_t, std::uint8_t)
ONEMKL_DECLARE_BUF_GEMM_BIAS(std::uint8_t, std::int8_t)
ONEMKL_DECLARE_BUF_GEMM_BIAS(std::uint8_t, std::uint8_t)

#undef ONEMKL_DECLARE_BUF_GEMM_BIAS

#define ONEMKL_DECLARE_BUF_IMATCOPY(T) \
DLL_EXPORT void imatcopy(sycl::queue &queue, transpose trans, \
                         std::int64_t m, std::int64_t n, \
                         T alpha, sycl::buffer<T, 1> &ab, \
                         std::int64_t lda, std::int64_t ldb);

ONEMKL_DECLARE_BUF_IMATCOPY(float)
ONEMKL_DECLARE_BUF_IMATCOPY(double)
ONEMKL_DECLARE_BUF_IMATCOPY(std::complex<float>)
ONEMKL_DECLARE_BUF_IMATCOPY(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_IMATCOPY

#define ONEMKL_DECLARE_BUF_OMATCOPY(T) \
DLL_EXPORT void omatcopy(sycl::queue &queue, transpose trans, \
                         std::int64_t m, std::int64_t n, \
                         T alpha, sycl::buffer<T, 1> &a, \
                         std::int64_t lda, sycl::buffer<T, 1> &b, std::int64_t ldb);

ONEMKL_DECLARE_BUF_OMATCOPY(float)
ONEMKL_DECLARE_BUF_OMATCOPY(double)
ONEMKL_DECLARE_BUF_OMATCOPY(std::complex<float>)
ONEMKL_DECLARE_BUF_OMATCOPY(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_OMATCOPY

#define ONEMKL_DECLARE_BUF_OMATADD(T) \
DLL_EXPORT void omatadd(sycl::queue &queue, transpose transa, transpose transb, \
                        std::int64_t m, std::int64_t n, \
                        T alpha, sycl::buffer<T, 1> &a, std::int64_t lda, \
                        T beta, sycl::buffer<T, 1> &b, std::int64_t ldb, \
                        sycl::buffer<T, 1> &c, std::int64_t ldc);

ONEMKL_DECLARE_BUF_OMATADD(float)
ONEMKL_DECLARE_BUF_OMATADD(double)
ONEMKL_DECLARE_BUF_OMATADD(std::complex<float>)
ONEMKL_DECLARE_BUF_OMATADD(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_OMATADD

#define ONEMKL_DECLARE_BUF_IMATCOPY_BATCH(T) \
DLL_EXPORT void imatcopy_batch(sycl::queue &queue, transpose trans, \
                               std::int64_t m, std::int64_t n, T alpha, sycl::buffer<T, 1> &ab, std::int64_t lda, \
                               std::int64_t ldb, std::int64_t stride, std::int64_t batch_size);

ONEMKL_DECLARE_BUF_IMATCOPY_BATCH(float)
ONEMKL_DECLARE_BUF_IMATCOPY_BATCH(double)
ONEMKL_DECLARE_BUF_IMATCOPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_IMATCOPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_IMATCOPY_BATCH

#define ONEMKL_DECLARE_BUF_OMATCOPY_BATCH(T) \
DLL_EXPORT void omatcopy_batch(sycl::queue &queue, transpose trans, \
                               std::int64_t m, std::int64_t n, T alpha, \
                               sycl::buffer<T, 1> &a, std::int64_t lda, std::int64_t stride_a, \
                               sycl::buffer<T, 1> &b, std::int64_t ldb, std::int64_t stride_b, \
                               std::int64_t batch_size);

ONEMKL_DECLARE_BUF_OMATCOPY_BATCH(float)
ONEMKL_DECLARE_BUF_OMATCOPY_BATCH(double)
ONEMKL_DECLARE_BUF_OMATCOPY_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_OMATCOPY_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_OMATCOPY_BATCH

#define ONEMKL_DECLARE_BUF_OMATADD_BATCH(T) \
DLL_EXPORT void omatadd_batch(sycl::queue &queue, transpose transa, transpose transb, \
                              std::int64_t m, std::int64_t n, T alpha, \
                              sycl::buffer<T, 1> &a, std::int64_t lda, std::int64_t stride_a, \
                              T beta, sycl::buffer<T, 1> &b, std::int64_t ldb, std::int64_t stride_b, \
                              sycl::buffer<T, 1> &c, std::int64_t ldc, std::int64_t stride_c, \
                              std::int64_t batch_size);

ONEMKL_DECLARE_BUF_OMATADD_BATCH(float)
ONEMKL_DECLARE_BUF_OMATADD_BATCH(double)
ONEMKL_DECLARE_BUF_OMATADD_BATCH(std::complex<float>)
ONEMKL_DECLARE_BUF_OMATADD_BATCH(std::complex<double>)

#undef ONEMKL_DECLARE_BUF_OMATADD_BATCH
