#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/33.search-in-rotated-sorted-array.hpp>

TEST_CASE("test 33.search-in-rotated-sorted-array", "[33.search-in-rotated-sorted-array]") {
    Solution s;
    std::vector<int> in11{4,5,6,7,0,1,2};
    int in12{0};
    std::vector<int> in21{4,5,6,7,0,1,2};
    int in22{3};

    int ans1{4};
    int ans2{-1};

    REQUIRE(s.search(in11, in12) == ans1);
    REQUIRE(s.search(in21, in22) == ans2);
};
