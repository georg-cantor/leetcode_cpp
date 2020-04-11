#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/543.diameter-of-binary-tree.hpp>

TEST_CASE("test 543.diameter-of-binary-tree", "[543.diameter-of-binary-tree]") {
    Solution s;
    std::vector<int> in1{1,2,3,4,5};
    std::vector<int> in2{3,9,20,-1,-1,15,7};
    std::vector<int> in3{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    int ans1{3};
    int ans2{3};
    int ans3{5};
    REQUIRE(s.diameterOfBinaryTree(build_from_level_order(in1)) == ans1);
    REQUIRE(s.diameterOfBinaryTree(build_from_level_order(in2)) == ans2);
    REQUIRE(s.diameterOfBinaryTree(build_from_level_order(in3)) == ans3);
}
