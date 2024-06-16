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

#ifndef _DFTI_HPP_
#define _DFTI_HPP_

#include <cinttypes>    // std::int64_t
#include <vector>       // std::vector
#include <sycl/sycl.hpp>  // sycl::
#include "mkl_dfti.h"   // DFTI_DESCRIPTOR_HANDLE

typedef struct SYCL_DFTI_DESCRIPTOR* SYCL_DFTI_DESCRIPTOR_HANDLE;

namespace oneapi {
namespace mkl {
namespace dft {

enum class precision {
    SINGLE = DFTI_SINGLE,
    DOUBLE = DFTI_DOUBLE
};

enum class domain {
    REAL = DFTI_REAL,
    COMPLEX = DFTI_COMPLEX
};

enum class config_param {
    FORWARD_DOMAIN          = DFTI_FORWARD_DOMAIN,
    DIMENSION               = DFTI_DIMENSION,
    LENGTHS                 = DFTI_LENGTHS,
    PRECISION               = DFTI_PRECISION,
    FORWARD_SCALE           = DFTI_FORWARD_SCALE,
    BACKWARD_SCALE          = DFTI_BACKWARD_SCALE,
    NUMBER_OF_TRANSFORMS    = DFTI_NUMBER_OF_TRANSFORMS,
    COMPLEX_STORAGE         = DFTI_COMPLEX_STORAGE,
    REAL_STORAGE            = DFTI_REAL_STORAGE,
    CONJUGATE_EVEN_STORAGE  = DFTI_CONJUGATE_EVEN_STORAGE,
    PLACEMENT               = DFTI_PLACEMENT,
    INPUT_STRIDES           = DFTI_INPUT_STRIDES,
    OUTPUT_STRIDES          = DFTI_OUTPUT_STRIDES,
    FWD_DISTANCE            = DFTI_FWD_DISTANCE,
    BWD_DISTANCE            = DFTI_BWD_DISTANCE,
    WORKSPACE               = DFTI_WORKSPACE,
    ORDERING                = DFTI_ORDERING,
    TRANSPOSE               = DFTI_TRANSPOSE,
    PACKED_FORMAT           = DFTI_PACKED_FORMAT,
    COMMIT_STATUS           = DFTI_COMMIT_STATUS,
    VERSION                 = DFTI_VERSION,
    NUMBER_OF_USER_THREADS  = DFTI_NUMBER_OF_USER_THREADS,
    THREAD_LIMIT            = DFTI_THREAD_LIMIT,
    DESTROY_INPUT           = DFTI_DESTROY_INPUT,
    WORKSPACE_ESTIMATE_BYTES,
    WORKSPACE_BYTES,
    FWD_STRIDES,
    BWD_STRIDES
};

enum class config_value {
    WORKSPACE_INTERNAL,
    WORKSPACE_EXTERNAL
};

// Compute functions which will be friends with the descriptor class
template<typename descriptor_type, typename data_type>
void compute_forward(
    descriptor_type &desc,
    sycl::buffer<data_type, 1> &inout);

template<typename descriptor_type, typename input_type, typename output_type>
void compute_forward(
    descriptor_type &desc,
    sycl::buffer<input_type, 1> &in,
    sycl::buffer<output_type, 1> &out);

template<typename descriptor_type, typename data_type>
void compute_backward(
    descriptor_type &desc,
    sycl::buffer<data_type, 1> &inout);

template<typename descriptor_type, typename input_type, typename output_type>
void compute_backward(
    descriptor_type &desc,
    sycl::buffer<input_type, 1> &in,
    sycl::buffer<output_type, 1> &out);

template <typename descriptor_type, typename data_type>
sycl::event compute_forward(
    descriptor_type &desc,
    data_type *inout,
    const std::vector<sycl::event> &dependencies = {});

template<typename descriptor_type, typename input_type, typename output_type>
sycl::event compute_forward(
    descriptor_type &desc,
    input_type *in,
    output_type *out,
    const std::vector<sycl::event> &dependencies = {});

template <typename descriptor_type, typename data_type>
sycl::event compute_backward(
    descriptor_type &desc,
    data_type *inout,
    const std::vector<sycl::event> &dependencies = {});

template<typename descriptor_type, typename input_type, typename output_type>
sycl::event compute_backward(
    descriptor_type &desc,
    input_type *in,
    output_type *out,
    const std::vector<sycl::event> &dependencies = {});

template <precision prec, domain dom>
class descriptor {
 public:
    // initializes the FFT description for a multi-dimensional FFT
    descriptor(std::vector<std::int64_t> dimensions);
    // initializes the FFT description for a one-dimensional FFT
    descriptor(std::int64_t length);
    ~descriptor();
    descriptor(const descriptor&) = delete;
    descriptor& operator=(const descriptor&) = delete;

    void commit(sycl::queue &in);

    // Friend compute functions
    // in place forward computation; buffer API
    template <typename descriptor_type, typename data_type>
    friend void compute_forward(
        descriptor_type &desc,
        sycl::buffer<data_type, 1> &inout);
    // out of place forward computation; buffer API
    template<typename descriptor_type, typename input_type, typename output_type>
    friend void compute_forward(
        descriptor_type &desc,
        sycl::buffer<input_type, 1> &in,
        sycl::buffer<output_type, 1> &out);
    // in place backward computation; buffer API
    template <typename descriptor_type, typename data_type>
    friend void compute_backward(
        descriptor_type &desc,
        sycl::buffer<data_type, 1> &inout);
    // out of place backward computation; buffer API
    template<typename descriptor_type, typename input_type, typename output_type>
    friend void compute_backward(
        descriptor_type &desc,
        sycl::buffer<input_type, 1> &in,
        sycl::buffer<output_type, 1> &out);
    // in place forward computation; USM API
    template <typename descriptor_type, typename data_type>
    friend sycl::event compute_forward(
        descriptor_type &desc,
        data_type *inout,
        const std::vector<sycl::event> &dependencies);
    // out of place forward computation; USM API
    template<typename descriptor_type, typename input_type, typename output_type>
    friend sycl::event compute_forward(
        descriptor_type &desc,
        input_type *in,
        output_type *out,
        const std::vector<sycl::event> &dependencies);
    // in place backward computation; USM API
    template <typename descriptor_type, typename data_type>
    friend sycl::event compute_backward(
        descriptor_type &desc,
        data_type *inout,
        const std::vector<sycl::event> &dependencies);
    // out of place backward computation; USM API
    template<typename descriptor_type, typename input_type, typename output_type>
    friend sycl::event compute_backward(
        descriptor_type &desc,
        input_type *in,
        output_type *out,
        const std::vector<sycl::event> &dependencies);

    // sets a non-default configuration option
    void set_value(config_param param, ...);
    // retrieves a configuration value
    void get_value(config_param param, ...);

    template<typename data_type>
    void set_workspace(sycl::buffer<data_type, 1> &workspace);
    template<typename data_type>
    void set_workspace(data_type *workspace);

 private:
    DFTI_DESCRIPTOR_HANDLE handle;          // local handle
    SYCL_DFTI_DESCRIPTOR_HANDLE device_handle;  // device handle for buffer
    sycl::buffer<SYCL_DFTI_DESCRIPTOR_HANDLE, 1> handle_buffer;
};

}  // namespace dft
}  // namespace mkl
} // namespace oneapi

#endif  /* _DFTI_HPP_ */
