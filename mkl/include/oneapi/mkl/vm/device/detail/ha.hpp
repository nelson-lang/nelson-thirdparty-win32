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

#ifndef ONEAPI_MKL_VM_DEVICE_HA_HPP
#define ONEAPI_MKL_VM_DEVICE_HA_HPP 1

#include "oneapi/mkl/vm/device/detail/decls.hpp"

#include "oneapi/mkl/vm/device/detail/dispatch.hpp"
#include "oneapi/mkl/vm/device/detail/scalar.hpp"

namespace oneapi::mkl::vm::device::detail::ha {

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAbs, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
abs(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAbs, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAbs, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAcos, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
acos(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAcos, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAcos, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAcosh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
acosh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAcosh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAcosh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kAcospi, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
acospi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAcospi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAcospi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAdd, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
add(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAdd, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAdd, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kArg, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
arg(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kArg, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kArg, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAsin, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
asin(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAsin, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAsin, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAsinh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
asinh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAsinh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAsinh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kAsinpi, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
asinpi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAsinpi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAsinpi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAtan, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
atan(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAtan, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAtan, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAtan2, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
atan2(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAtan2, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAtan2, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kAtan2pi, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
atan2pi(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAtan2pi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAtan2pi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kAtanh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
atanh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAtanh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAtanh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kAtanpi, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
atanpi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kAtanpi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kAtanpi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCbrt, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cbrt(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCbrt, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCbrt, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kCdfnorm, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
cdfnorm(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCdfnorm, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCdfnorm, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kCdfnorminv, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
cdfnorminv(const Tin* a, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kCdfnorminv, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kCdfnorminv, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCeil, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
ceil(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCeil, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCeil, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCis, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cis(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCis, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCis, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kConj, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
conj(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kConj, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kConj, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kCopysign, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
copysign(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kCopysign, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kCopysign, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCos, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cos(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCos, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCos, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCosd, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cosd(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCosd, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCosd, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCosh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cosh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCosh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCosh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kCospi, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
cospi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kCospi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kCospi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kDiv, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
div(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kDiv, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kDiv, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kErf, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
erf(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kErf, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kErf, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kErfc, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
erfc(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kErfc, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kErfc, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kErfc, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
erfcx(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kErfc, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kErfc, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kErfcinv, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
erfcinv(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kErfcinv, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kErfcinv, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kErfinv, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
erfinv(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kErfinv, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kErfinv, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kExp, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
exp(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kExp, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kExp, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kExp10, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
exp10(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kExp10, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kExp10, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kExp2, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
exp2(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kExp2, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kExp2, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kExpm1, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
expm1(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kExpm1, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kExpm1, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFdim, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
fdim(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFdim, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFdim, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFloor, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
floor(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFloor, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFloor, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFmax, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
fmax(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFmax, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFmax, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFmin, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
fmin(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFmin, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFmin, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFmod, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
fmod(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFmod, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFmod, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kFrac, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
frac(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kFrac, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kFrac, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kHypot, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
hypot(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kHypot, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kHypot, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kInv, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
inv(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kInv, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kInv, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kInvcbrt, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
invcbrt(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kInvcbrt, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kInvcbrt, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kInvsqrt, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
invsqrt(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kInvsqrt, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kInvsqrt, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kLgamma, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
lgamma(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLgamma, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLgamma, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kLn, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
ln(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLn, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLn, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kLog10, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
log10(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLog10, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLog10, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kLog1p, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
log1p(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLog1p, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLog1p, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kLog2, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
log2(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLog2, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLog2, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kLogb, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
logb(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kLogb, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kLogb, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kMaxmag, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
maxmag(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kMaxmag, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kMaxmag, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kMinmag, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
minmag(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kMinmag, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kMinmag, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kModf, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
modf(const Tin* a, Tout* y, Tout* z) {
  constexpr auto cts =
      CompileTimeSelector<Function::kModf, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kModf, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y, z);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kMul, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
mul(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kMul, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kMul, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kMulbyconj, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
mulbyconj(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kMulbyconj, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kMulbyconj, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kNearbyint, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
nearbyint(const Tin* a, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kNearbyint, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kNearbyint, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kNextafter, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
nextafter(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kNextafter, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kNextafter, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kPow, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
pow(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kPow, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kPow, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kPow2o3, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
pow2o3(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kPow2o3, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kPow2o3, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kPow3o2, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
pow3o2(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kPow3o2, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kPow3o2, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kPowr, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
powr(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kPowr, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kPowr, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kPowx, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
powx(const Tin* a, const Tin b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kPowx, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kPowx, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kRemainder, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
remainder(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts = CompileTimeSelector<Function::kRemainder, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kRemainder, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kRint, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
rint(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kRint, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kRint, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kRound, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
round(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kRound, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kRound, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSin, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sin(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSin, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSin, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kSincos, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
sincos(const Tin* a, Tout* y, Tout* z) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSincos, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSincos, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y, z);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kSincospi, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
sincospi(const Tin* a, Tout* y, Tout* z) {
  constexpr auto cts = CompileTimeSelector<Function::kSincospi, Tin, Tout,
                                           Accuracy::kHA>::result;
  Evaluator<Function::kSincospi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y, z);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSind, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sind(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSind, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSind, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSinh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sinh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSinh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSinh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSinpi, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sinpi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSinpi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSinpi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSqr, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sqr(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSqr, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSqr, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSqrt, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sqrt(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSqrt, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSqrt, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kSub, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
sub(const Tin* a, const Tin* b, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kSub, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kSub, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, b, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kTan, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
tan(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTan, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTan, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kTand, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
tand(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTand, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTand, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kTanh, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
tanh(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTanh, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTanh, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kTanpi, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
tanpi(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTanpi, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTanpi, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<
    ExistsAtAll<Function::kTgamma, Tin, Tout, Accuracy::kHA>,
    oneapi::mkl::vm::status>::type
tgamma(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTgamma, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTgamma, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

template <typename Tin, typename Tout>
typename std::enable_if<ExistsAtAll<Function::kTrunc, Tin, Tout, Accuracy::kHA>,
                        oneapi::mkl::vm::status>::type
trunc(const Tin* a, Tout* y) {
  constexpr auto cts =
      CompileTimeSelector<Function::kTrunc, Tin, Tout, Accuracy::kHA>::result;
  Evaluator<Function::kTrunc, Tin, Tout, cts.first, cts.second> EV;
  return EV(a, y);
}

} // namespace oneapi::mkl::vm::device::detail::ha

#endif // #ifndef ONEAPI_MKL_VM_DEVICE_HA_HPP
