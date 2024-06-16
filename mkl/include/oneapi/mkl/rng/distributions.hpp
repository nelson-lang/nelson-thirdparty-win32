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

#ifndef _MKL_RNG_DISTRIBUTIONS_HPP_
#define _MKL_RNG_DISTRIBUTIONS_HPP_

#include <stdexcept>
#include <vector>
#include <limits>

#include "oneapi/mkl/exceptions.hpp"

namespace oneapi {
namespace mkl {
namespace rng {

// CONTINUOUS AND DISCRETE RANDOM NUMBER DISTRIBUTIONS

// Class template oneapi::mkl::rng::uniform
//
// Represents continuous and discrete uniform random number distribution
//
// Supported types:
//      float
//      double
//      std::int32_t
//      std::uint32_t
//
// Supported methods:
//      oneapi::mkl::rng::uniform_method::standard
//      oneapi::mkl::rng::uniform_method::accurate
//
// Input arguments:
//      a - left bound. 0.0 by default
//      b - right bound. 1.0 by default (for std::(u)int32_t std::numeric_limits<std::(u)int32_t>::max()
//          is used for accurate method and 2^23 is used for standard method)
//
// Note: using (un)signed integer uniform distribution with uniform_method::standard method may
// cause incorrect statistics of the produced random numbers (due to rounding error) if
// (abs(b - a) > 2^23) || (abs(b) > 2^23) || (abs(a) > 2^23)
// Please use uniform_method::accurate method instead
//
namespace uniform_method {
struct standard {};
struct accurate {};
using by_default = standard;
} // namespace uniform_method

template <typename Type = float, typename Method = uniform_method::by_default>
class uniform {
public:
    static_assert(std::is_same<Method, uniform_method::standard>::value ||
                      std::is_same<Method, uniform_method::accurate>::value,
                  "oneMKL: rng/uniform: method is incorrect");

    static_assert(std::is_same<Type, float>::value || std::is_same<Type, double>::value ||
                      std::is_same<Type, std::int32_t>::value ||
                      std::is_same<Type, std::uint32_t>::value,
                  "oneMKL: rng/uniform: type is not supported");

    using method_type = Method;
    using result_type = Type;

    struct param_type {
        param_type(Type a, Type b) : a_(a), b_(b) {}
        Type a_;
        Type b_;
    };

    uniform()
            : uniform(static_cast<Type>(0.0),
                      std::is_integral<Type>::value
                          ? (std::is_same<Method, uniform_method::standard>::value
                                 ? (1 << 23)
                                 : (std::numeric_limits<Type>::max)())
                          : static_cast<Type>(1.0)) {}

    explicit uniform(Type a, Type b) : a_(a), b_(b) {
        if (a >= b) {
            throw oneapi::mkl::invalid_argument("rng", "uniform", "a >= b");
        }
    }

    explicit uniform(const param_type& pt) : a_(pt.a_), b_(pt.b_) {
        if (pt.a_ >= pt.b_) {
            throw oneapi::mkl::invalid_argument("rng", "uniform", "a >= b");
        }
    }

    Type a() const {
        return a_;
    }

    Type b() const {
        return b_;
    }

    param_type param() const {
        return param_type(a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.a_ >= pt.b_) {
            throw oneapi::mkl::invalid_argument("rng", "uniform", "a >= b");
        }
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    Type a_;
    Type b_;
};

// Class template oneapi::mkl::rng::gaussian
//
// Represents continuous normal random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::gaussian_method::box_muller
//      oneapi::mkl::rng::gaussian_method::box_muller2
//      oneapi::mkl::rng::gaussian_method::icdf
//
// Input arguments:
//      mean   - mean. 0 by default
//      stddev - standard deviation. 1.0 by default

namespace gaussian_method {
struct icdf {};
struct box_muller {};
struct box_muller2 {};
using by_default = box_muller2;
} // namespace gaussian_method

template <typename RealType = float, typename Method = gaussian_method::by_default>
class gaussian {
public:
    static_assert(std::is_same<Method, gaussian_method::icdf>::value ||
                      std::is_same<Method, gaussian_method::box_muller>::value ||
                      std::is_same<Method, gaussian_method::box_muller2>::value,
                  "oneMKL: rng/gaussian: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/gaussian: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType mean, RealType stddev) : mean_(mean), stddev_(stddev) {}
        RealType mean_;
        RealType stddev_;
    };

    gaussian() : gaussian(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit gaussian(RealType mean, RealType stddev) : mean_(mean), stddev_(stddev) {
        if (stddev <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian", "stddev <= 0");
        }
    }

    explicit gaussian(const param_type& pt) : mean_(pt.mean_), stddev_(pt.stddev_) {
        if (pt.stddev_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian", "stddev <= 0");
        }
    }

    RealType mean() const {
        return mean_;
    }

    RealType stddev() const {
        return stddev_;
    }

    param_type param() const {
        return param_type(mean_, stddev_);
    }

    void param(const param_type& pt) {
        if (pt.stddev_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian", "stddev <= 0");
        }
        mean_ = pt.mean_;
        stddev_ = pt.stddev_;
    }

private:
    RealType mean_;
    RealType stddev_;
};

// Class template oneapi::mkl::rng::gaussian_mv
//
// Represents continuous multivariate normal random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::gaussian_mv_method::box_muller
//      oneapi::mkl::rng::gaussian_mv_method::box_muller2
//      oneapi::mkl::rng::gaussian_mv_method::icdf
//
// Supported layouts:
//      oneapi::mkl::rng::layout::full
//      oneapi::mkl::rng::layout::packed
//      oneapi::mkl::rng::layout::diagonal
//
// Input arguments:
//      dimen  - dimension of output random vectors
//      mean   - mean vector of dimension d
//      matrix - elements of the lower triangular matrix passed
//               according to the matrix storage scheme

// Matrix storage layout for gaussian_mv distribution
enum class layout : std::uint32_t { full, packed, diagonal };

namespace gaussian_mv_method {
struct icdf {};
struct box_muller {};
struct box_muller2 {};
using by_default = icdf;
} // namespace gaussian_mv_method

template <typename RealType = float, layout Layout = layout::packed,
          typename Method = gaussian_mv_method::by_default>
class gaussian_mv {
public:
    static_assert(std::is_same<Method, gaussian_mv_method::icdf>::value ||
                      std::is_same<Method, gaussian_mv_method::box_muller>::value ||
                      std::is_same<Method, gaussian_mv_method::box_muller2>::value,
                  "oneMKL: rng/gaussian_mv: method is incorrect");

