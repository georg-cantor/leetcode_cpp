#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/101.symmetric-tree.hpp>

TEST_CASE("test 101.symmetric-tree", "[101.symmetric-tree]") {
    Solution s;
    std::vector<int> in1{1,2,2,3,4,4,3};
    std::vector<int> in2{1,2,2,-1,3,-1,3};

    bool ans1{true};
    bool ans2{false};

    REQUIRE(s.isSymmetric(build_from_level_order(in1)) == ans1);
    REQUIRE(s.isSymmetric(build_from_level_order(in2)) == ans2);
}
