#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <queue>
#include <solutions/1046.last-stone-weight.hpp>

TEST_CASE("test 1046.last-stone-weight", "[1046.last-stone-weight]") {
    Solution s;
    std::vector<int> in1{2,7,4,1,8,1};
    int ans1{1};
    REQUIRE(s.lastStoneWeight(in1) == ans1);
}
