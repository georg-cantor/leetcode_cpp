#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/886.possible-bipartition.hpp>

TEST_CASE("test 886.possible-bipartition", "[886.possible-bipartition]") {
    Solution s;
    int in11{4};
    std::vector<std::vector<int>> in12{{1,2},{1,3},{2,4}};
    bool ans1{true};

    int in21{3};
    std::vector<std::vector<int>> in22{{1,2},{1,3},{2,3}};
    bool ans2{false};

    int in31{5};
    std::vector<std::vector<int>> in32{{1,2},{2,3},{3,4},{4,5},{1,5}};
    bool ans3{false};

    REQUIRE(s.possibleBipartition(in11, in12) == ans1);
    REQUIRE(s.possibleBipartition(in21, in22) == ans2);
    REQUIRE(s.possibleBipartition(in31, in32) == ans3);
}
