#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <solutions/1029.two-city-scheduling.hpp>

TEST_CASE("test 1029.two-city-scheduling", "[1029.two-city-scheduling]") {
    Solution s;
    std::vector<std::vector<int>> in1{{10,20},{30,200},{400,50},{30,20}};
    int ans1{110};
    std::vector<std::vector<int>> in2{{10,20},{30,200}};
    int ans2{50};
    std::vector<std::vector<int>> in3{};
    int ans3{0};

    REQUIRE(s.twoCitySchedCost(in1) == ans1);
    REQUIRE(s.twoCitySchedCost(in2) == ans2);
    REQUIRE(s.twoCitySchedCost(in3) == ans3);
}
