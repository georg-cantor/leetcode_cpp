#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <solutions/75.sort-colors.hpp>

TEST_CASE("test 75.sort-colors", "[75.sort-colors]") {
    Solution s;
    std::vector<int> in1{2,0,2,1,1,0};
    std::vector<int> in2{2,0,2,1,1,0,2,1,2,0,2};

    std::vector<int> ans1{0,0,1,1,2,2};
    std::vector<int> ans2{0,0,0,1,1,1,2,2,2,2,2};

    s.sortColors(in1);
    s.sortColors(in2);
    REQUIRE(in1 == ans1);
    REQUIRE(in2 == ans2);
}
