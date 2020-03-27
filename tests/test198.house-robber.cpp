#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/198.house-robber.hpp>

TEST_CASE("test 198.house-robber", "[198.house-robber]") {
    Solution s;
    std::vector<int> in1{1,2,3,1};
    std::vector<int> in2{4,9,7,1,3,6,2};
    std::vector<int> in3{2,7,9,3,1};
    std::vector<int> in4{4,2,7,1,3,6,9};

    int ans1{4};
    int ans2{17};
    int ans3{12};
    int ans4{23};

    REQUIRE(s.rob(in1) == ans1);
    REQUIRE(s.rob(in2) == ans2);
    REQUIRE(s.rob(in3) == ans3);
    REQUIRE(s.rob(in4) == ans4);
}
