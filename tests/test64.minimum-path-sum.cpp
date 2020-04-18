#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/64.minimum-path-sum.hpp>

TEST_CASE("test 64.minimum-path-sum", "[64.minimum-path-sum]") {
    Solution s;
    std::vector<std::vector<int>> in1{{1,3,1},
                                      {1,5,1},
                                      {4,2,1}};
    int ans1{7};
    REQUIRE(s.minPathSum(in1) == ans1);
}
