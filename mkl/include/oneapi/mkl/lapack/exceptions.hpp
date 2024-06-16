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

#ifndef _LAPACK_EXCEPTIONS_HPP__
#define _LAPACK_EXCEPTIONS_HPP__

#include "oneapi/mkl/export.hpp"
#include "oneapi/mkl/exceptions.hpp"

namespace oneapi {
namespace mkl {
namespace lapack {

class DLL_EXPORT exception
{
    public:
        exception(mkl::exception *_ex, std::int64_t info, std::int64_t detail = 0) : _info(info), _detail(detail), _ex(_ex) {}
        std::int64_t info()   const { return _info; }
        std::int64_t detail() const { return _detail; }
        const char*  what()   const { return _ex->what(); }
    private:
        std::int64_t   _info;
        std::int64_t   _detail;
        mkl::exception *_ex;
};

class DLL_EXPORT computation_error : public oneapi::mkl::computation_error, public oneapi::mkl::lapack::exception
{
    public:
        computation_error(const std::string &function, const std::string &info, std::int64_t code)
            : oneapi::mkl::computation_error("lapack", function, info), oneapi::mkl::lapack::exception(this, code) {}
        virtual ~computation_error();
        using oneapi::mkl::computation_error::what;
};

class DLL_EXPORT batch_error : public oneapi::mkl::batch_error, public oneapi::mkl::lapack::exception
{
    public:
        batch_error(const std::string &function, const std::string &info, std::int64_t num_errors, std::vector<std::int64_t> ids = {}, std::vector<std::exception_ptr> exceptions = {})
            : oneapi::mkl::batch_error("lapack", function, info), oneapi::mkl::lapack::exception(this, num_errors), _ids(ids), _exceptions(exceptions) {}
        virtual ~batch_error();
        using oneapi::mkl::batch_error::what;
        const std::vector<std::int64_t>& ids() const { return _ids; }
        const std::vector<std::exception_ptr>& exceptions() const { return _exceptions; }
    private:
        std::vector<std::int64_t> _ids;
        std::vector<std::exception_ptr> _exceptions;
};

class DLL_EXPORT invalid_argument : public oneapi::mkl::invalid_argument, public oneapi::mkl::lapack::exception
{
    public:
        invalid_argument(const std::string &function, const std::string &info, std::int64_t arg_position = 0, std::int64_t detail = 0)
            : oneapi::mkl::invalid_argument("lapack", function, info), oneapi::mkl::lapack::exception(this, arg_position, detail) {}
        virtual ~invalid_argument();
        using oneapi::mkl::invalid_argument::what;
};

} //namespace lapack
} //namespace mkl
} // namespace oneapi

#endif // _LAPACK_EXCEPTIONS_HPP__
