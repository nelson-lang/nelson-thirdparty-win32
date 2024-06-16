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

#ifndef ONEAPI_MKL_VM_DEVICE_DETAIL_DECLS_HPP
#define ONEAPI_MKL_VM_DEVICE_DETAIL_DECLS_HPP 1

namespace oneapi::mkl::vm::device::detail {

enum class Accuracy : int {
  kNotAvailable = -1,
  kNA = kNotAvailable,

  kNotSpecified = 0,
  kNS = kNotSpecified,

  kCorrectlyRounded = 15,
  kCR = kCorrectlyRounded,

  kHigh = 12,
  kHA = kHigh,

  kLower = 8,
  kLA = kLower,

  kEnhancedPerformance = 1,
  kEP = kEnhancedPerformance,
};

struct AccuracyHA {
  static constexpr Accuracy a = Accuracy::kHigh;
};
struct AccuracyLA {
  static constexpr Accuracy a = Accuracy::kLower;
};
struct AccuracyEP {
  static constexpr Accuracy a = Accuracy::kEnhancedPerformance;
};

namespace mode {
constexpr AccuracyHA ha;
constexpr AccuracyLA la;
constexpr AccuracyEP ep;
constexpr AccuracyHA not_defined;
} // namespace mode

constexpr AccuracyHA DefaultAccuracy;

enum class Feature : int {
  kNotAvailable = -1,
  kNA = kNotAvailable,

  kNotSpecified = 0,
  kNS = kNotSpecified,

  kGeneric = 1,
  kGE = kGeneric,

  kTailored = 2,
  kTA = kTailored,

  kDoublePrecisionRequired = 3,
  kDR = kDoublePrecisionRequired,

  kSinglePrecisionOnly = 4,
  kSO = kSinglePrecisionOnly,
}; // enum Feature

} // namespace oneapi::mkl::vm::device::detail

#endif // #ifndef ONEAPI_MKL_VM_DEVICE_DETAIL_DECLS_HPP
