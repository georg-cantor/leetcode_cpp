#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <solutions/560.subarray-sum-equals-k.hpp>

TEST_CASE("test 560.subarray-sum-equals-k", "[560.subarray-sum-equals-k]") {
    Solution s;
    std::vector<int> in11{1,1,1};
    int in12{2};
    int ans1{2};

    std::vector<int> in21{1,2,3,3,0,3,4,2};
    int in22{6};
    int ans2{5};

    REQUIRE(s.subarraySum(in11, in12) == ans1);
    REQUIRE(s.subarraySum(in21, in22) == ans2);
}