    static_assert((Layout == layout::full) || (Layout == layout::packed) ||
                      (Layout == layout::diagonal),
                  "oneMKL: rng/gaussian_mv: layout is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/gaussian_mv: type is not supported");

    using method_type = Method;
    using result_type = RealType;
    static constexpr layout layout_type = Layout;

    struct param_type {
        [[deprecated("Use the constructor with sycl::span instead")]]
        param_type(std::uint32_t dimen, std::vector<RealType> mean, std::vector<RealType> matrix)
                : dimen_(dimen),
                  mean_(mean),
                  matrix_(matrix) {
                    mean_span_ = sycl::span<RealType>{mean_.data(), mean_.size()};
                    matrix_span_ = sycl::span<RealType>{matrix_.data(), matrix_.size()};
                  }
        param_type(std::uint32_t dimen, sycl::span<RealType> mean, sycl::span<RealType> matrix)
                : dimen_(dimen),
                  mean_span_(mean),
                  matrix_span_(matrix) {}

        std::uint32_t dimen_;
        std::vector<RealType> mean_;
        std::vector<RealType> matrix_;
        sycl::span<RealType> mean_span_;
        sycl::span<RealType> matrix_span_;
    };

    explicit gaussian_mv(std::uint32_t dimen, sycl::span<RealType> mean,
                         sycl::span<RealType> matrix)
            : dimen_(dimen),
              mean_span_(mean),
              matrix_span_(matrix) {
        if ((mean.size() != dimen)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'mean' vector size is incorrect");
        }
        if ((matrix.size() != dimen * dimen) && (matrix.size() != dimen) &&
            (matrix.size() != dimen * (dimen + 1) / 2)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'matrix' size is incorrect");
        }
    }

    [[deprecated("Use the constructor with sycl::span instead")]]
    explicit gaussian_mv(std::uint32_t dimen, std::vector<RealType> mean,
                         std::vector<RealType> matrix)
            : dimen_(dimen),
              mean_(mean),
              matrix_(matrix) {
        mean_span_ = sycl::span<RealType>{mean_.data(), mean_.size()};
        matrix_span_ = sycl::span<RealType>{matrix_.data(), matrix_.size()};

        if ((mean.size() != dimen)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'mean' vector size is incorrect");
        }
        if ((matrix.size() != dimen * dimen) && (matrix.size() != dimen) &&
            (matrix.size() != dimen * (dimen + 1) / 2)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'matrix' size is incorrect");
        }
    }

    explicit gaussian_mv(const param_type& pt)
            : dimen_(pt.dimen_),
              mean_(pt.mean_),
              matrix_(pt.matrix_),
              mean_span_(pt.mean_span_),
              matrix_span_(pt.matrix_span_) {

        if ((pt.mean_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'mean' vector size is < 0");
        }
        if ((pt.matrix_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'matrix' size is < 0");
        }
    }

    std::uint32_t dimen() const {
        return dimen_;
    }

    std::vector<RealType> mean() const {
        return std::vector<RealType>(mean_span_.begin(), mean_span_.end());
    }

    std::vector<RealType> matrix() const {
        return std::vector<RealType>(matrix_span_.begin(), matrix_span_.end());
    }

    param_type param() const {
        return param_type(dimen_, mean_span_, matrix_span_);
    }

    void param(const param_type& pt) {
        if ((pt.mean_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'mean' vector size is < 0");
        }
        if ((pt.matrix_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "gaussian_mv", "'matrix' size is < 0");
        }
        dimen_ = pt.dimen_;
        mean_ = pt.mean_;
        matrix_ = pt.matrix_;
        mean_span_ = pt.mean_span_;
        matrix_span_ = pt.matrix_span_;
    }

private:
    std::uint32_t dimen_;
    std::vector<RealType> mean_;
    std::vector<RealType> matrix_;
    sycl::span<RealType> mean_span_;
    sycl::span<RealType> matrix_span_;
};

// Class template oneapi::mkl::rng::lognormal
//
// Represents continuous lognormal random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::lognormal_method::box_muller2
//      oneapi::mkl::rng::lognormal_method::icdf
//
// Input arguments:
//      m     - mean of the subject normal distribution. 0.0 by default
//      s     - standard deviation of the subject normal distribution. 1.0 by default
//      displ - displacement. 0.0 by default
//      scale - scalefactor. 1.0 by default

namespace lognormal_method {
struct icdf {};
struct box_muller2 {};
struct icdf_accurate {};
struct box_muller2_accurate {};
using by_default = box_muller2;
} // namespace lognormal_method

template <typename RealType = float, typename Method = lognormal_method::by_default>
class lognormal {
public:
    static_assert(std::is_same<Method, lognormal_method::box_muller2>::value ||
                      std::is_same<Method, lognormal_method::icdf>::value ||
                      std::is_same<Method, lognormal_method::box_muller2_accurate>::value ||
                      std::is_same<Method, lognormal_method::icdf_accurate>::value,
                  "oneMKL: rng/lognormal: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/lognormal: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType m, RealType s, RealType displ, RealType scale)
                : m_(m),
                  s_(s),
                  displ_(displ),
                  scale_(scale) {}
        RealType m_;
        RealType s_;
        RealType displ_;
        RealType scale_;
    };

    lognormal()
            : lognormal(static_cast<RealType>(0.0), static_cast<RealType>(1.0),
                        static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit lognormal(RealType m, RealType s, RealType displ = static_cast<RealType>(0.0),
                       RealType scale = static_cast<RealType>(1.0))
            : m_(m),
              s_(s),
              displ_(displ),
              scale_(scale) {
        if (s <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "s <= 0");
        }
        if (scale <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "scale <= 0");
        }
    }

    explicit lognormal(const param_type& pt)
            : m_(pt.m_),
              s_(pt.s_),
              displ_(pt.displ_),
              scale_(pt.scale_) {
        if (pt.s_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "s <= 0");
        }
        if (pt.scale_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "scale <= 0");
        }
    }

