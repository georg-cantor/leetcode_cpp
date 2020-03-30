#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <unordered_map>
#include <vector>
#include <solutions/349.intersection-of-two-arrays.hpp>

TEST_CASE("test 349.intersection-of-two-arrays", "[349.intersection-of-two-arrays]") {
    Solution s;
    std::vector<int> in11{1,2,2,1};
    std::vector<int> in12{2,2};
    std::vector<int> in21{4,9,5};
    std::vector<int> in22{9,4,9,8,4};

    std::vector<int> ans1{2};
    std::vector<int> ans2{9,4};

    REQUIRE(s.intersection(in11, in12) == ans1);
    REQUIRE(s.intersection(in21, in22) == ans2);
}
