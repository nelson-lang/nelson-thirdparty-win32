/*******************************************************************************
* Copyright 2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#ifndef _MKL_RNG_DEVICE_FUNCTIONS_HPP_
#define _MKL_RNG_DEVICE_FUNCTIONS_HPP_

#include <sycl/sycl.hpp>

#include "oneapi/mkl/rng/device/detail/distribution_base.hpp"

namespace oneapi::mkl::rng::device {

// GENERATE FUNCTIONS

template <typename Distr, typename Engine>
auto generate(Distr& distr, Engine& engine) ->
    typename std::conditional<Engine::vec_size == 1, typename Distr::result_type,
                              sycl::vec<typename Distr::result_type, Engine::vec_size>>::type {
    return distr.generate(engine);
}

template <typename Distr, typename Engine>
typename Distr::result_type generate_single(Distr& distr, Engine& engine) {
    static_assert(Engine::vec_size > 1,
                  "oneMKL: rng/generate_single: function works for engines with vec_size > 1");
    return distr.generate_single(engine);
}

// SERVICE FUNCTIONS

template <typename Engine>
void skip_ahead(Engine& engine, std::uint64_t num_to_skip) {
    engine.skip_ahead(num_to_skip);
}

template <typename Engine>
void skip_ahead(Engine& engine, std::initializer_list<std::uint64_t> num_to_skip) {
    engine.skip_ahead(num_to_skip);
}

} // namespace oneapi::mkl::rng::device

#endif // _MKL_RNG_DEVICE_FUNCTIONS_HPP_
