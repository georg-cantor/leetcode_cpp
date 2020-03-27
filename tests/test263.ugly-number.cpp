#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/263.ugly-number.hpp>

TEST_CASE("test 263.ugly-number", "[263.ugly-number]") {
    Solution s;
    int in1{6};
    int in2{8};
    int in3{14};
    int in4{20};
    int in5{22};
    int in6{0};
    int in7{-20};

    bool ans1{true};
    bool ans2{true};
    bool ans3{false};
    bool ans4{true};
    bool ans5{false};
    bool ans6{false};
    bool ans7{false};

    REQUIRE(s.isUgly(in1) == ans1);
    REQUIRE(s.isUgly(in2) == ans2);
    REQUIRE(s.isUgly(in3) == ans3);
    REQUIRE(s.isUgly(in4) == ans4);
    REQUIRE(s.isUgly(in5) == ans5);
    REQUIRE(s.isUgly(in6) == ans6);
    REQUIRE(s.isUgly(in7) == ans7);
}
