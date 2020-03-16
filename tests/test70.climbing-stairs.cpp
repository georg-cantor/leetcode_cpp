#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/70.climbing-stairs.hpp>

TEST_CASE("test 70.climbing-stairs", "[70.climbing-stairs]") {
    Solution s;
    int in1{1};
    int in2{2};
    int in3{3};
    int in4{4};
    int in5{20};

    int ans1{1};
    int ans2{2};
    int ans3{3};
    int ans4{5};
    int ans5{10946};

    REQUIRE(s.climbStairs(in1) == ans1);
    REQUIRE(s.climbStairs(in2) == ans2);
    REQUIRE(s.climbStairs(in3) == ans3);
    REQUIRE(s.climbStairs(in4) == ans4);
    REQUIRE(s.climbStairs(in5) == ans5);
}