    RealType m() const {
        return m_;
    }

    RealType s() const {
        return s_;
    }

    RealType displ() const {
        return displ_;
    }

    RealType scale() const {
        return scale_;
    }

    param_type param() const {
        return param_type(m_, s_, displ_, scale_);
    }

    void param(const param_type& pt) {
        if (pt.s_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "s <= 0");
        }
        if (pt.scale_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "lognormal", "scale <= 0");
        }
        m_ = pt.m_;
        s_ = pt.s_;
        displ_ = pt.displ_;
        scale_ = pt.scale_;
    }

private:
    RealType m_;
    RealType s_;
    RealType displ_;
    RealType scale_;
};

// Class template oneapi::mkl::rng::beta
//
// Represents continuous beta random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::beta_method::cja
//      oneapi::mkl::rng::beta_method::cja_accurate
//
// Input arguments:
//      p - shape. 1.0 by default
//      q - shape. 1.0 by default
//      a - displacement. 0.0 by default
//      b - scalefactor. 1.0 by default

namespace beta_method {
struct cja {};
struct cja_accurate {};
using by_default = cja;
} // namespace beta_method

template <typename RealType = float, typename Method = beta_method::by_default>
class beta {
public:
    static_assert(std::is_same<Method, beta_method::cja>::value ||
                      std::is_same<Method, beta_method::cja_accurate>::value,
                  "oneMKL: rng/beta: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/beta: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType p, RealType q, RealType a, RealType b) : p_(p), q_(q), a_(a), b_(b) {}
        RealType p_;
        RealType q_;
        RealType a_;
        RealType b_;
    };

    beta()
            : beta(static_cast<RealType>(1.0), static_cast<RealType>(1.0),
                   static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit beta(RealType p, RealType q, RealType a, RealType b) : p_(p), q_(q), a_(a), b_(b) {
        if (p <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "p <= 0");
        }
        if (q <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "q <= 0");
        }
        if (b <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "b <= 0");
        }
    }

    explicit beta(const param_type& pt) : p_(pt.p_), q_(pt.q_), a_(pt.a_), b_(pt.b_) {
        if (pt.p_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "p <= 0");
        }
        if (pt.q_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "q <= 0");
        }
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "b <= 0");
        }
    }

    RealType p() const {
        return p_;
    }

    RealType q() const {
        return q_;
    }

    RealType a() const {
        return a_;
    }

    RealType b() const {
        return b_;
    }

    param_type param() const {
        return param_type(p_, q_, a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.p_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "p <= 0");
        }
        if (pt.q_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "q <= 0");
        }
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "beta", "b <= 0");
        }
        p_ = pt.p_;
        q_ = pt.q_;
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    RealType p_;
    RealType q_;
    RealType a_;
    RealType b_;
};

// Class template oneapi::mkl::rng::cauchy
//
// Represents continuous Cauchy random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::cauchy_method::icdf
//
// Input arguments:
//      a - displacement. 0.0 by default
//      b - scalefactor. 1.0 by default

namespace cauchy_method {
struct icdf {};
using by_default = icdf;
} // namespace cauchy_method

template <typename RealType = float, typename Method = cauchy_method::by_default>
class cauchy {
public:
    static_assert(std::is_same<Method, cauchy_method::icdf>::value,
                  "oneMKL: rng/cauchy: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/cauchy: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType a, RealType b) : a_(a), b_(b) {}
        RealType a_;
        RealType b_;
    };

    cauchy() : cauchy(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit cauchy(RealType a, RealType b) : a_(a), b_(b) {
        if (b <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "cauchy", "b <= 0");
        }
    }

    explicit cauchy(const param_type& pt) : a_(pt.a_), b_(pt.b_) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "cauchy", "b <= 0");
        }
    }

    RealType a() const {
        return a_;
    }

    RealType b() const {
        return b_;
    }

    param_type param() const {
        return param_type(a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "cauchy", "b <= 0");
        }
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    RealType a_;
    RealType b_;
};

// Class template oneapi::mkl::rng::chi_square
//
// Represents continuous chi-square random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::chi_square_method::gamma_based
//
// Input arguments:
//      n - degrees of freedom

namespace chi_square_method {
struct gamma_based {};
using by_default = gamma_based;
} // namespace chi_square_method

