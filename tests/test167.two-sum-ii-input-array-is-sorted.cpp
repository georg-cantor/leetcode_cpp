#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/167.two-sum-ii-input-array-is-sorted.hpp>

TEST_CASE("test 167.two-sum-ii-input-array-is-sorted", "[167.two-sum-ii-input-array-is-sorted]") {
    Solution s;
    std::vector<int> in11{2,7,11,15};
    int in12{26};
    std::vector<int> ans1{3,4};
    //REQUIRE(s.twoSum(in11, in12).at(0) == ans1.at(0));
    //REQUIRE(s.twoSum(in11, in12).at(1) == ans1.at(1));
    REQUIRE(s.twoSum(in11, in12) == ans1);
}
