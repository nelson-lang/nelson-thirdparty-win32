/*******************************************************************************
* Copyright 2023 Intel Corporation.
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

#ifndef _LAPACK_CONCEPTS_HPP__
#define _LAPACK_CONCEPTS_HPP__

#include <complex>

namespace oneapi {
namespace mkl {
namespace lapack {

namespace internal
{
    template <bool, typename T=void> struct enable_if;
    template <typename T> struct is_fp;
    template <typename T> struct is_rfp;
    template <typename T> struct is_cfp;
    template <typename fp> using is_floating_point         = typename enable_if<is_fp<fp>::value>::type*;
    template <typename fp> using is_real_floating_point    = typename enable_if<is_rfp<fp>::value>::type*;
    template <typename fp> using is_complex_floating_point = typename enable_if<is_cfp<fp>::value>::type*;

    // auxilary typechecking templates
    template<typename T>
    struct enable_if<true,T> { using type = T; };

    template<> struct is_fp<float>                { static constexpr bool value{true}; };
    template<> struct is_fp<double>               { static constexpr bool value{true}; };
    template<> struct is_fp<std::complex<float>>  { static constexpr bool value{true}; };
    template<> struct is_fp<std::complex<double>> { static constexpr bool value{true}; };

    template<> struct is_rfp<float>  { static constexpr bool value{true}; };
    template<> struct is_rfp<double> { static constexpr bool value{true}; };

    template<> struct is_cfp<std::complex<float>>  { static constexpr bool value{true}; };
    template<> struct is_cfp<std::complex<double>> { static constexpr bool value{true}; };
}

} //namespace lapack
} //namespace mkl
} // namespace oneapi

#endif // _LAPACK_CONCEPTS_HPP__
