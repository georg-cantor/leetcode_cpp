#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/222.count-complete-tree-nodes.hpp>

TEST_CASE("test 222.count-complete-tree-nodes", "[222.count-complete-tree-nodes]") {
    Solution s;
    std::vector<int> in1{};
    std::vector<int> in2{1};
    std::vector<int> in3{1,2};
    std::vector<int> in4{1,2,3};
    std::vector<int> in5{1,2,3,4};
    std::vector<int> in6{1,2,3,4,5};
    std::vector<int> in7{1,2,3,4,5,6};
    std::vector<int> in8{1,2,3,4,5,6,7};
    std::vector<int> in9{1,2,3,4,5,6,7,8};
    std::vector<int> in10{1,2,3,4,5,6,7,8,9};
    std::vector<int> in11{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int ans1{0};
    int ans2{1};
    int ans3{2};
    int ans4{3};
    int ans5{4};
    int ans6{5};
    int ans7{6};
    int ans8{7};
    int ans9{8};
    int ans10{9};
    int ans11{15};

    REQUIRE(s.countNodes(build_from_level_order(in1)) == ans1);
    REQUIRE(s.countNodes(build_from_level_order(in2)) == ans2);
    REQUIRE(s.countNodes(build_from_level_order(in3)) == ans3);
    REQUIRE(s.countNodes(build_from_level_order(in4)) == ans4);
    REQUIRE(s.countNodes(build_from_level_order(in5)) == ans5);
    REQUIRE(s.countNodes(build_from_level_order(in6)) == ans6);
    REQUIRE(s.countNodes(build_from_level_order(in7)) == ans7);
    REQUIRE(s.countNodes(build_from_level_order(in8)) == ans8);
    REQUIRE(s.countNodes(build_from_level_order(in9)) == ans9);
    REQUIRE(s.countNodes(build_from_level_order(in10)) == ans10);
    REQUIRE(s.countNodes(build_from_level_order(in11)) == ans11);
}
