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

#ifndef _MKL_EXCEPTIONS_HPP__
#define _MKL_EXCEPTIONS_HPP__

#include <exception>
#include <string>
#include <sycl/sycl.hpp>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wweak-vtables"

namespace oneapi {
namespace mkl {
    class exception : public std::exception {
        std::string msg_;
        public:
            exception(const std::string &domain = "", const std::string &function = "", const std::string &info = "") : std::exception() {
                msg_ = "oneapi::mkl";

                if (0 != domain.length() && 0 != function.length()) {
                    msg_ += "::" + domain + "::" + function;
                } else if (0 != domain.length() && 0 == function.length()) {
                    msg_ += "::" + domain;
                } else if (0 == domain.length() && 0 != function.length()) {
                    msg_ += "::" + function;
                }
                if (0 != info.length()) { msg_ += ": " + info; }
            }

            const char* what() const noexcept override {
                return msg_.c_str();
            }
    };

    class unsupported_device : public oneapi::mkl::exception {
        public:
            unsupported_device(const std::string &domain, const std::string &function, const sycl::device &device)
                : oneapi::mkl::exception(domain, function, "unsupported device: "+device.get_info<sycl::info::device::name>()) {
            }
    };

    class host_bad_alloc : public oneapi::mkl::exception {
        public:
            host_bad_alloc(const std::string &domain, const std::string &function)
                : oneapi::mkl::exception(domain, function, "cannot allocate memory on host") {
            }
    };

    class device_bad_alloc : public oneapi::mkl::exception {
        public:
            device_bad_alloc(const std::string &domain, const std::string &function, const sycl::device &device)
                : oneapi::mkl::exception(domain, function, "cannot allocate memory on "+device.get_info<sycl::info::device::name>()) {
            }
    };

    class unimplemented : public oneapi::mkl::exception {
        public:
            unimplemented(const std::string &domain, const std::string &function, const std::string &info = "")
                : oneapi::mkl::exception(domain, function, "unimplemented functionality"+((info.length() !=0) ? (": "+info) : "")) {
            }
    };

    class invalid_argument : public oneapi::mkl::exception {
        public:
            invalid_argument(const std::string &domain, const std::string &function, const std::string &info = "")
                : oneapi::mkl::exception(domain, function, "invalid argument"+((info.length() !=0) ? (": "+info) : "")) {
            }
    };

    class uninitialized : public oneapi::mkl::exception {
        public:
            uninitialized(const std::string &domain, const std::string &function, const std::string &info = "")
                : oneapi::mkl::exception(domain, function, "uninitialized object"+((info.length() !=0) ? (": "+info) : "")) {
            }
    };

    class computation_error : public oneapi::mkl::exception {
        public:
            computation_error(const std::string &domain, const std::string &function, const std::string &info = "")
                : oneapi::mkl::exception(domain, function, "computation error"+((info.length() != 0) ? (": "+info) : "")) {
            }
    };

    class batch_error : public oneapi::mkl::exception {
        public:
            batch_error(const std::string &domain, const std::string &function, const std::string &info = "")
                : oneapi::mkl::exception(domain, function, "batch error"+((info.length() != 0) ? (": "+info) : "")) {
            }
    };

} // namespace mkl
} // namespace oneapi

#pragma clang diagnostic pop

#endif // _MKL_EXCEPTIONS_HPP__

