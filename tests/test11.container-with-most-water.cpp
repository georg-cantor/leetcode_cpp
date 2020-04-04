#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/11.container-with-most-water.hpp>

TEST_CASE("test 11.container-with-most-water", "[11.container-with-most-water]") {
    Solution s;
    std::vector<int> in1{1,8,6,2,5,4,8,3,7};
    int ans1{49};

    std::vector<int> in2{1,8,6,2,5,10,8,3,7,19,1,23};
    int ans2{80};

    std::vector<int> in3{1,2,4,3};
    int ans3{4};

    REQUIRE(s.maxArea(in1) == ans1);
    REQUIRE(s.maxArea(in2) == ans2);
    REQUIRE(s.maxArea(in3) == ans3);
};
