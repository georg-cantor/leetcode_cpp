#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <limits>
#include <algorithm>
#include <solutions/174.dungeon-game.hpp>

TEST_CASE("test 174.dungeon-game", "[174.dungeon-game]") {
    Solution s;
    std::vector<std::vector<int>> in1{{-2,-3,3},{-5,-10,1},{10,30,-5}};
    int ans1{7};
    std::vector<std::vector<int>> in2{{-2,-10,3},{-5,-3,1},{10,-30,-5}};
    int ans2{14};
    std::vector<std::vector<int>> in3{{-4}};
    int ans3{5};
    std::vector<std::vector<int>> in4{{100}};
    int ans4{1};

    REQUIRE(s.calculateMinimumHP(in1) == ans1);
    REQUIRE(s.calculateMinimumHP(in2) == ans2);
    REQUIRE(s.calculateMinimumHP(in3) == ans3);
    REQUIRE(s.calculateMinimumHP(in4) == ans4);
}