template <typename RealType = float, typename Method = chi_square_method::by_default>
class chi_square {
public:
    static_assert(std::is_same<Method, chi_square_method::gamma_based>::value,
                  "oneMKL: rng/chi_square: method is incorrect");
    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/chi_square: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(std::int32_t n) : n_(n) {}
        std::int32_t n_;
    };

    chi_square() : chi_square(5) {}

    explicit chi_square(std::int32_t n) : n_(n) {
        if (n < 1) {
            throw oneapi::mkl::invalid_argument("rng", "chi_square", "n < 1");
        }
    }

    explicit chi_square(const param_type& pt) : n_(pt.n_) {
        if (pt.n_ < 1) {
            throw oneapi::mkl::invalid_argument("rng", "chi_square", "n < 1");
        }
    }

    std::int32_t n() const {
        return n_;
    }

    param_type param() const {
        return param_type(n_);
    }

    void param(const param_type& pt) {
        if (pt.n_ < 1) {
            throw oneapi::mkl::invalid_argument("rng", "chi_square", "n < 1");
        }
        n_ = pt.n_;
    }

private:
    std::int32_t n_;
};

// Class template oneapi::mkl::rng::exponential
//
// Represents continuous exponential random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::exponential_method::icdf
//      oneapi::mkl::rng::exponential_method::icdf_accurate
//
// Input arguments:
//      a    - displacement. 0.0 by default
//      beta - scalefactor. 1.0 by default

namespace exponential_method {
struct icdf {};
struct icdf_accurate {};
using by_default = icdf;
} // namespace exponential_method

template <typename RealType = float, typename Method = exponential_method::by_default>
class exponential {
public:
    static_assert(std::is_same<Method, exponential_method::icdf>::value ||
                      std::is_same<Method, exponential_method::icdf_accurate>::value,
                  "oneMKL: rng/exponential: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/exponential: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType a, RealType beta) : a_(a), beta_(beta) {}
        RealType a_;
        RealType beta_;
    };

    exponential() : exponential(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit exponential(RealType a, RealType beta) : a_(a), beta_(beta) {
        if (beta <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "exponential", "beta <= 0");
        }
    }

    explicit exponential(const param_type& pt) : a_(pt.a_), beta_(pt.beta_) {
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "exponential", "beta <= 0");
        }
    }

    RealType a() const {
        return a_;
    }

    RealType beta() const {
        return beta_;
    }

    param_type param() const {
        return param_type(a_, beta_);
    }

    void param(const param_type& pt) {
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "exponential", "beta <= 0");
        }
        a_ = pt.a_;
        beta_ = pt.beta_;
    }

private:
    RealType a_;
    RealType beta_;
};

// Class template oneapi::mkl::rng::gamma
//
// Represents continuous gamma random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::gamma_method::marsaglia
//      oneapi::mkl::rng::gamma_method::marsaglia_accurate
//
// Input arguments:
//      alpha - shape. 1.0 by default
//      a     - displacement. 0.0 by default
//      beta  - scalefactor. 1.0 by default

namespace gamma_method {
struct marsaglia {};
struct marsaglia_accurate {};
using by_default = marsaglia;
} // namespace gamma_method

template <typename RealType = float, typename Method = gamma_method::by_default>
class gamma {
public:
    static_assert(std::is_same<Method, gamma_method::marsaglia>::value ||
                      std::is_same<Method, gamma_method::marsaglia_accurate>::value,
                  "oneMKL: rng/gamma: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/gamma: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType alpha, RealType a, RealType beta) : alpha_(alpha), a_(a), beta_(beta) {}
        RealType alpha_;
        RealType a_;
        RealType beta_;
    };

    gamma()
            : gamma(static_cast<RealType>(1.0), static_cast<RealType>(0.0),
                    static_cast<RealType>(1.0)) {}

    explicit gamma(RealType alpha, RealType a, RealType beta) : alpha_(alpha), a_(a), beta_(beta) {
        if (alpha <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "alpha <= 0");
        }
        if (beta <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "beta <= 0");
        }
    }

    explicit gamma(const param_type& pt) : alpha_(pt.alpha_), a_(pt.a_), beta_(pt.beta_) {
        if (pt.alpha_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "alpha <= 0");
        }
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "beta <= 0");
        }
    }

    RealType alpha() const {
        return alpha_;
    }

    RealType a() const {
        return a_;
    }

    RealType beta() const {
        return beta_;
    }

    param_type param() const {
        return param_type(alpha_, a_, beta_);
    }

    void param(const param_type& pt) {
        if (pt.alpha_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "alpha <= 0");
        }
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gamma", "beta <= 0");
        }
        alpha_ = pt.alpha_;
        a_ = pt.a_;
        beta_ = pt.beta_;
    }

private:
    RealType alpha_;
    RealType a_;
    RealType beta_;
};

// Class template oneapi::mkl::rng::gumbel
//
// Represents continuous Gumbel random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::gumbel_method::icdf
//
// Input arguments:
//      a    - displacement. 0.0 by default
//      beta - scalefactor. 1.0 by default

namespace gumbel_method {
struct icdf {};
using by_default = icdf;
} // namespace gumbel_method

template <typename RealType = float, typename Method = gumbel_method::by_default>
class gumbel {
public:
    static_assert(std::is_same<Method, gumbel_method::icdf>::value,
                  "oneMKL: rng/gumbel: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/gumbel: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType a, RealType b) : a_(a), b_(b) {}
        RealType a_;
        RealType b_;
    };

    gumbel() : gumbel(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit gumbel(RealType a, RealType b) : a_(a), b_(b) {
        if (b <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gumbel", "b <= 0");
        }
    }

    explicit gumbel(const param_type& pt) : a_(pt.a_), b_(pt.b_) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gumbel", "b <= 0");
        }
    }

    RealType a() const {
        return a_;
    }

    RealType b() const {
        return b_;
    }

    param_type param() const {
        return param_type(a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "gumbel", "b <= 0");
        }
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    RealType a_;
    RealType b_;
};

