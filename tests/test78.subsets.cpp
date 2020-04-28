#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <bitset>
#include <set>
#include <solutions/78.subsets.hpp>

TEST_CASE("test 78.subsets", "[78.subsets]") {
    Solution s;
    std::vector<int> in1{1,2,3};
    std::vector<std::vector<int>> ans12{{},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}};
    std::vector<std::vector<int>> ans11 = s.subsets(in1);
    std::set<std::vector<int>> set11(ans11.begin(), ans11.end());
    std::set<std::vector<int>> set12(ans12.begin(), ans12.end());
    REQUIRE(set11 == set12);
}
