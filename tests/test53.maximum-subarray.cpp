#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/53.maximum-subarray.hpp>

TEST_CASE("test 53", "[maximum-subarray]") {
  Solution s;
  std::vector<int> in = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int ans = 7;
  REQUIRE(s.maxSubArray(in) == ans);
}
