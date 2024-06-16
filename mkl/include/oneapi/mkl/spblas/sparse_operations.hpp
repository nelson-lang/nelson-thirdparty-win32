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

#ifndef _ONEMKL_SPARSE_OPERATIONS_HPP_
#define _ONEMKL_SPARSE_OPERATIONS_HPP_

#include <sycl/sycl.hpp>
#include <complex>
#include <cstddef>
#include <cstdint>
#include <stdexcept>

#include "oneapi/mkl/export.hpp"
#include "oneapi/mkl/types.hpp"
#include "oneapi/mkl/exceptions.hpp"

#include "oneapi/mkl/spblas/sparse_structures.hpp"

namespace oneapi {
namespace mkl {
namespace sparse {

/******************************************************************************/
DLL_EXPORT sycl::event
optimize_gemv(sycl::queue &queue,
              transpose opA,
              matrix_handle_t A,
              const std::vector<sycl::event> &dependencies = {});

/******************************************************************************/
DLL_EXPORT sycl::event
optimize_trmv(sycl::queue &queue,
              uplo uplo_val,
              transpose opA,
              diag diag_val,
              matrix_handle_t A,
              const std::vector<sycl::event> &dependencies = {});

/******************************************************************************/
DLL_EXPORT sycl::event
optimize_trsv(sycl::queue &queue,
              uplo uplo_val,
              transpose opA,
              diag diag_val,
              matrix_handle_t A,
              const std::vector<sycl::event> &dependencies = {});

/******************************************************************************/
DLL_EXPORT sycl::event
optimize_trsm(sycl::queue &queue,
              uplo uplo_val,
              transpose opA,
              diag diag_val,
              matrix_handle_t A,
              const std::vector<sycl::event> &dependencies = {});

/******************************************************************************/
DLL_EXPORT sycl::event
optimize_trsm(sycl::queue &queue,
              layout layout_val,
              uplo uplo_val,
              transpose opA,
              diag diag_val,
              matrix_handle_t A,
              const std::int64_t columns,
              const std::vector<sycl::event> &dependencies = {});

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_GEMV(FpType) \
    DLL_EXPORT void gemv(sycl::queue &queue, \
                         transpose opA, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &x, \
                         const FpType beta, \
                         sycl::buffer<FpType, 1> &y); \
    DLL_EXPORT sycl::event gemv(sycl::queue &queue, \
                                transpose opA, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                const FpType *x, \
                                const FpType beta, \
                                FpType *y, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_GEMV(float);
ONEMKL_DECLARE_SPARSE_GEMV(double);
ONEMKL_DECLARE_SPARSE_GEMV(std::complex<float>);
ONEMKL_DECLARE_SPARSE_GEMV(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_GEMV

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_GEMVDOT(FpType) \
    DLL_EXPORT void gemvdot(sycl::queue &queue, \
                            transpose opA, \
                            const FpType alpha, \
                            matrix_handle_t A, \
                            sycl::buffer<FpType, 1> &x, \
                            const FpType beta, \
                            sycl::buffer<FpType, 1> &y, \
                            sycl::buffer<FpType, 1> &d); \
    DLL_EXPORT sycl::event gemvdot(sycl::queue &queue, \
                                   transpose opA, \
                                   const FpType alpha, \
                                   matrix_handle_t A, \
                                   FpType *x, \
                                   const FpType beta, \
                                   FpType *y, \
                                   FpType *d, \
                                   const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_GEMVDOT(float);
ONEMKL_DECLARE_SPARSE_GEMVDOT(double);
ONEMKL_DECLARE_SPARSE_GEMVDOT(std::complex<float>);
ONEMKL_DECLARE_SPARSE_GEMVDOT(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_GEMVDOT

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_SYMV(FpType) \
    DLL_EXPORT void symv(sycl::queue &queue, \
                         uplo uplo_val, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &x, \
                         const FpType beta, \
                         sycl::buffer<FpType, 1> &y); \
    DLL_EXPORT sycl::event symv(sycl::queue &queue, \
                                uplo uplo_val, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                FpType *x, \
                                const FpType beta, \
                                FpType *y, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_SYMV(float);
ONEMKL_DECLARE_SPARSE_SYMV(double);
ONEMKL_DECLARE_SPARSE_SYMV(std::complex<float>);
ONEMKL_DECLARE_SPARSE_SYMV(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_SYMV

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_TRMV(FpType) \
    DLL_EXPORT void trmv(sycl::queue &queue, \
                         uplo uplo_val, \
                         transpose opA, \
                         diag diag_val, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &x, \
                         const FpType beta, \
                         sycl::buffer<FpType, 1> &y); \
    DLL_EXPORT sycl::event trmv(sycl::queue &queue, \
                                uplo uplo_val, \
                                transpose opA, \
                                diag diag_val, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                FpType *x, \
                                const FpType beta, \
                                FpType *y, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_TRMV(float);
ONEMKL_DECLARE_SPARSE_TRMV(double);
ONEMKL_DECLARE_SPARSE_TRMV(std::complex<float>);
ONEMKL_DECLARE_SPARSE_TRMV(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_TRMV

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_TRSV(FpType) \
    DLL_EXPORT void trsv(sycl::queue &queue, \
                         uplo uplo_val, \
                         transpose opA, \
                         diag diag_val, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &x, \
                         sycl::buffer<FpType, 1> &y); \
    DLL_EXPORT sycl::event trsv(sycl::queue &queue, \
                                uplo uplo_val, \
                                transpose opA, \
                                diag diag_val, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                FpType *x, \
                                FpType *y, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_TRSV(float);
ONEMKL_DECLARE_SPARSE_TRSV(double);
ONEMKL_DECLARE_SPARSE_TRSV(std::complex<float>);
ONEMKL_DECLARE_SPARSE_TRSV(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_TRSV

#define ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV(FpType) \
    [[deprecated("Use oneapi::mkl::sparse::trsv(queue, ... , diag_val, /* alpha */ 1.0, ...) instead.")]] \
    DLL_EXPORT void trsv(sycl::queue &queue, \
                         uplo uplo_val, \
                         transpose opA, \
                         diag diag_val, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &x, \
                         sycl::buffer<FpType, 1> &y); \
    [[deprecated("Use oneapi::mkl::sparse::trsv(queue, ... , diag_val, /* alpha */ 1.0, ...) instead.")]] \
    DLL_EXPORT sycl::event trsv(sycl::queue &queue, \
                                uplo uplo_val, \
                                transpose opA, \
                                diag diag_val, \
                                matrix_handle_t A, \
                                FpType *x, \
                                FpType *y, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV(float);
ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV(double);
ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV(std::complex<float>);
ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV(std::complex<double>);

#undef ONEMKL_DECLARE_DEPRECATED_SPARSE_TRSV

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_GEMM(FpType) \
    DLL_EXPORT void gemm(sycl::queue &queue, \
                         layout layout_val, \
                         transpose opA, \
                         transpose opX, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &X, \
                         const std::int64_t columns, \
                         const std::int64_t ldx, \
                         const FpType beta, \
                         sycl::buffer<FpType, 1> &Y, \
                         const std::int64_t ldy); \
    DLL_EXPORT sycl::event gemm(sycl::queue &queue, \
                                layout layout_val, \
                                transpose opA, \
                                transpose opX, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                FpType *X, \
                                const std::int64_t columns, \
                                const std::int64_t ldx, \
                                const FpType beta, \
                                FpType *Y, \
                                const std::int64_t ldy, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_GEMM(float);
ONEMKL_DECLARE_SPARSE_GEMM(double);
ONEMKL_DECLARE_SPARSE_GEMM(std::complex<float>);
ONEMKL_DECLARE_SPARSE_GEMM(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_GEMM

/******************************************************************************/
#define ONEMKL_DECLARE_SPARSE_TRSM(FpType) \
    DLL_EXPORT void trsm(sycl::queue &queue, \
                         layout layout_val, \
                         transpose opA, \
                         transpose opX, \
                         uplo uplo_val, \
                         diag diag_val, \
                         const FpType alpha, \
                         matrix_handle_t A, \
                         sycl::buffer<FpType, 1> &X, \
                         const std::int64_t columns, \
                         const std::int64_t ldx, \
                         sycl::buffer<FpType, 1> &Y, \
                         const std::int64_t ldy); \
    DLL_EXPORT sycl::event trsm(sycl::queue &queue, \
                                layout layout_val, \
                                transpose opA, \
                                transpose opX, \
                                uplo uplo_val, \
                                diag diag_val, \
                                const FpType alpha, \
                                matrix_handle_t A, \
                                const FpType *X, \
                                const std::int64_t columns, \
                                const std::int64_t ldx, \
                                FpType *Y, \
                                const std::int64_t ldy, \
                                const std::vector<sycl::event> &dependencies = {})

ONEMKL_DECLARE_SPARSE_TRSM(float);
ONEMKL_DECLARE_SPARSE_TRSM(double);
ONEMKL_DECLARE_SPARSE_TRSM(std::complex<float>);
ONEMKL_DECLARE_SPARSE_TRSM(std::complex<double>);

#undef ONEMKL_DECLARE_SPARSE_TRSM

/******************************************************************************/
DLL_EXPORT void set_matmat_data(matmat_descr_t descr,
                                matrix_view_descr viewA,
                                transpose opA,
                                matrix_view_descr viewB,
                                transpose opB,
                                matrix_view_descr viewC);

DLL_EXPORT void get_matmat_data(matmat_descr_t descr,
                                matrix_view_descr &viewA,
                                transpose &opA,
                                matrix_view_descr &viewB,
                                transpose &opB,
                                matrix_view_descr &viewC);

DLL_EXPORT sycl::event matmat(sycl::queue &queue,
                              matrix_handle_t A,
                              matrix_handle_t B,
                              matrix_handle_t C,
                              sparse::matmat_request req,
                              sparse::matmat_descr_t descr,
                              std::int64_t *sizeTempBuffer,
                              void *tempBuffer,
                              const std::vector<sycl::event> &dependencies);

DLL_EXPORT void matmat(sycl::queue &queue,
                       matrix_handle_t A,
                       matrix_handle_t B,
                       matrix_handle_t C,
                       sparse::matmat_request req,
                       sparse::matmat_descr_t descr,
                       sycl::buffer<std::int64_t, 1> *sizeTempBuffer,
                       sycl::buffer<std::uint8_t, 1> *tempBuffer);

} /* namespace oneapi::mkl::sparse */
} /* namespace mkl */
} // namespace oneapi

#endif // #ifndef _ONEMKL_SPARSE_OPERATIONS_HPP_
