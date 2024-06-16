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

#ifndef _MKL_BLAS_SYCL_BUFFER_HPP__
#define _MKL_BLAS_SYCL_BUFFER_HPP__


#include <sycl/sycl.hpp>
#include <cstdint>
#include <complex>

#include "oneapi/mkl/export.hpp"
#include "oneapi/mkl/types.hpp"

namespace oneapi {
namespace mkl {
namespace blas {

namespace row_major {
#include "oneapi/mkl/blas/buffer_decls.hpp"
} /* namespace row_major */

inline namespace column_major {
#include "oneapi/mkl/blas/buffer_decls.hpp"
} /* namespace column_major */

} /* namespace blas */
} /* namespace mkl */
} // namespace oneapi

#endif /* _MKL_BLAS_SYCL_BUFFER_HPP__ */