// Class template oneapi::mkl::rng::laplace
//
// Represents continuous Laplace random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::laplace_method::icdf
//
// Input arguments:
//      a - mean. 0.0 by default
//      b - scalefactor. 1.0 by default

namespace laplace_method {
struct icdf {};
using by_default = icdf;
} // namespace laplace_method

template <typename RealType = float, typename Method = laplace_method::by_default>
class laplace {
public:
    static_assert(std::is_same<Method, laplace_method::icdf>::value,
                  "oneMKL: rng/laplace: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/laplace: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType a, RealType b) : a_(a), b_(b) {}
        RealType a_;
        RealType b_;
    };

    laplace() : laplace(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit laplace(RealType a, RealType b) : a_(a), b_(b) {
        if (b <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "laplace", "b <= 0");
        }
    }

    explicit laplace(const param_type& pt) : a_(pt.a_), b_(pt.b_) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "laplace", "b <= 0");
        }
    }

    RealType a() const {
        return a_;
    }

    RealType b() const {
        return b_;
    }

    param_type param() const {
        return param_type(a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "laplace", "b <= 0");
        }
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    RealType a_;
    RealType b_;
};

// Class template oneapi::mkl::rng::rayleigh
//
// Represents continuous Rayleigh random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::rayleigh_method::icdf
//      oneapi::mkl::rng::rayleigh_method::icdf_accurate
//
// Input arguments:
//      a - displacement. 0.0 by default
//      b - scalefactor. 1.0 by default

namespace rayleigh_method {
struct icdf {};
struct icdf_accurate {};
using by_default = icdf;
} // namespace rayleigh_method

template <typename RealType = float, typename Method = rayleigh_method::by_default>
class rayleigh {
public:
    static_assert(std::is_same<Method, rayleigh_method::icdf>::value ||
                      std::is_same<Method, rayleigh_method::icdf_accurate>::value,
                  "oneMKL: rng/rayleigh: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/rayleigh: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType a, RealType b) : a_(a), b_(b) {}
        RealType a_;
        RealType b_;
    };

    rayleigh() : rayleigh(static_cast<RealType>(0.0), static_cast<RealType>(1.0)) {}

    explicit rayleigh(RealType a, RealType b) : a_(a), b_(b) {
        if (b <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "rayleigh", "b <= 0");
        }
    }

    explicit rayleigh(const param_type& pt) : a_(pt.a_), b_(pt.b_) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "rayleigh", "b <= 0");
        }
    }

    RealType a() const {
        return a_;
    }

    RealType b() const {
        return b_;
    }

    param_type param() const {
        return param_type(a_, b_);
    }

    void param(const param_type& pt) {
        if (pt.b_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "rayleigh", "b <= 0");
        }
        a_ = pt.a_;
        b_ = pt.b_;
    }

private:
    RealType a_;
    RealType b_;
};

// Class template oneapi::mkl::rng::weibull
//
// Represents continuous Weibull random number distribution
//
// Supported types:
//      float
//      double
//
// Supported methods:
//      oneapi::mkl::rng::weibull_method::icdf
//      oneapi::mkl::rng::weibull_method::icdf_accurate
//
// Input arguments:
//      alpha - shape. 1.0 by default
//      a     - displacement. 0.0 by default
//      beta  - scalefactor. 1.0 by default

namespace weibull_method {
struct icdf {};
struct icdf_accurate {};
using by_default = icdf;
} // namespace weibull_method

template <typename RealType = float, typename Method = weibull_method::by_default>
class weibull {
public:
    static_assert(std::is_same<Method, weibull_method::icdf>::value ||
                      std::is_same<Method, weibull_method::icdf_accurate>::value,
                  "oneMKL: rng/weibull: method is incorrect");

    static_assert(std::is_same<RealType, float>::value || std::is_same<RealType, double>::value,
                  "oneMKL: rng/weibull: type is not supported");

    using method_type = Method;
    using result_type = RealType;

    struct param_type {
        param_type(RealType alpha, RealType a, RealType beta) : alpha_(alpha), a_(a), beta_(beta) {}
        RealType alpha_;
        RealType a_;
        RealType beta_;
    };

    weibull()
            : weibull(static_cast<RealType>(1.0), static_cast<RealType>(0.0),
                      static_cast<RealType>(1.0)) {}

    explicit weibull(RealType alpha, RealType a, RealType beta)
            : alpha_(alpha),
              a_(a),
              beta_(beta) {
        if (alpha <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "alpha <= 0");
        }
        if (beta <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "beta <= 0");
        }
    }

    explicit weibull(const param_type& pt) : alpha_(pt.alpha_), a_(pt.a_), beta_(pt.beta_) {
        if (pt.alpha_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "alpha <= 0");
        }
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "beta <= 0");
        }
    }

    RealType alpha() const {
        return alpha_;
    }

    RealType a() const {
        return a_;
    }

    RealType beta() const {
        return beta_;
    }

    param_type param() const {
        return param_type(alpha_, a_, beta_);
    }

    void param(const param_type& pt) {
        if (pt.alpha_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "alpha <= 0");
        }
        if (pt.beta_ <= static_cast<RealType>(0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "weibull", "beta <= 0");
        }
        alpha_ = pt.alpha_;
        a_ = pt.a_;
        beta_ = pt.beta_;
    }

private:
    RealType alpha_;
    RealType a_;
    RealType beta_;
};

// Class template oneapi::mkl::rng::bernoulli
//
// Represents discrete Bernoulli random number distribution
//
// Supported types:
//      std::uint32_t
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::bernoulli_method::icdf;
//
// Input arguments:
//      p - success probablity of a trial. 0.5 by default

namespace bernoulli_method {
struct icdf {};
using by_default = icdf;
} // namespace bernoulli_method

