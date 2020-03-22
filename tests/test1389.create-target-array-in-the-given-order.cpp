#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1389.create-target-array-in-the-given-order.hpp>

TEST_CASE("test 1389.Create Target Array in the Given Order", "[1389.Create Target Array in the Given Order]") {
    Solution s;
    std::vector<int> nums1{0,1,2,3,4};
    std::vector<int> index1{0,1,2,2,1};
    std::vector<int> ans1{0,4,1,3,2};

    REQUIRE(s.createTargetArray(nums1, index1) == ans1);
}