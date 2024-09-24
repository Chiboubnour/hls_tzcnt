
//              Copyright Catch2 Authors
// Distributed under the Boost Software License, Version 1.0.
//   (See accompanying file LICENSE.txt or copy at
//        https://www.boost.org/LICENSE_1_0.txt)

// SPDX-License-Identifier: BSL-1.0

// 010-TestCase.cpp
// And write tests in the same file:
#include <catch2/catch_test_macros.hpp>


#include "./tzcnt_u64_ref.hpp"
#include "../src/tzcnt_u64.hpp"

TEST_CASE( "tzcnt_c", "[tzcnt:c]" ) {
    REQUIRE( tzcnt_u64_builtin(0x00000000000001) == 0 );
}

TEST_CASE( "tzcnt_hls", "[tzcnt:hls]" ) {
    REQUIRE( tzcnt_u64(0x00000000000001) == 0 );
}

TEST_CASE("Tests aléatoires entre tzcnt_u64_builtin et tzcnt_u64_c", "[eq-rand]") {
    for (int i = 0; i < 65536; i += 1) {
        uint64_t n = ((uint64_t)rand() << 32) | rand(); 

        REQUIRE(tzcnt_u64_builtin(n) == tzcnt_u64(n));
    }
}

