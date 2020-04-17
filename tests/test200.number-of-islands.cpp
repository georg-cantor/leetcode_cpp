#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/200.number-of-islands.hpp>

TEST_CASE("test 200.number-of-islands", "[200.number-of-islands]") {
    Solution s;
    std::vector<std::vector<char>> in1{{'1','1','1','1','0'},
                                       {'1','1','0','1','0'},
                                       {'1','1','0','0','0'},
                                       {'0','0','0','0','0'}};
    std::vector<std::vector<char>> in2{{'1','1','0','0','0'},
                                       {'1','1','0','0','0'},
                                       {'0','0','1','0','0'},
                                       {'0','0','0','1','1'}};
    int ans1{1};
    int ans2{3};

    REQUIRE(s.numIslands(in1) == ans1);
    REQUIRE(s.numIslands(in2) == ans2);
}
