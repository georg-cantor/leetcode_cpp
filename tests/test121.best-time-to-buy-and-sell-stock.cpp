#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/121.best-time-to-buy-and-sell-stock.hpp>

TEST_CASE("test 121.best-time-to-buy-and-sell-stock", "[121.best-time-to-buy-and-sell-stock]") {
    Solution s;
    std::vector<int> in = {7,6,4,3,1};
    std::vector<int> in2 = {7,1,5,3,6,4};
    std::vector<int> in3 = {7,2,3,5,6,1,3};
    std::vector<int> in4 = {7,2,7,5,6,1,7};
    std::vector<int> in5 = {2,1,2,1,0,0,1};
    std::vector<int> in6 = {2,11,1,4,7};
    int ans = 0;
    int ans2 = 5;
    int ans3 = 4;
    int ans4 = 6;
    int ans5 = 1;
    int ans6 = 9;
    REQUIRE(s.maxProfit(in) == ans);
    REQUIRE(s.maxProfit(in2) == ans2);
    REQUIRE(s.maxProfit(in3) == ans3);
    REQUIRE(s.maxProfit(in4) == ans4);
    REQUIRE(s.maxProfit(in5) == ans5);
    REQUIRE(s.maxProfit(in6) == ans6);
}
