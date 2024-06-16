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

#ifndef _STATS_HPP__
#define _STATS_HPP__

#include <type_traits>
#include <vector>

#include <sycl/sycl.hpp>

#include "oneapi/mkl/export.hpp"
#include "oneapi/mkl/exceptions.hpp"

namespace oneapi {
namespace mkl {
namespace stats {

enum class method : std::int64_t {
    fast = 0x00000001,
    one_pass = 0x00000002
};


enum class layout : std::int64_t {
    row_major = 0x00010000,
    col_major = 0x00020000
};

template<layout ObservationsLayout = layout::row_major, typename Type = float*>
struct dataset {};

// Specialization for USM API
template<layout ObservationsLayout, typename Type>
struct dataset<ObservationsLayout, Type*> {
    static_assert(std::is_same<Type, float>::value | std::is_same<Type, double>::value,
        "oneMKL: stats/dataset: template type is not supported");

    // Constructor
    explicit dataset(std::int64_t n_dims_, std::int64_t n_observations_, Type* observations_,
                    Type* weights_ = nullptr, std::int64_t* indices_ = nullptr) :
                    n_dims(n_dims_), n_observations(n_observations_), observations(observations_),
                    weights(weights_), indices(indices_) {
        if(n_dims_ <= 0) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "number of dimensions <= 0");
        }
        if(n_observations_ <= 0) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "number of observations <= 0");
        }
        if(observations_ == nullptr) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "observations is nullptr");
        }
    };

    std::int64_t n_dims;
    std::int64_t n_observations;
    Type* observations;
    Type* weights = nullptr;
    std::int64_t* indices = nullptr;
    static constexpr oneapi::mkl::stats::layout layout = ObservationsLayout;
};

// Specialization for buffer-based API
template<layout ObservationsLayout, typename Type>
struct dataset<ObservationsLayout, sycl::buffer<Type, 1>> {
    static_assert(std::is_same<Type, float>::value | std::is_same<Type, double>::value,
        "oneMKL: stats/dataset: template type is not supported");

    // Constructor
    explicit dataset(std::int64_t n_dims_, std::int64_t n_observations_,
                    sycl::buffer<Type, 1> observations_, sycl::buffer<Type, 1> weights_ = {0},
                    sycl::buffer<std::int64_t, 1> indices_ = {0}) :
                    n_dims(n_dims_), n_observations(n_observations_), observations(observations_),
                    weights(weights_), indices(indices_) {
        if(n_dims_ <= 0) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "number of dimensions <= 0");
        }
        if(n_observations_ <= 0) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "number of observations <= 0");
        }
        if(observations_.size() == 0) {
            throw oneapi::mkl::invalid_argument("stats", "dataset", "observations is empty");
        }
    };

    std::int64_t n_dims;
    std::int64_t n_observations;
    sycl::buffer<Type, 1> observations;
    sycl::buffer<Type, 1> weights = {0};
    sycl::buffer<std::int64_t, 1> indices = {0};
    static constexpr oneapi::mkl::stats::layout layout = ObservationsLayout;
};

// Helper funtions to make dataset
template<layout ObservationsLayout = layout::row_major, typename Type>
dataset<ObservationsLayout, Type*> make_dataset(std::int64_t n_dims, std::int64_t n_observations,
                                   Type* observations, Type* weights = nullptr,
                                   std::int64_t* indices = nullptr) {
    return dataset<ObservationsLayout, Type*>(n_dims, n_observations, observations, weights, indices);
}


template<layout ObservationsLayout = layout::row_major, typename Type>
dataset<ObservationsLayout, sycl::buffer<Type, 1>> make_dataset(std::int64_t n_dims,
                                    std::int64_t n_observations,
                                    sycl::buffer<Type, 1> observations,
                                    sycl::buffer<Type, 1> weights = {0},
                                    sycl::buffer<std::int64_t, 1> indices = {0}) {
    return dataset<ObservationsLayout, sycl::buffer<Type, 1>>(n_dims, n_observations,
                                                        observations, weights, indices);
}

