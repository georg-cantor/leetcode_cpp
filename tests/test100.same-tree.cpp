#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/100.same-tree.hpp>

TEST_CASE("test 100.same-tree", "[100.same-tree]") {
    Solution s;
    std::vector<int> in11{1,2,3};
    std::vector<int> in12{1,2,3};
    bool ans1{true};

    std::vector<int> in21{1,2};
    std::vector<int> in22{1,-1,2};
    bool ans2{false};

    std::vector<int> in31{1,2,1};
    std::vector<int> in32{1,1,2};
    bool ans3{false};

    REQUIRE(s.isSameTree(build_from_level_order(in11), build_from_level_order(in12)) == ans1);
    REQUIRE(s.isSameTree(build_from_level_order(in21), build_from_level_order(in22)) == ans2);
    REQUIRE(s.isSameTree(build_from_level_order(in31), build_from_level_order(in32)) == ans3);
}
