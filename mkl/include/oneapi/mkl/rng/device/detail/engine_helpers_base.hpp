/*******************************************************************************
* Copyright 2023 Intel Corporation
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

#ifndef _MKL_RNG_DEVICE_ENGINE_HELPERS_BASE_HPP_
#define _MKL_RNG_DEVICE_ENGINE_HELPERS_BASE_HPP_

#include <sycl/sycl.hpp>

#include "oneapi/mkl/rng/device/detail/engine_base.hpp"

namespace oneapi::mkl::rng::device {

template <typename EngineType>
class engine_accessor;

namespace detail {

template <typename EngineType>
class init_kernel {};

template <typename EngineType>
class init_kernel_ex {};

template <typename EngineType>
class engine_descriptor_base {};

template <typename EngineType>
class engine_accessor_base {};

} // namespace detail
} // namespace oneapi::mkl::rng::device

#include "oneapi/mkl/rng/device/detail/philox4x32x10_helpers_impl.hpp"
#include "oneapi/mkl/rng/device/detail/mrg32k3a_helpers_impl.hpp"
#include "oneapi/mkl/rng/device/detail/mcg31m1_helpers_impl.hpp"
#include "oneapi/mkl/rng/device/detail/mcg59_helpers_impl.hpp"

#endif // _MKL_RNG_DEVICE_ENGINE_HELPERS_BASE_HPP_
