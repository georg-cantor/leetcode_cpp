#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/53.maximum-subarray.hpp>

TEST_CASE("test 53", "[maximum-subarray]") {
  Solution s;
  std::vector<int> in = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  std::vector<int> in2 = {4, -3, 5, -2, -1, 2, 6, -2};
  std::vector<int> in3 = {-1};
  std::vector<int> in4 = {-1, 11, -4, 13, -5, -2};
  int ans = 6;
  int ans2 = 11;
  int ans3 = -1;
  int ans4 = 20;
  REQUIRE(s.maxSubArray(in) == ans);
  REQUIRE(s.maxSubArray(in2) == ans2);
  REQUIRE(s.maxSubArray(in3) == ans3);
  REQUIRE(s.maxSubArray(in4) == ans4);
}
