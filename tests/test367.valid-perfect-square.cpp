#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/367.valid-perfect-square.hpp>

TEST_CASE("test 367.valid-perfect-square", "[367.valid-perfect-square]") {
    Solution s;
    int in1{16};
    int in2{14};
    int in3{1};
    int in4{2147483647};

    bool ans1{true};
    bool ans2{false};
    bool ans3{true};
    bool ans4{false};

    REQUIRE(s.isPerfectSquare(in1) == ans1);
    REQUIRE(s.isPerfectSquare(in2) == ans2);
    REQUIRE(s.isPerfectSquare(in3) == ans3);
    REQUIRE(s.isPerfectSquare(in4) == ans4);
}
