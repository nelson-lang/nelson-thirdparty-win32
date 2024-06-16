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

#ifndef _MKL_RNG_ENGINES_HPP_
#define _MKL_RNG_ENGINES_HPP_

#include "oneapi/mkl/export.hpp"

#include "oneapi/mkl/rng/detail/engine_base.hpp"
#include "oneapi/mkl/rng/functions.hpp"

namespace oneapi {
namespace mkl {
namespace rng {

// PSEUDO-RANDOM NUMBER ENGINES

// Class oneapi::mkl::rng::philox4x32x10
//
// Represents Philox4x32-10 counter-based pseudorandom number generator
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT philox4x32x10 : detail::engine_base<philox4x32x10> {
public:
    static constexpr std::uint64_t default_seed = 0;

    philox4x32x10(sycl::queue queue, std::uint64_t seed = default_seed);

    philox4x32x10(sycl::queue queue, std::initializer_list<std::uint64_t> seed);

    philox4x32x10(const philox4x32x10& other);

    philox4x32x10(philox4x32x10&& other);

    philox4x32x10& operator=(const philox4x32x10& other);

    philox4x32x10& operator=(philox4x32x10&& other);

    ~philox4x32x10();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void skip_ahead(std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::mrg32k3a
//
// Represents the combined recurcive pseudorandom number generator
//
// Supported parallelization methods:
//      skip_ahead
//
namespace mrg32k3a_mode {
struct optimal {};
struct custom {
    custom() = delete;
    std::uint32_t num_streams;
};
constexpr optimal optimal_v{};
} // namespace mrg32k3a_mode

class DLL_EXPORT mrg32k3a : detail::engine_base<mrg32k3a> {
public:
    static constexpr std::uint32_t default_seed = 1;

    mrg32k3a(sycl::queue queue, std::uint32_t seed = default_seed);
    
    mrg32k3a(sycl::queue queue, std::uint32_t seed, mrg32k3a_mode::optimal mode);
    
    mrg32k3a(sycl::queue queue, std::uint32_t seed, mrg32k3a_mode::custom mode);

    mrg32k3a(sycl::queue queue, std::initializer_list<std::uint32_t> seed);

    mrg32k3a(sycl::queue queue, std::initializer_list<std::uint32_t> seed, 
             mrg32k3a_mode::optimal mode);

    mrg32k3a(sycl::queue queue, std::initializer_list<std::uint32_t> seed, 
             mrg32k3a_mode::custom mode);

    mrg32k3a(const mrg32k3a& other);

    mrg32k3a(mrg32k3a&& other);

    mrg32k3a& operator=(const mrg32k3a& other);

    mrg32k3a& operator=(mrg32k3a&& other);

    ~mrg32k3a();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void skip_ahead(std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::mcg31m1
//
// Represents the 31-bit multiplicative congruential pseudorandom number generator
//
// Supported parallelization methods:
//      skip_ahead
//      leapfrog
class DLL_EXPORT mcg31m1 : detail::engine_base<mcg31m1> {
public:
    static constexpr std::uint32_t default_seed = 1;

    mcg31m1(sycl::queue queue, std::uint32_t seed = default_seed);

    mcg31m1(const mcg31m1& other);

    mcg31m1(mcg31m1&& other);

    mcg31m1& operator=(const mcg31m1& other);

    mcg31m1& operator=(mcg31m1&& other);

    ~mcg31m1();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void leapfrog(std::uint64_t idx, std::uint64_t stride);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void leapfrog(Engine& engine, std::uint64_t idx, std::uint64_t stride);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::mcg59
//
// Represents the 59-bit multiplicative congruential pseudorandom
//
// number generator
// Supported parallelization methods:
//      skip_ahead
//      leapfrog
class DLL_EXPORT mcg59 : detail::engine_base<mcg59> {
public:
    static constexpr std::uint64_t default_seed = 1;

    mcg59(sycl::queue queue, std::uint64_t seed = default_seed);

    mcg59(const mcg59& other);

    mcg59(mcg59&& other);

    mcg59& operator=(const mcg59& other);

    mcg59& operator=(mcg59&& other);

    ~mcg59();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void leapfrog(std::uint64_t idx, std::uint64_t stride);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void leapfrog(Engine& engine, std::uint64_t idx, std::uint64_t stride);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::r250
//
// Represents the 32-bit generalized feedback shift register pseudorandom number generator
class DLL_EXPORT r250 : detail::engine_base<r250> {
public:
    static constexpr std::uint32_t default_seed = 1;

    r250(sycl::queue queue, std::uint32_t seed = default_seed);

    r250(sycl::queue queue, std::vector<std::uint32_t> seed);

    r250(const r250& other);

    r250(r250&& other);

    r250& operator=(const r250& other);

    r250& operator=(r250&& other);

    ~r250();

private:
    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::wichmann_hill
//
// Represents Whichmann-Hill pseudorandom number generator (a set of 273 basic generators)
//
// Supported parallelization methods:
//      skip_ahead
//      leapfrog
class DLL_EXPORT wichmann_hill : detail::engine_base<wichmann_hill> {
public:
    static constexpr std::uint32_t default_seed = 1;

    wichmann_hill(sycl::queue queue, std::uint32_t seed = default_seed);

    wichmann_hill(sycl::queue queue, std::uint32_t seed, std::uint32_t engine_idx);

    wichmann_hill(sycl::queue queue, std::initializer_list<std::uint32_t> seed);

    wichmann_hill(sycl::queue queue, std::initializer_list<std::uint32_t> seed,
                  std::uint32_t engine_idx);

    wichmann_hill(const wichmann_hill& other);

    wichmann_hill(wichmann_hill&& other);

    wichmann_hill& operator=(const wichmann_hill& other);

    wichmann_hill& operator=(wichmann_hill&& other);

    ~wichmann_hill();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void leapfrog(std::uint64_t idx, std::uint64_t stride);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void leapfrog(Engine& engine, std::uint64_t idx, std::uint64_t stride);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::mt19937
//
// Represents Mersenne Twister pseudorandom number generator MT19937
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT mt19937 : detail::engine_base<mt19937> {
public:
    static constexpr std::uint32_t default_seed = 1;

    mt19937(sycl::queue queue, std::uint32_t seed = default_seed);

    mt19937(sycl::queue queue, std::initializer_list<std::uint32_t> seed);

    mt19937(const mt19937& other);

    mt19937(mt19937&& other);

    mt19937& operator=(const mt19937& other);

    mt19937& operator=(mt19937&& other);

    ~mt19937();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::sfmt19937
//
// Represents SIMD-oriented Fast Mersenne Twister pseudorandom number generator SFMT19937
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT sfmt19937 : detail::engine_base<sfmt19937> {
public:
    static constexpr std::uint32_t default_seed = 1;

    sfmt19937(sycl::queue queue, std::uint32_t seed = default_seed);

    sfmt19937(sycl::queue queue, std::initializer_list<std::uint32_t> seed);

    sfmt19937(const sfmt19937& other);

    sfmt19937(sfmt19937&& other);

    sfmt19937& operator=(const sfmt19937& other);

    sfmt19937& operator=(sfmt19937&& other);

    ~sfmt19937();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::mt2203
//
// Represents Mersenne Twister pseudorandom number generator MT2203 (a set of 6024
// basic generators)
class DLL_EXPORT mt2203 : detail::engine_base<mt2203> {
public:
    static constexpr std::uint32_t default_seed = 1;

    mt2203(sycl::queue queue, std::uint32_t seed = default_seed);

    mt2203(sycl::queue queue, std::uint32_t seed, std::uint32_t engine_idx);

    mt2203(sycl::queue queue, std::initializer_list<std::uint32_t> seed);

    mt2203(sycl::queue queue, std::initializer_list<std::uint32_t> seed, std::uint32_t engine_idx);

    mt2203(const mt2203& other);

    mt2203(mt2203&& other);

    mt2203& operator=(const mt2203& other);

    mt2203& operator=(mt2203&& other);

    ~mt2203();

private:
    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::ars5
//
// Represents ARS-5 counter-based pseudorandom number generator
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT ars5 : detail::engine_base<ars5> {
public:
    static constexpr std::uint64_t default_seed = 0;

    ars5(sycl::queue queue, std::uint64_t seed = default_seed);

    ars5(sycl::queue queue, std::initializer_list<std::uint64_t> seed);

    ars5(const ars5& other);

    ars5(ars5&& other);

    ars5& operator=(const ars5& other);

    ars5& operator=(ars5&& other);

    ~ars5();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    void skip_ahead(std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::initializer_list<std::uint64_t> num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// NON-DETERMINISTIC RANDOM NUMBER ENGINES

// Class oneapi::mkl::rng::nondeterministic
//
// Represents the non-deterministic random number generator
// (RDRAND-based)
class DLL_EXPORT nondeterministic : detail::engine_base<nondeterministic> {
public:
    nondeterministic(sycl::queue queue);

    nondeterministic(const nondeterministic& other);

    nondeterministic(nondeterministic&& other);

    nondeterministic& operator=(const nondeterministic& other);

    nondeterministic& operator=(nondeterministic&& other);

    ~nondeterministic();

private:
    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// QUASI-RANDOM NUMBER ENGINES

// Class oneapi::mkl::rng::sobol
//
// Represents the Sobol quasi-random number generator
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT sobol : detail::engine_base<sobol> {
public:
    static constexpr std::uint32_t default_dimensions_number = 1;

    sobol(sycl::queue queue, std::uint32_t dimensions = default_dimensions_number);

    sobol(sycl::queue queue, std::vector<std::uint32_t>& direction_numbers);

    sobol(const sobol& other);

    sobol(sobol&& other);

    sobol& operator=(const sobol& other);

    sobol& operator=(sobol&& other);

    ~sobol();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// Class oneapi::mkl::rng::niederreiter
//
// Represents the Niederreiter quasi-random number generator
//
// Supported parallelization methods:
//      skip_ahead
class DLL_EXPORT niederreiter : detail::engine_base<niederreiter> {
public:
    static constexpr std::uint32_t default_dimensions_number = 1;

    niederreiter(sycl::queue queue, std::uint32_t dimensions = default_dimensions_number);

    niederreiter(sycl::queue queue, std::vector<std::uint32_t>& irred_polynomials);

    niederreiter(const niederreiter& other);

    niederreiter(niederreiter&& other);

    niederreiter& operator=(const niederreiter& other);

    niederreiter& operator=(niederreiter&& other);

    ~niederreiter();

private:
    void skip_ahead(std::uint64_t num_to_skip);

    template <typename Engine>
    friend void skip_ahead(Engine& engine, std::uint64_t num_to_skip);

    template <typename Distr, typename Engine>
    friend void generate(const Distr& distr, Engine& engine, std::int64_t n,
                         sycl::buffer<typename Distr::result_type, 1>& r);

    template <typename Distr, typename Engine>
    friend sycl::event generate(const Distr& distr, Engine& engine, std::int64_t n,
                                typename Distr::result_type* r,
                                const std::vector<sycl::event>& dependencies);

    template <typename Engine>
    friend std::int64_t get_state_size(Engine& engine);

    template <typename Engine>
    friend void save_state(Engine& engine, std::uint8_t* mem);

    template <typename Engine>
    friend void save_state(Engine& engine, const std::string& filename);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::uint8_t* mem);

    template <typename Engine>
    friend Engine load_state(const sycl::queue& queue, const std::string& filename);
};

// default engine to be used for common cases
using default_engine = philox4x32x10;

} // namespace rng
} // namespace mkl
} // namespace oneapi

#endif // _MKL_RNG_ENGINES_HPP_
