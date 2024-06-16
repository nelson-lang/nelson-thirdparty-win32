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

#ifndef ONEAPI_MKL_VM_DEVICE_RTS_HPP
#define ONEAPI_MKL_VM_DEVICE_RTS_HPP 1

#include "oneapi/mkl/vm/device/detail/decls.hpp"

#include "oneapi/mkl/vm/device/detail/scalar.hpp"

#include "oneapi/mkl/vm/device/detail/dispatch.hpp"

namespace oneapi::mkl::vm::device::detail::rts {

static inline oneapi::mkl::vm::status
abs(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
abs(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
abs(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
abs(const std::complex<float>* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
abs(const std::complex<double>* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::abs(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acos(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acos(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acos(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acosh(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acosh(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acosh(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acospi(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acospi(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
acospi(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::acospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
add(const sycl::half* a, const sycl::half* b, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
add(const float* a, const float* b, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
add(const double* a, const double* b, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
add(const std::complex<float>* a, const std::complex<float>* b,
    std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
add(const std::complex<double>* a, const std::complex<double>* b,
    std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::add(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
arg(const std::complex<float>* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
arg(const std::complex<double>* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::arg(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asin(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asin(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asin(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinh(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinh(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinh(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinpi(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinpi(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
asinpi(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::asinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2(const sycl::half* a, const sycl::half* b, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2(const float* a, const float* b, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2(const double* a, const double* b, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2pi(const sycl::half* a, const sycl::half* b, sycl::half* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2pi(const float* a, const float* b, float* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atan2pi(const double* a, const double* b, double* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atan2pi(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanh(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanh(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanh(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanpi(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanpi(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
atanpi(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::atanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cbrt(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cbrt(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cbrt(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorm(const sycl::half* a, sycl::half* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorm(const float* a, float* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorm(const double* a, double* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorm(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorminv(const sycl::half* a, sycl::half* y,
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorminv(const float* a, float* y,
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cdfnorminv(const double* a, double* y,
           oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cdfnorminv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ceil(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ceil(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ceil(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ceil(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cis(const float* a, std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cis(const double* a, std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cis(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
conj(const std::complex<float>* a, std::complex<float>* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
conj(const std::complex<double>* a, std::complex<double>* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::conj(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
copysign(const sycl::half* a, const sycl::half* b, sycl::half* y,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
copysign(const float* a, const float* b, float* y,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
copysign(const double* a, const double* b, double* y,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::copysign(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cos(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cos(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cos(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cos(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosd(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosd(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosd(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosd(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosh(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosh(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cosh(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cosh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cospi(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cospi(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
cospi(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::cospi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
div(const sycl::half* a, const sycl::half* b, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
div(const float* a, const float* b, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
div(const double* a, const double* b, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
div(const std::complex<float>* a, const std::complex<float>* b,
    std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
div(const std::complex<double>* a, const std::complex<double>* b,
    std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::div(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erf(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erf(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erf(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erf(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfc(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfc(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfc(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcinv(const sycl::half* a, sycl::half* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcinv(const float* a, float* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcinv(const double* a, double* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcx(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcx(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfcx(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfcx(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfinv(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfinv(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
erfinv(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::erfinv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp(const std::complex<float>* a, std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp(const std::complex<double>* a, std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp10(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp10(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp10(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp2(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp2(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
exp2(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::exp2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
expm1(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
expm1(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
expm1(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::expm1(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fdim(const sycl::half* a, const sycl::half* b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fdim(const float* a, const float* b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fdim(const double* a, const double* b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fdim(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
floor(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
floor(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
floor(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::floor(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmax(const sycl::half* a, const sycl::half* b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmax(const float* a, const float* b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmax(const double* a, const double* b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmax(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmin(const sycl::half* a, const sycl::half* b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmin(const float* a, const float* b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmin(const double* a, const double* b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmin(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmod(const sycl::half* a, const sycl::half* b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmod(const float* a, const float* b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
fmod(const double* a, const double* b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::fmod(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
frac(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
frac(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
frac(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::frac(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
hypot(const sycl::half* a, const sycl::half* b, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
hypot(const float* a, const float* b, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
hypot(const double* a, const double* b, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::hypot(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
inv(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
inv(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
inv(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::inv(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invcbrt(const sycl::half* a, sycl::half* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invcbrt(const float* a, float* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invcbrt(const double* a, double* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invcbrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invsqrt(const sycl::half* a, sycl::half* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invsqrt(const float* a, float* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
invsqrt(const double* a, double* y,
        oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::invsqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
lgamma(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
lgamma(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::lgamma(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ln(const sycl::half* a, sycl::half* y,
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ln(const float* a, float* y,
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ln(const double* a, double* y,
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ln(const std::complex<float>* a, std::complex<float>* y,
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
ln(const std::complex<double>* a, std::complex<double>* y,
   oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::ln(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log10(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log10(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log10(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log10(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log1p(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log1p(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log1p(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log1p(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log2(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log2(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
log2(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::log2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
logb(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
logb(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
logb(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::logb(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
maxmag(const sycl::half* a, const sycl::half* b, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
maxmag(const float* a, const float* b, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
maxmag(const double* a, const double* b, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::maxmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
minmag(const sycl::half* a, const sycl::half* b, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
minmag(const float* a, const float* b, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
minmag(const double* a, const double* b, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::minmag(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
modf(const sycl::half* a, sycl::half* y, sycl::half* z,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
modf(const float* a, float* y, float* z,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
modf(const double* a, double* y, double* z,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::modf(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mul(const sycl::half* a, const sycl::half* b, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mul(const float* a, const float* b, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mul(const double* a, const double* b, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mul(const std::complex<float>* a, const std::complex<float>* b,
    std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mul(const std::complex<double>* a, const std::complex<double>* b,
    std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mul(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mulbyconj(const std::complex<float>* a, const std::complex<float>* b,
          std::complex<float>* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
mulbyconj(const std::complex<double>* a, const std::complex<double>* b,
          std::complex<double>* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::mulbyconj(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nearbyint(const sycl::half* a, sycl::half* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nearbyint(const float* a, float* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nearbyint(const double* a, double* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nearbyint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nextafter(const sycl::half* a, const sycl::half* b, sycl::half* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nextafter(const float* a, const float* b, float* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
nextafter(const double* a, const double* b, double* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::nextafter(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow(const sycl::half* a, const sycl::half* b, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow(const float* a, const float* b, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow(const double* a, const double* b, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow2o3(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow2o3(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow2o3(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow2o3(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow3o2(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow3o2(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
pow3o2(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::pow3o2(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powr(const sycl::half* a, const sycl::half* b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powr(const float* a, const float* b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powr(const double* a, const double* b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powr(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powx(const sycl::half* a, sycl::half b, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powx(const float* a, float b, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
powx(const double* a, double b, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::powx(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
remainder(const sycl::half* a, const sycl::half* b, sycl::half* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
remainder(const float* a, const float* b, float* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
remainder(const double* a, const double* b, double* y,
          oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::remainder(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
rint(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
rint(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
rint(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::rint(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
round(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
round(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
round(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::round(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sin(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sin(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sin(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sin(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincos(const sycl::half* a, sycl::half* y, sycl::half* z,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincos(const float* a, float* y, float* z,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincos(const double* a, double* y, double* z,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincos(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincospi(const sycl::half* a, sycl::half* y, sycl::half* z,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincospi(const float* a, float* y, float* z,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sincospi(const double* a, double* y, double* z,
         oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sincospi(a, y, z, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sind(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sind(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sind(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sind(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinh(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinh(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinh(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinpi(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinpi(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sinpi(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sinpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqr(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqr(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqr(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqr(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqrt(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqrt(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqrt(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqrt(const std::complex<float>* a, std::complex<float>* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sqrt(const std::complex<double>* a, std::complex<double>* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sqrt(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sub(const sycl::half* a, const sycl::half* b, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sub(const float* a, const float* b, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sub(const double* a, const double* b, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sub(const std::complex<float>* a, const std::complex<float>* b,
    std::complex<float>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
sub(const std::complex<double>* a, const std::complex<double>* b,
    std::complex<double>* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::sub(a, b, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tan(const sycl::half* a, sycl::half* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tan(const float* a, float* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tan(const double* a, double* y,
    oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tan(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tand(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tand(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tand(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tand(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanh(const sycl::half* a, sycl::half* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanh(const float* a, float* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanh(const double* a, double* y,
     oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanh(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanpi(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanpi(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tanpi(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tanpi(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tgamma(const sycl::half* a, sycl::half* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tgamma(const float* a, float* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
tgamma(const double* a, double* y,
       oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::la:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::tgamma(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
trunc(const sycl::half* a, sycl::half* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
trunc(const float* a, float* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}
static inline oneapi::mkl::vm::status
trunc(const double* a, double* y,
      oneapi::mkl::vm::mode mode = oneapi::mkl::vm::mode::ha) {
  oneapi::mkl::vm::status r = oneapi::mkl::vm::status::computation_empty;
  switch (mode & oneapi::mkl::vm::mode::accuracy_mask) {
    default:
    case oneapi::mkl::vm::mode::ha:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ha);
      break;
    case oneapi::mkl::vm::mode::la:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::la);
      break;
    case oneapi::mkl::vm::mode::ep:
      r = detail::trunc(a, y, oneapi::mkl::vm::device::detail::mode::ep);
      break;
  } // switch
  return r;
}

} // namespace oneapi::mkl::vm::device::detail::rts

#endif // #ifndef ONEAPI_MKL_VM_DEVICE_RTS_HPP
