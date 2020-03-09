#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <solutions/lib.hpp>
#include <vector>
#include <iostream>


TEST_CASE("Factorials are computed", "[factorial]") {

    REQUIRE(Factorial(0) == 1);
    std::vector<int> in1{1,2,3,-1,-1,4,5};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    show(build_from_level_order(in1), 0);
    std::cout << "============================================" << std::endl;
    show(build_from_level_order(in2), 0);
    /*
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
    */
}
