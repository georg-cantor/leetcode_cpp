#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/226.invert-binary-tree.hpp>

TEST_CASE("test 226.invert-binary-tree", "[226.invert-binary-tree]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1};
    std::vector<int> in4{};

    std::vector<int> ans1{3,20,9,7,15};
    std::vector<int> ans2{1,3,2,5,4,7,6,-1,-1,9,8};
    std::vector<int> ans3{1};
    std::vector<int> ans4{};

    REQUIRE(tree_to_vector(s.invertTree(build_from_level_order(in1))) == ans1);
    REQUIRE(tree_to_vector(s.invertTree(build_from_level_order(in2))) == ans2);
    REQUIRE(tree_to_vector(s.invertTree(build_from_level_order(in3))) == ans3);
    REQUIRE(tree_to_vector(s.invertTree(build_from_level_order(in4))) == ans4);
}
