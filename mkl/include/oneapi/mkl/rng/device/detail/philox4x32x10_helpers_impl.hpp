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

#ifndef _MKL_RNG_DEVICE_PHILOX4X32X10_HELPERS_IMPL_HPP_
#define _MKL_RNG_DEVICE_PHILOX4X32X10_HELPERS_IMPL_HPP_

#include "oneapi/mkl/rng/device/detail/philox4x32x10_impl.hpp"

namespace oneapi::mkl::rng::device::detail {
namespace philox4x32x10_impl {

template <std::int32_t VecSize>
static inline void init(
    engine_state<oneapi::mkl::rng::device::philox4x32x10<VecSize>>& state, std::size_t id,
    const sycl::accessor<std::uint32_t, 1, sycl::access::mode::read_write>& accessor) {
    std::size_t num_elements_acc =
        sizeof(engine_state<oneapi::mkl::rng::device::philox4x32x10<VecSize>>) /
        sizeof(std::uint32_t);
    state.key[0] = accessor[id * num_elements_acc];
    state.key[1] = accessor[id * num_elements_acc + 1];
    state.counter[0] = accessor[id * num_elements_acc + 2];
    state.counter[1] = accessor[id * num_elements_acc + 3];
    state.counter[2] = accessor[id * num_elements_acc + 4];
    state.counter[3] = accessor[id * num_elements_acc + 5];

    state.part = accessor[id * num_elements_acc + 6];

    state.result[0] = accessor[id * num_elements_acc + 7];
    state.result[1] = accessor[id * num_elements_acc + 8];
    state.result[2] = accessor[id * num_elements_acc + 9];
    state.result[3] = accessor[id * num_elements_acc + 10];
}

template <std::int32_t VecSize>
static inline void store(
    engine_state<oneapi::mkl::rng::device::philox4x32x10<VecSize>>& state, std::size_t id,
    const sycl::accessor<std::uint32_t, 1, sycl::access::mode::read_write>& accessor) {
    std::size_t num_elements_acc =
        sizeof(engine_state<oneapi::mkl::rng::device::philox4x32x10<VecSize>>) /
        sizeof(std::uint32_t);
    accessor[id * num_elements_acc] = state.key[0];
    accessor[id * num_elements_acc + 1] = state.key[1];
    accessor[id * num_elements_acc + 2] = state.counter[0];
    accessor[id * num_elements_acc + 3] = state.counter[1];
    accessor[id * num_elements_acc + 4] = state.counter[2];
    accessor[id * num_elements_acc + 5] = state.counter[3];
    accessor[id * num_elements_acc + 6] = state.part;
    accessor[id * num_elements_acc + 7] = state.result[0];
    accessor[id * num_elements_acc + 8] = state.result[1];
    accessor[id * num_elements_acc + 9] = state.result[2];
    accessor[id * num_elements_acc + 10] = state.result[3];
}

} // namespace philox4x32x10_impl

template <std::int32_t VecSize>
class engine_accessor_base<oneapi::mkl::rng::device::philox4x32x10<VecSize>> {
public:
    engine_accessor_base(sycl::buffer<std::uint32_t, 1>& state_buf, sycl::handler& cgh)
            : states_accessor_(state_buf, cgh) {}

    oneapi::mkl::rng::device::philox4x32x10<VecSize> load(std::size_t id) const {
        oneapi::mkl::rng::device::philox4x32x10<VecSize> engine;
        philox4x32x10_impl::init(engine.state_, id, states_accessor_);
        return engine;
    }

    void store(oneapi::mkl::rng::device::philox4x32x10<VecSize>& engine, std::size_t id) const {
        philox4x32x10_impl::store(engine.state_, id, states_accessor_);
    }

protected:
    sycl::accessor<std::uint32_t, 1, sycl::access::mode::read_write> states_accessor_;
};

template <std::int32_t VecSize>
class engine_descriptor_base<oneapi::mkl::rng::device::philox4x32x10<VecSize>> {
public:
    using engine_type = oneapi::mkl::rng::device::philox4x32x10<VecSize>;

    using accessor_type =
        oneapi::mkl::rng::device::engine_accessor<oneapi::mkl::rng::device::philox4x32x10<VecSize>>;

    engine_descriptor_base(sycl::queue& queue, sycl::range<1> range, std::uint64_t seed,
                           std::uint64_t offset)
            : states_buffer_(range.get(0) * sizeof(engine_state<engine_type>) /
                             sizeof(std::uint32_t)) {
        queue.submit([&](sycl::handler& cgh) {
            accessor_type states_accessor(states_buffer_, cgh);

            cgh.parallel_for<class init_kernel<engine_type>>
                (range, [=](sycl::item<1> item) {
                std::size_t id = item.get_id(0);
                oneapi::mkl::rng::device::philox4x32x10<VecSize> engine(seed, offset* id);
                states_accessor.store(engine, id);
            });
        });
    }

    template <typename InitEngineFunc>
    engine_descriptor_base(sycl::queue& queue, sycl::range<1> range, InitEngineFunc func)
            : states_buffer_(range.get(0) * sizeof(engine_state<engine_type>) /
                             sizeof(std::uint32_t)) {
        queue.submit([&](sycl::handler& cgh) {
            accessor_type states_accessor(states_buffer_, cgh);

            cgh.parallel_for<class init_kernel_ex<engine_type>>
                (range, [=](sycl::item<1> item) {
                std::size_t id = item.get_id(0);
                states_accessor.store(func(item), id);
            });
        });
    }

    accessor_type get_access(sycl::handler& cgh) {
        return accessor_type{ states_buffer_, cgh };
    }

protected:
    sycl::buffer<std::uint32_t, 1> states_buffer_;
};

} // namespace oneapi::mkl::rng::device::detail

#endif // _MKL_RNG_DEVICE_PHILOX4X32X10_HELPERS_IMPL_HPP_