// Raw sum computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void raw_sum(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> sum,
    sycl::buffer<Type, 1> raw_sum_2 = {0},
    sycl::buffer<Type, 1> raw_sum_3 = {0},
    sycl::buffer<Type, 1> raw_sum_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event raw_sum(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* sum,
    Type* raw_sum_2 = nullptr,
    Type* raw_sum_3 = nullptr,
    Type* raw_sum_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Central sum computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void central_sum(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> central_sum_2,
    sycl::buffer<Type, 1> central_sum_3 = {0},
    sycl::buffer<Type, 1> central_sum_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event central_sum(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* central_sum_2,
    Type* central_sum_3 = nullptr,
    Type* central_sum_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Central sum with user mean
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void central_sum(sycl::queue& queue,
    sycl::buffer<Type, 1> mean,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> central_sum_2,
    sycl::buffer<Type, 1> central_sum_3 = {0},
    sycl::buffer<Type, 1> central_sum_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event central_sum(sycl::queue& queue,
    Type* mean,
    const dataset<ObservationsLayout, Type*>& data,
    Type* central_sum_2,
    Type* central_sum_3 = nullptr,
    Type* central_sum_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Raw moment
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void raw_moment(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> mean,
    sycl::buffer<Type, 1> raw_moment_2 = {0},
    sycl::buffer<Type, 1> raw_moment_3 = {0},
    sycl::buffer<Type, 1> raw_moment_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event raw_moment(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* mean,
    Type* raw_moment_2 = nullptr,
    Type* raw_moment_3 = nullptr,
    Type* raw_moment_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Central moment computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void central_moment(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> central_moment_2,
    sycl::buffer<Type, 1> central_moment_3 = {0},
    sycl::buffer<Type, 1> central_moment_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event central_moment(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* central_moment_2,
    Type* central_moment_3 = nullptr,
    Type* central_moment_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Central moment with user mean
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void central_moment(sycl::queue& queue,
    sycl::buffer<Type, 1> mean,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> central_moment_2,
    sycl::buffer<Type, 1> central_moment_3 = {0},
    sycl::buffer<Type, 1> central_moment_4 = {0});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event central_moment(sycl::queue& queue,
    Type* mean,
    const dataset<ObservationsLayout, Type*>& data,
    Type* central_moment_2,
    Type* central_moment_3 = nullptr,
    Type* central_moment_4 = nullptr,
    const std::vector<sycl::event> &dependencies = {});

// Mean computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void mean(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> mean);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event mean(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* mean,
    const std::vector<sycl::event> &dependencies = {});

// Variation computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void variation(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> variation);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event variation(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* variation,
    const std::vector<sycl::event> &dependencies = {});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
void variation(sycl::queue& queue,
    sycl::buffer<Type, 1> mean,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> variation);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event variation(sycl::queue& queue,
    Type* mean,
    const dataset<ObservationsLayout, Type*>& data,
    Type* variation,
    const std::vector<sycl::event> &dependencies = {});

// Skewness computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void skewness(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> skewness);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event skewness(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* skewness,
    const std::vector<sycl::event> &dependencies = {});

// Skewness computation for user-defined mean
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void skewness(sycl::queue& queue,
    sycl::buffer<Type, 1> mean,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> skewness);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event skewness(sycl::queue& queue,
    Type* mean,
    const dataset<ObservationsLayout, Type*>& data,
    Type* skewness,
    const std::vector<sycl::event> &dependencies = {});

// Kurtosis computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void kurtosis(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> kurtosis);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event kurtosis(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* kurtosis,
    const std::vector<sycl::event> &dependencies = {});

template<method Method = method::fast, typename Type, layout ObservationsLayout>
void kurtosis(sycl::queue& queue,
    sycl::buffer<Type, 1> mean,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> kurtosis);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event kurtosis(sycl::queue& queue,
    Type* mean,
    const dataset<ObservationsLayout, Type*>& data,
    Type* kurtosis,
    const std::vector<sycl::event> &dependencies = {});

// Min computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void min(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> min);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event min(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* min,
    const std::vector<sycl::event> &dependencies = {});

// Max computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void max(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> max);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event max(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* max,
    const std::vector<sycl::event> &dependencies = {});

// Min and Max computation
template<method Method = method::fast, typename Type, layout ObservationsLayout>
void min_max(sycl::queue& queue,
    const dataset<ObservationsLayout, sycl::buffer<Type, 1>>& data,
    sycl::buffer<Type, 1> min, sycl::buffer<Type, 1> max);

template<method Method = method::fast, typename Type, layout ObservationsLayout>
sycl::event min_max(sycl::queue& queue,
    const dataset<ObservationsLayout, Type*>& data,
    Type* min, Type* max,
    const std::vector<sycl::event> &dependencies = {});

} // stats
} // mkl
} // namespace oneapi

#endif // _STATS_HPP__
