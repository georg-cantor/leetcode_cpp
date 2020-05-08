#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1232.check-if-it-is-a-straight-line.hpp>

TEST_CASE("test 1232.check-if-it-is-a-straight-line", "[1232.check-if-it-is-a-straight-line]") {
    Solution s;
    std::vector<std::vector<int>> in1{{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    std::vector<std::vector<int>> in2{{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
    bool ans1{true};
    bool ans2{false};

    REQUIRE(s.checkStraightLine(in1) == ans1);
    REQUIRE(s.checkStraightLine(in2) == ans2);
}
