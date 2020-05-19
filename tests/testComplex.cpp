//
// Created by 秦栋梁 on 2020/5/19.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "complex.hpp"

TEST_CASE("test complex class", "[1.test of initialization]") {
    Complex c1(1, 2);
    REQUIRE(c1.real() == 1);
    REQUIRE(c1.imag() == 2);
    c1.real(3);
    REQUIRE(c1.real() == 3);

}

