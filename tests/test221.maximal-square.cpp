#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/221.maximal-square.hpp>

TEST_CASE("test 221.maximal-square", "[221.maximal-square]") {
    Solution s;
    std::vector<std::vector<char>> in1{{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'},
                                       {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
    int ans1{4};
    std::vector<std::vector<char>> in2{{'1'}};
    int ans2{1};

    REQUIRE(s.maximalSquare(in1) == ans1);
    REQUIRE(s.maximalSquare(in2) == ans2);
}
