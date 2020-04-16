#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <solutions/189.rotate-array.hpp>

TEST_CASE("test 189.rotate-array", "[189.rotate-array]") {
    Solution s;
    std::vector<int> in11{1,2,3,4,5,6,7};
    int in12{3};
    std::vector<int> ans1{5,6,7,1,2,3,4};

    std::vector<int> in21{-1,-100,3,99};
    int in22{2};
    std::vector<int> ans2{3,99,-1,-100};

    std::vector<int> in31{1,2};
    int in32{3};
    std::vector<int> ans3{2,1};

    s.rotate(in11, in12);
    REQUIRE(in11 == ans1);
    s.rotate(in21, in22);
    REQUIRE(in21 == ans2);
    s.rotate(in31, in32);
    REQUIRE(in31 == ans3);
}