template <typename IntType = std::uint32_t, typename Method = bernoulli_method::by_default>
class bernoulli {
public:
    static_assert(std::is_same<Method, bernoulli_method::icdf>::value,
                  "oneMKL: rng/bernoulli: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/bernoulli: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(float p) : p_(p) {}
        float p_;
    };

    bernoulli() : bernoulli(0.5f) {}

    explicit bernoulli(float p) : p_(p) {
        if ((p > 1.0f) || (p < 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "bernoulli", "p > 1 or p < 0");
        }
    }

    explicit bernoulli(const param_type& pt) : p_(pt.p_) {
        if ((pt.p_ > 1.0f) || (pt.p_ < 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "bernoulli", "p > 1 or p < 0");
        }
    }

    float p() const {
        return p_;
    }

    param_type param() const {
        return param_type(p_);
    }

    void param(const param_type& pt) {
        if ((pt.p_ > 1.0f) || (pt.p_ < 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "bernoulli", "p > 1 or p < 0");
        }
        p_ = pt.p_;
    }

private:
    float p_;
};

// Class template oneapi::mkl::rng::binomial
//
// Represents discrete binomial random number distribution
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::binomial_method::btpe
//
// Input arguments:
//      ntrials - number of independent trials. 5 by default
//      p       - success probablity of a single trial. 0.5 by default

namespace binomial_method {
struct btpe {};
using by_default = btpe;
} // namespace binomial_method

template <typename IntType = std::int32_t, typename Method = binomial_method::by_default>
class binomial {
public:
    static_assert(std::is_same<Method, binomial_method::btpe>::value,
                  "oneMKL: rng/binomial: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/binomial: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(std::int32_t ntrial, double p) : ntrial_(ntrial), p_(p) {}
        std::int32_t ntrial_;
        double p_;
    };

    binomial() : binomial(5, 0.5) {}

    explicit binomial(std::int32_t ntrial, double p) : ntrial_(ntrial), p_(p) {
        if ((p > 1.0) || (p < 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "p > 1 or p < 0");
        }
        if (ntrial < 1) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "ntrial < 1");
        }
    }

    explicit binomial(const param_type& pt) : ntrial_(pt.ntrial_), p_(pt.p_) {
        if ((pt.p_ > 1.0) || (pt.p_ < 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "p > 1 or p < 0");
        }
        if (pt.ntrial_ < 1) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "ntrial < 1");
        }
    }

    std::int32_t ntrial() const {
        return ntrial_;
    }

    double p() const {
        return p_;
    }

    param_type param() const {
        return param_type(ntrial_, p_);
    }

    void param(const param_type& pt) {
        if ((pt.p_ > 1.0) || (pt.p_ < 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "p > 1 or p < 0");
        }
        if (pt.ntrial_ < 1) {
            throw oneapi::mkl::invalid_argument("rng", "binomial", "ntrial < 1");
        }
        ntrial_ = pt.ntrial_;
        p_ = pt.p_;
    }

private:
    std::int32_t ntrial_;
    double p_;
};

// Class template oneapi::mkl::rng::geometric
//
// Represents discrete geometric random number distribution
//
// Supported types:
//      std::int32_t
//      std::uint32_t
//
// Supported methods:
//      oneapi::mkl::rng::geometric_method::icdf
//
// Input arguments:
//      p - success probablity of a trial. 0.5 by default

namespace geometric_method {
struct icdf {};
using by_default = icdf;
} // namespace geometric_method

template <typename IntType = std::uint32_t, typename Method = geometric_method::by_default>
class geometric {
public:
    static_assert(std::is_same<Method, geometric_method::icdf>::value,
                  "oneMKL: rng/geometric: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/geometric: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(float p) : p_(p) {}
        float p_;
    };

    geometric() : geometric(0.5f) {}

    explicit geometric(float p) : p_(p) {
        if ((p >= 1.0f) || (p <= 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "geometric", "p > 1 or p < 0");
        }
    }

    explicit geometric(const param_type& pt) : p_(pt.p_) {
        if ((pt.p_ >= 1.0f) || (pt.p_ <= 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "geometric", "p > 1 or p < 0");
        }
    }

    float p() const {
        return p_;
    }

    param_type param() const {
        return param_type(p_);
    }

    void param(const param_type& pt) {
        if ((pt.p_ >= 1.0f) || (pt.p_ <= 0.0f)) {
            throw oneapi::mkl::invalid_argument("rng", "geometric", "p > 1 or p < 0");
        }
        p_ = pt.p_;
    }

private:
    float p_;
};

// Class template oneapi::mkl::rng::hypergeometric
//
// Represents discrete hypergeometric random number distribution
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::hypergeometric_method::h2pe
//
// Input arguments:
//      l - lot size. 1 by default
//      s - size of sampling without replacement. 1 by default
//      m - number of marked elements. 1 by default

namespace hypergeometric_method {
struct h2pe {};
using by_default = h2pe;
} // namespace hypergeometric_method

template <typename IntType = std::int32_t, typename Method = hypergeometric_method::by_default>
class hypergeometric {
public:
    static_assert(std::is_same<Method, hypergeometric_method::h2pe>::value,
                  "oneMKL: rng/hypergeometric: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/hypergeometric: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(std::int32_t l, std::int32_t s, std::int32_t m) : l_(l), s_(s), m_(m) {}
        std::int32_t s_;
        std::int32_t m_;
        std::int32_t l_;
    };

    hypergeometric() : hypergeometric(1, 1, 1) {}

