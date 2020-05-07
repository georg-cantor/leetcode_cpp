#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/993.cousins-in-binary-tree.hpp>

TEST_CASE("test 993.cousins-in-binary-tree", "[993.cousins-in-binary-tree]") {
    Solution s;
    std::vector<int> in11{1,2,3,4};
    int in12{4};
    int in13{3};

    std::vector<int> in21{1,2,3,-1,4,-1,5};
    int in22{5};
    int in23{4};

    std::vector<int> in31{1,2,3,-1,4};
    int in32{2};
    int in33{3};

    bool ans1{false};
    bool ans2{true};
    bool ans3{false};

    REQUIRE(s.isCousins(build_from_level_order(in11), in12, in13) == ans1);
    REQUIRE(s.isCousins(build_from_level_order(in31), in32, in33) == ans3);
    REQUIRE(s.isCousins(build_from_level_order(in21), in22, in23) == ans2);
}
