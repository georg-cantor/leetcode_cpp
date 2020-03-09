#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/104.maximum-depth-of-binary-tree.hpp>

TEST_CASE("test 104.maximum-depth-of-binary-tree", "[104.maximum-depth-of-binary-tree]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    int ans1 = 3;
    int ans2 = 5;
    REQUIRE(s.maxDepth(generateTreeFromArr(in1)) == ans1);
    REQUIRE(s.maxDepth(generateTreeFromArr(in2)) == ans2);
}
