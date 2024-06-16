/*******************************************************************************
* Copyright 2018-2022 Intel Corporation.
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

#ifndef _TYPES_HPP__
#define _TYPES_HPP__

#include <cstdint>
#include <cstddef> // for std::size_t
#include "mkl_types.h"
#include "mkl_cblas.h"
#include "oneapi/mkl/bfloat16.hpp"

namespace oneapi {
namespace mkl {


// BLAS flag types.
enum class transpose : char {
    nontrans = 0,
    trans = 1,
    conjtrans = 3,
    N = 0,
    T = 1,
    C = 3
};

enum class uplo : char {
    upper = 0,
    lower = 1,
    U = 0,
    L = 1
};

enum class diag : char {
    nonunit = 0,
    unit = 1,
    N = 0,
    U = 1
};

enum class side : char {
    left = 0,
    right = 1,
    L = 0,
    R = 1
};

enum class offset : char {
    row = 0,
    column = 1,
    fix = 2,
    R = 0,
    C = 1,
    F = 2
};

// LAPACK flag types.
enum class job : char {
    novec = 0,
    vec = 1,
    updatevec = 2,
    allvec = 3,
    somevec = 4,
    overwritevec = 5,
    N = 0,
    V = 1,
    U = 2,
    A = 3,
    S = 4,
    O = 5
};

enum class generate : char {
    q = 0,
    p = 1,
    none = 2,
    both = 3,
    Q = 0,
    P = 1,
    N = 2,
    V = 3
};

enum class compz : char {
    novectors = 0,
    vectors = 1,
    initvectors = 2,
    N = 0,
    V = 1,
    I = 2,
};

enum class direct : char {
    forward = 0,
    backward = 1,
    F = 0,
    B = 1,
};

enum class storev : char {
    columnwise = 0,
    rowwise = 1,
    C = 0,
    R = 1,
};

enum class rangev : char {
    all = 0,
    values = 1,
    indices = 2,
    A = 0,
    V = 1,
    I = 2,
};

enum class order : char {
    block = 0,
    entire = 1,
    B = 0,
    E = 1,
};

enum class jobsvd : char {
    novec = 0,
    vectors = 1,
    vectorsina = 2,
    somevec = 3,
    N = 0,
    A = 1,
    O = 2,
    S = 3
};
// Conversion functions to traditional Fortran characters.
inline const char * fortran_char(transpose t) {
    if (t == transpose::nontrans)  return "N";
    if (t == transpose::trans)     return "T";
    if (t == transpose::conjtrans) return "C";
    return "N";
}

inline const char * fortran_char(offset t) {
    if (t == offset::fix)  return "F";
    if (t == offset::row)  return "R";
    if (t == offset::column)  return "C";
    return "N";
}

inline const char * fortran_char(uplo u) {
    if (u == uplo::upper) return "U";
    if (u == uplo::lower) return "L";
    return "U";
}

inline const char * fortran_char(diag d) {
    if (d == diag::nonunit) return "N";
    if (d == diag::unit)    return "U";
    return "N";
}

inline const char * fortran_char(side s) {
    if (s == side::left)  return "L";
    if (s == side::right) return "R";
    return "L";
}

inline const char * fortran_char(job j) {
    if (j == job::novec)  return "N";
    if (j == job::vec)  return "V";
    if (j == job::updatevec)  return "U";
    if (j == job::allvec)  return "A";
    if (j == job::somevec)  return "S";
    if (j == job::overwritevec)  return "O";
    return "N";
}
inline const char * fortran_char(jobsvd j) {
    if (j == jobsvd::novec)  return "N";
    if (j == jobsvd::vectors)  return "A";
    if (j == jobsvd::vectorsina)  return "O";
    if (j == jobsvd::somevec)  return "S";
    return "N";
}

inline const char * fortran_char(generate v) {
    if (v == generate::q)  return "Q";
    if (v == generate::p)  return "P";
    if (v == generate::none)  return "N";
    if (v == generate::both)  return "B";
    return "Q";
}

inline const char * fortran_char(compz c) {
    if (c == compz::vectors) return "V";
    if (c == compz::initvectors) return "I";
    return "N";
}

inline const char * fortran_char(direct d) {
    if (d == direct::backward) return "B";
    return "F";
}

inline const char * fortran_char(storev s) {
    if (s == storev::rowwise) return "R";
    return "C";
}

inline const char * fortran_char(rangev r) {
    if (r == rangev::values) return "V";
    if (r == rangev::indices) return "I";
    return "A";
}

inline const char * fortran_char(order o) {
    if (o == order::entire) return "E";
    return "B";
}

// Conversion functions to CBLAS enums.
inline MKL_TRANSPOSE cblas_convert(transpose t) {
    if (t == transpose::nontrans)  return MKL_NOTRANS;
    if (t == transpose::trans)     return MKL_TRANS;
    if (t == transpose::conjtrans) return MKL_CONJTRANS;
    return MKL_NOTRANS;
}

inline MKL_UPLO cblas_convert(uplo u) {
    if (u == uplo::upper) return MKL_UPPER;
    if (u == uplo::lower) return MKL_LOWER;
    return MKL_UPPER;
}

inline MKL_DIAG cblas_convert(diag d) {
    if (d == diag::nonunit) return MKL_NONUNIT;
    if (d == diag::unit)    return MKL_UNIT;
    return MKL_NONUNIT;
}

inline MKL_SIDE cblas_convert(side s) {
    if (s == side::left)  return MKL_LEFT;
    if (s == side::right) return MKL_RIGHT;
    return MKL_LEFT;
}

enum class index_base : char {
    zero = 0,
    one  = 1,
};

enum class layout : char {
    row_major = 0,
    col_major = 1,
    R = 0,
    C = 1,
};

#ifndef _ONEAPI_MKL_SLICE_
#define _ONEAPI_MKL_SLICE_ 1
struct slice {
    std::size_t start;
    std::size_t size;
    std::int64_t stride;

    constexpr slice(): start(0), size(0), stride(0) { }
    constexpr slice(slice const &rhs) = default;
    constexpr slice& operator =(slice const &rhs) = default;

    constexpr slice(std::size_t _start, std::size_t _size, std::int64_t _stride): start(_start), size(_size), stride(_stride) { }
}; /* struct slice */
#endif

template <typename T>
class value_or_pointer {
    T value_;
    const T *ptr_;

public:
    // Constructor from value. Accepts not only type T but anything convertible to T.
    template <typename U, std::enable_if_t<std::is_convertible_v<U, T>, int> = 0>
    value_or_pointer(U value) : value_(value), ptr_(nullptr) {}

    // Constructor from pointer, assumed to be device-accessible.
    value_or_pointer(const T *ptr): value_(T(0)), ptr_(ptr) {}

    bool fixed() const {
        return ptr_ == nullptr;
    }

    T get_fixed_value() const {
        return value_;
    }

    const T* get_pointer() const {
        return ptr_;
    }

    T get() const {
        return ptr_ ? *ptr_ : value_;
    }

    void make_device_accessible(sycl::queue& queue) {
        if (!fixed() && sycl::get_pointer_type(ptr_, queue.get_context()) == sycl::usm::alloc::unknown) {
            *this = *ptr_;
        }
    }
};

} /* namespace mkl */
} // namespace oneapi

#endif /* _TYPES_HPP__ */