    explicit hypergeometric(std::int32_t l, std::int32_t s, std::int32_t m) : s_(s), m_(m), l_(l) {
        if (s < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "s < 0");
        }
        if (m < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "m < 0");
        }
        if (l < (s > m ? s : m)) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "l < (s > m ? s : m)");
        }
    }

    explicit hypergeometric(const param_type& pt) : l_(pt.l_), s_(pt.s_), m_(pt.m_) {
        if (pt.s_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "s < 0");
        }
        if (pt.m_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "m < 0");
        }
        if (pt.l_ < (pt.s_ > pt.m_ ? pt.s_ : pt.m_)) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "l < (s > m ? s : m)");
        }
    }

    std::int32_t l() const {
        return l_;
    }

    std::int32_t s() const {
        return s_;
    }

    std::int32_t m() const {
        return m_;
    }

    param_type param() const {
        return param_type(l_, s_, m_);
    }

    void param(const param_type& pt) {
        if (pt.s_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "s < 0");
        }
        if (pt.m_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "m < 0");
        }
        if (pt.l_ < (pt.s_ > pt.m_ ? pt.s_ : pt.m_)) {
            throw oneapi::mkl::invalid_argument("rng", "hypergeometric", "l < (s > m ? s : m)");
        }
        s_ = pt.s_;
        m_ = pt.m_;
        l_ = pt.l_;
    }

private:
    std::int32_t s_;
    std::int32_t m_;
    std::int32_t l_;
};

// Class template oneapi::mkl::rng::multinomial
//
// Represents discrete multinomial random number distribution
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::multinomial_method::poisson_icdf_based
//
// Input arguments:
//      ntrial - number of independent trials
//      p      - probability vector of possible outcomes

namespace multinomial_method {
struct poisson_icdf_based {};
using by_default = poisson_icdf_based;
} // namespace multinomial_method

template <typename IntType = std::int32_t, typename Method = multinomial_method::by_default>
class multinomial {
public:
    static_assert(std::is_same<Method, multinomial_method::poisson_icdf_based>::value,
                  "oneMKL: rng/multinomial: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/multinomial: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        [[deprecated("Use the constructor with sycl::span instead")]]
        param_type(std::int32_t ntrial, std::vector<double> p) : ntrial_(ntrial), p_(p) {
            p_span_ = sycl::span<double>{p_.data(), p_.size()};
        }
        param_type(std::int32_t ntrial, sycl::span<double> p) : ntrial_(ntrial), p_span_(p) {}

        std::int32_t ntrial_;
        std::vector<double> p_;
        sycl::span<double> p_span_;
    };

    [[deprecated("Use the constructor with sycl::span instead")]]
    explicit multinomial(std::int32_t ntrial, std::vector<double> p) : ntrial_(ntrial), p_(p) {
        p_span_ = sycl::span<double>{p_.data(), p_.size()};
        if (ntrial < 0) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "ntrial < 0");
        }
        if (p.size() < 1) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "size of p < 1");
        }
    }

    explicit multinomial(std::int32_t ntrial, sycl::span<double> p) : ntrial_(ntrial), p_span_(p) {
        if (ntrial < 0) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "ntrial < 0");
        }
        if (p.size() < 1) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "size of p < 1");
        }
    }

    explicit multinomial(const param_type& pt) : ntrial_(pt.ntrial_), p_(pt.p_), p_span_(pt.p_span_) {
        if (pt.ntrial_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "ntrial < 0");
        }
        if (pt.p_span_.size() < 1) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "size of p < 1");
        }
    }

    std::int32_t ntrial() const {
        return ntrial_;
    }

    std::vector<double> p() const {
        return std::vector<double>(p_span_.begin(), p_span_.end());
    }

    param_type param() const {
        return param_type(ntrial_, p_span_);
    }

    void param(const param_type& pt) {
        if (pt.ntrial_ < 0) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "ntrial < 0");
        }
        if (pt.p_span_.size() < 1) {
            throw oneapi::mkl::invalid_argument("rng", "multinomial", "size of p < 1");
        }
        ntrial_ = pt.ntrial_;
        p_ = pt.p_;
        p_span_ = pt.p_span_;
    }

private:
    std::int32_t ntrial_;
    std::vector<double> p_;
    sycl::span<double> p_span_;
};

// Class template oneapi::mkl::rng::negative_binomial
//
// Represents discrete negative binomial random number distribution
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::negative_binomial_method::nbar
//
// Input arguments:
//      a - the first distribution parameter. 0.1 by default
//      p - the second distribution parameter. 0.5 by default

namespace negative_binomial_method {
struct nbar {};
using by_default = nbar;
} // namespace negative_binomial_method

template <typename IntType = std::int32_t, typename Method = negative_binomial_method::by_default>
class negative_binomial {
public:
    static_assert(std::is_same<Method, negative_binomial_method::nbar>::value,
                  "oneMKL: rng/negative_binomial: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/negative_binomial: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(double a, double p) : a_(a), p_(p) {}
        double a_;
        double p_;
    };

    negative_binomial() : negative_binomial(0.1, 0.5) {}

    explicit negative_binomial(double a, double p) : a_(a), p_(p) {
        if ((p >= 1.0) || (p <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "p > 1 or p < 0");
        }
        if (a <= 0.0) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "a < 0");
        }
    }

    explicit negative_binomial(const param_type& pt) : a_(pt.a_), p_(pt.p_) {
        if ((pt.p_ >= 1.0) || (pt.p_ <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "p > 1 or p < 0");
        }
        if (pt.a_ <= 0.0) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "a < 0");
        }
    }

    double a() const {
        return a_;
    }

    double p() const {
        return p_;
    }

    param_type param() const {
        return param_type(a_, p_);
    }

    void param(const param_type& pt) {
        if ((pt.p_ >= 1.0) || (pt.p_ <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "p > 1 or p < 0");
        }
        if (pt.a_ <= 0.0) {
            throw oneapi::mkl::invalid_argument("rng", "negative_binomial", "a < 0");
        }
        a_ = pt.a_;
        p_ = pt.p_;
    }

