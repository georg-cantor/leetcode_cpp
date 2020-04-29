#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/124.binary-tree-maximum-path-sum.hpp>

TEST_CASE("test 124.binary-tree-maximum-path-sum", "[124.binary-tree-maximum-path-sum]") {
    Solution s;
    std::vector<int> in1{1,2,3};
    std::vector<int> in2{10,9,20,-1,-1,15,7};

    int ans1{6};
    int ans2{54};

    REQUIRE(s.maxPathSum(build_from_level_order(in1)) == ans1);
    REQUIRE(s.maxPathSum(build_from_level_order(in2)) == ans2);
}
