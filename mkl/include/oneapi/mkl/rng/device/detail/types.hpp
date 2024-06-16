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

#ifndef _MKL_RNG_DETAIL_DETAIL_TYPES_HPP_
#define _MKL_RNG_DETAIL_DETAIL_TYPES_HPP_

#include <sycl/sycl.hpp>

namespace oneapi {
namespace mkl {
namespace rng {
namespace device {

namespace detail {

// Type of device
namespace device_type {
struct generic {}; // currently only generic DPC++ version is supported
} // namespace device_type

// internal structure to specify state of engine for each device
template <typename EngineType, typename DeviceType>
struct engine_state_device {};

template <typename EngineType>
union engine_state {};

typedef struct {
    std::uint32_t hex[2];
} dp_struct_t;

typedef struct {
    std::uint32_t hex[1];
} sp_struct_t;

} // namespace detail
} // namespace device
} // namespace rng
} // namespace mkl
} // namespace oneapi

#endif // _MKL_RNG_DETAIL_DETAIL_TYPES_HPP_
