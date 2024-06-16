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

#ifndef _MKL_RNG_DEVICE_ENGINE_HELPERS_HPP_
#define _MKL_RNG_DEVICE_ENGINE_HELPERS_HPP_

#include "oneapi/mkl/rng/device/detail/engine_helpers_base.hpp"

namespace oneapi::mkl::rng::device {

// PSEUDO-RANDOM NUMBER HOST-SIDE ENGINE HELPERS

template <typename EngineType>
class engine_accessor : detail::engine_accessor_base<EngineType> {
public:
    EngineType load(size_t id) const {
        return detail::engine_accessor_base<EngineType>::load(id);
    }

    void store(EngineType engine, size_t id) const {
        detail::engine_accessor_base<EngineType>::store(engine, id);
    }

private:
    engine_accessor(sycl::buffer<std::uint32_t, 1>& state_buf, sycl::handler& cgh)
            : detail::engine_accessor_base<EngineType>(state_buf, cgh) {}
    friend detail::engine_descriptor_base<EngineType>;
};

template <typename EngineType = philox4x32x10<>>
class engine_descriptor : detail::engine_descriptor_base<EngineType> {};

template <std::int32_t VecSize>
class engine_descriptor<philox4x32x10<VecSize>>
        : detail::engine_descriptor_base<philox4x32x10<VecSize>> {
public:
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, std::uint64_t seed,
                      std::uint64_t offset)
            : detail::engine_descriptor_base<philox4x32x10<VecSize>>(queue, range, seed, offset) {}

    template <typename InitEngineFunc>
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, InitEngineFunc func)
            : detail::engine_descriptor_base<philox4x32x10<VecSize>>(queue, range, func) {}

    auto get_access(sycl::handler& cgh) {
        return detail::engine_descriptor_base<philox4x32x10<VecSize>>::get_access(cgh);
    }
};

template <std::int32_t VecSize>
class engine_descriptor<mrg32k3a<VecSize>> : detail::engine_descriptor_base<mrg32k3a<VecSize>> {
public:
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, std::uint32_t seed,
                      std::uint64_t offset)
            : detail::engine_descriptor_base<mrg32k3a<VecSize>>(queue, range, seed, offset) {}

    template <typename InitEngineFunc>
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, InitEngineFunc func)
            : detail::engine_descriptor_base<mrg32k3a<VecSize>>(queue, range, func) {}

    auto get_access(sycl::handler& cgh) {
        return detail::engine_descriptor_base<mrg32k3a<VecSize>>::get_access(cgh);
    }
};

template <std::int32_t VecSize>
class engine_descriptor<mcg59<VecSize>> : detail::engine_descriptor_base<mcg59<VecSize>> {
public:
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, std::uint64_t seed,
                      std::uint64_t offset)
            : detail::engine_descriptor_base<mcg59<VecSize>>(queue, range, seed, offset) {}

    template <typename InitEngineFunc>
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, InitEngineFunc func)
            : detail::engine_descriptor_base<mcg59<VecSize>>(queue, range, func) {}

    auto get_access(sycl::handler& cgh) {
        return detail::engine_descriptor_base<mcg59<VecSize>>::get_access(cgh);
    }
};

template <std::int32_t VecSize>
class engine_descriptor<mcg31m1<VecSize>> : detail::engine_descriptor_base<mcg31m1<VecSize>> {
public:
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, std::uint32_t seed,
                      std::uint64_t offset)
            : detail::engine_descriptor_base<mcg31m1<VecSize>>(queue, range, seed, offset) {}

    template <typename InitEngineFunc>
    engine_descriptor(sycl::queue& queue, sycl::range<1> range, InitEngineFunc func)
            : detail::engine_descriptor_base<mcg31m1<VecSize>>(queue, range, func) {}

    auto get_access(sycl::handler& cgh) {
        return detail::engine_descriptor_base<mcg31m1<VecSize>>::get_access(cgh);
    }
};

} // namespace oneapi::mkl::rng::device

#endif // _MKL_RNG_DEVICE_ENGINE_HELPERS_HPP_
