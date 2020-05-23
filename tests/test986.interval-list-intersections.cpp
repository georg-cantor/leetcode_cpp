#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/986.interval-list-intersections.hpp>

TEST_CASE("test 986.interval-list-intersections", "[986.interval-list-intersections]") {
    Solution s;
    std::vector<std::vector<int>> in11{{0,2},{5,10},{13,23},{24,25}};
    std::vector<std::vector<int>> in12{{1,5},{8,12},{15,24},{25,26}};
    std::vector<std::vector<int>> ans1{{1,2},{5,5},{8,10},{15,23},{24,24},{25,25}};

    REQUIRE(s.intervalIntersection(in11, in12) == ans1);
}
