#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/62.unique-paths.hpp>

TEST_CASE("test 62.unique-paths", "[62.unique-paths]") {
    Solution s;
    int in11{3};
    int in12{2};
    int ans1{3};

    int in21{2};
    int in22{3};
    int ans2{3};

    int in31{7};
    int in32{3};
    int ans3{28};

    int in41{1};
    int in42{1};
    int ans4{1};

    REQUIRE(s.uniquePaths(in11, in12) ==  ans1);
    REQUIRE(s.uniquePaths(in21, in22) ==  ans2);
    REQUIRE(s.uniquePaths(in31, in32) ==  ans3);
    REQUIRE(s.uniquePaths(in41, in42) ==  ans4);
}
