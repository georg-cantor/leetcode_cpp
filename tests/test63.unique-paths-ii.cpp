#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/63.unique-paths-ii.hpp>

TEST_CASE("test 63.unique-paths-ii", "[63.unique-paths-ii]") {
    Solution s;
    std::vector<std::vector<int>> in1{{0,0,0},
                                      {0,1,0},
                                      {0,0,0}};
    int ans1{2};
    std::vector<std::vector<int>> in2{{0,0,0},
                                      {1,1,0},
                                      {0,0,0}};
    int ans2{1};
    std::vector<std::vector<int>> in3{{1,0,0},
                                      {0,0,0},
                                      {0,0,0}};
    int ans3{0};
    REQUIRE(s.uniquePathsWithObstacles(in1) == ans1);
    REQUIRE(s.uniquePathsWithObstacles(in2) == ans2);
    REQUIRE(s.uniquePathsWithObstacles(in3) == ans3);
}

