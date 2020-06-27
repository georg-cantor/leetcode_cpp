#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <cmath>
#include <limits>
#include <solutions/279.perfect-squares.hpp>

TEST_CASE("test 279.perfect-squares", "[279.perfect-squares]") {
    Solution s;
    int in1{12};
    int in2{13};
    int in3{47};

    int ans1{3};
    int ans2{2};
    int ans3{4};

    REQUIRE(s.numSquares(in1) == ans1);
    REQUIRE(s.numSquares(in2) == ans2);
    REQUIRE(s.numSquares(in3) == ans3);
}
