#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/111.minimum-depth-of-binary-tree.hpp>

TEST_CASE("test 111.minimum-depth-of-binary-tree", "[111.minimum-depth-of-binary-tree]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1};
    std::vector<int> in4{};
    std::vector<int> in5{1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
    std::vector<int> in6{1,2};
    int ans1 = 2;
    int ans2 = 2;
    int ans3 = 1;
    int ans4 = 0;
    int ans5 = 4;
    int ans6 = 2;
    REQUIRE(s.minDepth(build_from_level_order(in1)) == ans1);
    REQUIRE(s.minDepth(build_from_level_order(in2)) == ans2);
    REQUIRE(s.minDepth(build_from_level_order(in3)) == ans3);
    REQUIRE(s.minDepth(build_from_level_order(in4)) == ans4);
    REQUIRE(s.minDepth(build_from_level_order(in5)) == ans5);
    REQUIRE(s.minDepth(build_from_level_order(in6)) == ans6);
}
