#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <list>
#include <solutions/406.queue-reconstruction-by-height.hpp>

TEST_CASE("test 406.queue-reconstruction-by-height", "[406.queue-reconstruction-by-height]") {
    Solution s;
    std::vector<std::vector<int>> in1{{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};
    std::vector<std::vector<int>> ans1{{5,0}, {7,0}, {5,2}, {6,1}, {4,4}, {7,1}};
    std::vector<std::vector<int>> in2{{7,0}};
    std::vector<std::vector<int>> ans2{{7,0}};
    std::vector<std::vector<int>> in3{};
    std::vector<std::vector<int>> ans3{};
    REQUIRE(s.reconstructQueue(in1) == ans1);
    REQUIRE(s.reconstructQueue(in2) == ans2);
    REQUIRE(s.reconstructQueue(in3) == ans3);
}
