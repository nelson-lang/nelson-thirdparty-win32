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

#ifndef _ONEAPI_MKL_VM_DECLS_HPP_
#define _ONEAPI_MKL_VM_DECLS_HPP_ 1

#include <complex>
#include <cstdint>
#include <exception>

#include <sycl/sycl.hpp>

#ifdef MKL_BUILD_DLL
#define ONEAPI_MKL_VM_EXPORT __declspec(dllexport)
#define ONEAPI_MKL_VM_EXPORT_CPP __declspec(dllexport)
#else
#define ONEAPI_MKL_VM_EXPORT extern
#define ONEAPI_MKL_VM_EXPORT_CPP
#endif

namespace oneapi {
namespace mkl {

#ifndef _ONEAPI_MKL_SLICE_
#define _ONEAPI_MKL_SLICE_ 1
struct slice {
  size_t start;
  size_t size;
  int64_t stride;

  constexpr slice() : start(0), size(0), stride(0) {}
  constexpr slice(slice const& rhs) = default;

  constexpr slice(size_t _start, size_t _size, int64_t _stride)
      : start(_start), size(_size), stride(_stride) {}
};     // struct slice
#endif // #ifndef _ONEAPI_MKL_SLICE_

namespace vm {

using event_vector = std::vector<sycl::event>;

namespace enums {
enum class mode : std::uint32_t {
  not_defined = 0x0,

  ha = 0x4,
  la = 0xC,
  ep = 0xF,
  accuracy_mask = 0xF,

  global_status_report = 0x100,
  global_status_quiet = 0x200,
  global_status_mask = 0x300,

  slice_normal = 0x1000,
  slice_minimum = 0x2000,
  slice_cyclic = 0x4000,
  slice_mask = 0x7000,

  badarg_exception = 0x10000,
  badarg_quiet = 0x20000,
  badarg_mask = 0x30000,

  fallback_enabled = 0x100000,
  fallback_warning = 0x200000,
  fallback_exception = 0x400000,
  fallback_permissive = 0x800000,
  fallback_mask = 0xF00000,

  verbose_quiet = 0x1000000,
  verbose_submit = 0x2000000,
  verbose_call = 0x4000000,
  verbose_mask = 0x7000000,

  default_mode = (ha | global_status_quiet | slice_normal | badarg_exception |
                  fallback_enabled | verbose_quiet)
};

enum class status : std::uint32_t {
  not_defined = 0x0,
  success = 0x0,
  errdom = 0x1,
  sing = 0x2,
  overflow = 0x4,
  underflow = 0x8,
  accuracy_warning = 0x80,
  fix_all = 0xFF,

