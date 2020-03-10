#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/102.binary-tree-level-order-traversal.hpp>

TEST_CASE("test 102.binary-tree-level-order-traversal", "[102.binary-tree-level-order-traversal]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1};
    std::vector<int> in4{};
    std::vector<std::vector<int>> ans1{{3}, {9, 20}, {15, 7}};
    std::vector<std::vector<int>> ans2{{1}, {2,3}, {4,5}, {6,7}, {8,9}};
    std::vector<std::vector<int>> ans3{{1}};
    std::vector<std::vector<int>> ans4{};
    REQUIRE(s.levelOrder(build_from_level_order(in1)) == ans1);
    REQUIRE(s.levelOrder(build_from_level_order(in2)) == ans2);
    REQUIRE(s.levelOrder(build_from_level_order(in3)) == ans3);
    REQUIRE(s.levelOrder(build_from_level_order(in4)) == ans4);
}
