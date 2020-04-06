#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/112.path-sum.hpp>

TEST_CASE("test 112.path-sum", "[112.path-sum]") {
    Solution s;
    std::vector<int> in11{5,4,8,11,-1,13,4,7,2,-1,-1,-1,1};
    std::vector<int> in21{5};
    std::vector<int> in31{5,4,8};
    int in12{22};
    int in22{5};
    int in32{13};

    int ans1{true};
    int ans2{true};
    int ans3{true};

    REQUIRE(s.hasPathSum(build_from_level_order(in11), in12) == ans1);
    REQUIRE(s.hasPathSum(build_from_level_order(in21), in22) == ans2);
    REQUIRE(s.hasPathSum(build_from_level_order(in31), in32) == ans3);
}
