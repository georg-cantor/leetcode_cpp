#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/110.balanced-binary-tree.hpp>

TEST_CASE("test 110.balanced-binary-tree Solution", "[110.balanced-binary-tree solution]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1};
    std::vector<int> in4{};
    std::vector<int> in5{1,2,2,3,3,-1,-1,4,4};
    bool ans1{true};
    bool ans2{false};
    bool ans3{true};
    bool ans4{true};
    bool ans5{false};
    REQUIRE(s.isBalanced(build_from_level_order(in1)) == ans1);
    REQUIRE(s.isBalanced(build_from_level_order(in2)) == ans2);
    REQUIRE(s.isBalanced(build_from_level_order(in3)) == ans3);
    REQUIRE(s.isBalanced(build_from_level_order(in4)) == ans4);
    REQUIRE(s.isBalanced(build_from_level_order(in5)) == ans5);
}

TEST_CASE("test 110.balanced-binary-tree Solution1", "[110.balanced-binary-tree solution1]") {
    Solution1 s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1};
    std::vector<int> in4{};
    std::vector<int> in5{1,2,2,3,3,-1,-1,4,4};
    bool ans1{true};
    bool ans2{false};
    bool ans3{true};
    bool ans4{true};
    bool ans5{false};
    REQUIRE(s.isBalanced(build_from_level_order(in1)) == ans1);
    REQUIRE(s.isBalanced(build_from_level_order(in2)) == ans2);
    REQUIRE(s.isBalanced(build_from_level_order(in3)) == ans3);
    REQUIRE(s.isBalanced(build_from_level_order(in4)) == ans4);
    REQUIRE(s.isBalanced(build_from_level_order(in5)) == ans5);
}