  computation_empty = 0x100
};

template <typename T> struct bits_enabled {
  static constexpr bool enabled = false;
};

template <> struct bits_enabled<mode> { static constexpr bool enabled = true; };

template <> struct bits_enabled<status> {
  static constexpr bool enabled = true;
};

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type
operator|(T lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) |
           static_cast<typename std::underlying_type_t<T>>(rhs);
  return static_cast<T>(r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type&
operator|=(T& lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) |
           static_cast<typename std::underlying_type_t<T>>(rhs);
  lhs = static_cast<T>(r);
  return lhs;
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type
operator&(T lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) &
           static_cast<typename std::underlying_type_t<T>>(rhs);
  return static_cast<T>(r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type
operator&=(T& lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) &
           static_cast<typename std::underlying_type_t<T>>(rhs);
  lhs = static_cast<T>(r);
  return lhs;
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type
operator^(T lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) ^
           static_cast<typename std::underlying_type_t<T>>(rhs);
  return static_cast<T>(r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, T>::type
operator^=(T& lhs, T rhs) {
  auto r = static_cast<typename std::underlying_type_t<T>>(lhs) ^
           static_cast<typename std::underlying_type_t<T>>(rhs);
  lhs = static_cast<T>(r);
  return lhs;
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, bool>::type
operator!(T v) {
  return (0 == static_cast<typename std::underlying_type_t<T>>(v));
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, bool>::type
has_none(T v, T mask) {
  auto r = static_cast<typename std::underlying_type_t<T>>(v) &
           static_cast<typename std::underlying_type_t<T>>(mask);
  return (0 == r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, bool>::type
has_any(T v, T mask) {
  auto r = static_cast<typename std::underlying_type_t<T>>(v) &
           static_cast<typename std::underlying_type_t<T>>(mask);
  return (0 != r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, bool>::type
has_all(T v, T mask) {
  auto r = static_cast<typename std::underlying_type_t<T>>(v) &
           static_cast<typename std::underlying_type_t<T>>(mask);
  return (static_cast<typename std::underlying_type_t<T>>(mask) == r);
}

template <typename T>
constexpr typename std::enable_if<bits_enabled<T>::enabled, bool>::type
has_only(T v, T mask) {
  auto r = static_cast<typename std::underlying_type_t<T>>(v) ^
           static_cast<typename std::underlying_type_t<T>>(mask);
  return (0 == r);
}
} // namespace enums

using enums::mode;
using enums::status;

namespace detail {
using std::int64_t;
namespace one_vm = oneapi::mkl::vm;

struct ONEAPI_MKL_VM_EXPORT_CPP error_handler_base {
  virtual ~error_handler_base() {}
};

template <typename T>
struct ONEAPI_MKL_VM_EXPORT_CPP error_handler : public error_handler_base {
  bool enabled_;
  bool is_usm_;

  sycl::buffer<one_vm::status, 1> buf_status_;
  one_vm::status* usm_status_;
  std::int64_t len_;

  one_vm::status status_to_fix_;
  T fixup_value_;
  bool copy_sign_;

  error_handler()
      : enabled_{false}, is_usm_{false},

        buf_status_{sycl::buffer<one_vm::status, 1>(1)}, usm_status_{nullptr},
        len_{0}, status_to_fix_{one_vm::status::not_defined}, fixup_value_{T{}},
        copy_sign_{false} {}

  error_handler(one_vm::status status_to_fix, T fixup_value,
                bool copy_sign = false)
      : enabled_{true}, is_usm_{false},

        buf_status_{sycl::buffer<one_vm::status, 1>(1)},
        usm_status_{nullptr}, len_{0}, status_to_fix_{status_to_fix},
        fixup_value_{fixup_value}, copy_sign_{copy_sign} {}

  error_handler(one_vm::status* array, std::int64_t len = 1,
                one_vm::status status_to_fix = one_vm::status::not_defined,
                T fixup_value = {}, bool copy_sign = false)
      : enabled_{true}, is_usm_{true},

        buf_status_{sycl::buffer<one_vm::status, 1>(1)},
        usm_status_{array}, len_{len}, status_to_fix_{status_to_fix},
        fixup_value_{fixup_value}, copy_sign_{copy_sign} {}

  error_handler(sycl::buffer<one_vm::status, 1>& buf, std::int64_t len = 1,
                one_vm::status status_to_fix = one_vm::status::not_defined,
                T fixup_value = {}, bool copy_sign = false)
      : enabled_{true}, is_usm_{false},

        buf_status_{buf}, usm_status_{nullptr}, len_{len},
        status_to_fix_{status_to_fix}, fixup_value_{fixup_value},
        copy_sign_{copy_sign} {}
}; // struct error_handler

} // namespace detail

using detail::error_handler;

// Service functions
ONEAPI_MKL_VM_EXPORT oneapi::mkl::vm::mode get_mode(sycl::queue& queue);
ONEAPI_MKL_VM_EXPORT oneapi::mkl::vm::mode
set_mode(sycl::queue& queue, oneapi::mkl::vm::mode new_mode);

ONEAPI_MKL_VM_EXPORT oneapi::mkl::vm::status get_status(sycl::queue& queue);
ONEAPI_MKL_VM_EXPORT oneapi::mkl::vm::status
set_status(sycl::queue& queue, oneapi::mkl::vm::status new_status);
ONEAPI_MKL_VM_EXPORT oneapi::mkl::vm::status clear_status(sycl::queue& queue);

} // namespace vm
} // namespace mkl
} // namespace oneapi

#endif // ifndef _ONEAPI_MKL_VM_DECLS_HPP_
