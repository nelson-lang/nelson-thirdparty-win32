/*******************************************************************************
* Copyright 2019-2022 Intel Corporation.
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

#ifndef __MKL_RNG_ENGINE_BASE_HPP_
#define __MKL_RNG_ENGINE_BASE_HPP_

#include <memory>

#include "sycl/sycl.hpp"

namespace oneapi {
namespace mkl {
namespace rng {
namespace detail {

template <typename Engine>
class engine_base_impl;

template <typename Engine>
class engine_base {
public:
    engine_base(sycl::queue queue) : queue_(queue) {}
    sycl::queue& get_queue() {
        return queue_;
    }

protected:
    sycl::queue queue_;
    std::unique_ptr<engine_base_impl<Engine>> impl_;
};

} // namespace detail
} // namespace rng
} // namespace mkl
} // namespace oneapi

#endif // __MKL_RNG_ENGINE_BASE_HPP_
