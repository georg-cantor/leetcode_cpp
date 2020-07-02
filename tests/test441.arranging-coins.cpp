#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/441.arranging-coins.hpp>

TEST_CASE("test 441.arranging-coins", "[441.arranging-coins]") {
    Solution s;
    int in1{5};
    int in2{8};
    int in3{101};
    int in4{1001};

    int ans1{2};
    int ans2{3};
    int ans3{13};
    int ans4{44};

    REQUIRE(s.arrangeCoins(in1) ==  ans1);
    REQUIRE(s.arrangeCoins(in2) ==  ans2);
    REQUIRE(s.arrangeCoins(in3) ==  ans3);
    REQUIRE(s.arrangeCoins(in4) ==  ans4);
}
