#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/463.island-perimeter.hpp>

TEST_CASE("test 463.island-perimeter", "[463.island-perimeter]") {
    Solution s;
    std::vector<std::vector<int>> in1{{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    int ans1{16};

    REQUIRE(s.islandPerimeter(in1) == ans1);
}