private:
    double a_;
    double p_;
};

// Class template oneapi::mkl::rng::poisson
//
// Represents discrete Poisson random number distribution
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::poisson_method::ptpe
//      oneapi::mkl::rng::poisson_method::gaussian_icdf_based
//
// Input arguments:
//      lambda - distribution parameter. 0.5 by default

namespace poisson_method {
struct ptpe {};
struct gaussian_icdf_based {};
using by_default = gaussian_icdf_based;
} // namespace poisson_method

template <typename IntType = std::int32_t, typename Method = poisson_method::by_default>
class poisson {
public:
    static_assert(std::is_same<Method, poisson_method::ptpe>::value ||
                      std::is_same<Method, poisson_method::gaussian_icdf_based>::value,
                  "oneMKL: rng/poisson: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/poisson: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        param_type(double lambda) : lambda_(lambda) {}
        double lambda_;
    };

    poisson() : poisson(0.5) {}

    explicit poisson(double lambda) : lambda_(lambda) {
        if ((lambda <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "poisson", "lamdba < 0");
        }
    }

    explicit poisson(const param_type& pt) : lambda_(pt.lambda_) {
        if ((pt.lambda_ <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "poisson", "lamdba < 0");
        }
    }

    double lambda() const {
        return lambda_;
    }

    param_type param() const {
        return param_type(lambda_);
    }

    void param(const param_type& pt) {
        if ((pt.lambda_ <= 0.0)) {
            throw oneapi::mkl::invalid_argument("rng", "poisson", "lamdba < 0");
        }
        lambda_ = pt.lambda_;
    }

private:
    double lambda_;
};

// Class template oneapi::mkl::rng::poisson_v
//
// Represents discrete Poisson random number distribution with varying mean
//
// Supported types:
//      std::int32_t
//
// Supported methods:
//      oneapi::mkl::rng::poisson_v_method::gaussian_icdf_based
//
// Input arguments:
//      lambda - vector of distribution parameters

namespace poisson_v_method {
struct gaussian_icdf_based {};
using by_default = gaussian_icdf_based;
} // namespace poisson_v_method

template <typename IntType = std::int32_t, typename Method = poisson_v_method::by_default>
class poisson_v {
public:
    static_assert(std::is_same<Method, poisson_v_method::gaussian_icdf_based>::value,
                  "oneMKL: rng/poisson_v: method is incorrect");

    static_assert(std::is_same<IntType, std::int32_t>::value ||
                      std::is_same<IntType, std::uint32_t>::value,
                  "oneMKL: rng/poisson_v: type is not supported");

    using method_type = Method;
    using result_type = IntType;

    struct param_type {
        [[deprecated("Use the constructor with sycl::span instead")]]
        param_type(std::vector<double> lambda) : lambda_(lambda) {
            lambda_span_ = sycl::span<double>{lambda_.data(), lambda_.size()};
        }
        param_type(sycl::span<double> lambda) : lambda_span_(lambda) {}

        std::vector<double> lambda_;
        sycl::span<double> lambda_span_;
    };

    [[deprecated("Use the constructor with sycl::span instead")]]
    explicit poisson_v(std::vector<double> lambda) : lambda_(lambda)
    {
        lambda_span_ = sycl::span<double>{lambda_.data(), lambda_.size()};
        if ((lambda.size() <= 0)) {
        throw oneapi::mkl::invalid_argument("rng", "poisson_v",
                                            "size of lambda < 0");
        }
    }

    explicit poisson_v(sycl::span<double> lambda) : lambda_span_(lambda) {
        if ((lambda.size() <= 0)) {
        throw oneapi::mkl::invalid_argument("rng", "poisson_v",
                                            "size of lambda < 0");
        }
    }

    explicit poisson_v(const param_type& pt) : lambda_(pt.lambda_), lambda_span_(pt.lambda_span_) {
        if ((pt.lambda_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "poisson_v", "size of lambda < 0");
        }
    }

    std::vector<double> lambda() const {
        return std::vector<double>(lambda_span_.begin(), lambda_span_.end());
    }

    param_type param() const {
        return param_type(lambda_span_);
    }

    void param(const param_type& pt) {
        if ((pt.lambda_span_.size() <= 0)) {
            throw oneapi::mkl::invalid_argument("rng", "poisson_v", "size of lambda < 0");
        }
        lambda_ = pt.lambda_;
        lambda_span_ = pt.lambda_span_;
    }

private:
    std::vector<double> lambda_;
    sycl::span<double> lambda_span_;
};

// Class template oneapi::mkl::rng::uniform_bits
//
// Represents discrete uniform bits random number distribution
//
// Supported types:
//      std::uint32_t
//

template <typename UIntType = std::uint32_t>
class uniform_bits {
public:
    static_assert(std::is_same<UIntType, std::uint32_t>::value ||
                      std::is_same<UIntType, std::uint64_t>::value,
                  "oneMKL: rng/uniform_bits: type is not supported");
    using result_type = UIntType;
};

// Class template oneapi::mkl::rng::bits
//
// Represents bits of underlying random number engine
//
// Supported types:
//      std::uint32_t
//

template <typename UIntType = std::uint32_t>
class bits {
public:
    static_assert(std::is_same<UIntType, std::uint32_t>::value || std::is_same<UIntType, std::uint64_t>::value,
                  "oneMKL: rng/bits: type is not supported");
    using result_type = UIntType;
};

} // namespace rng
} // namespace mkl
} // namespace oneapi

#endif // _MKL_RNG_DISTRIBUTIONS_HPP_
