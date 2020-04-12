//
// Created by 秦栋梁 on 2020/4/12.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1390.four-divisors.hpp>

TEST_CASE("test 1390.Four Divisors", "[1390.Four Divisors]") {
    Solution s;
    std::vector<int> nums1{21,4,7};
    int ans1{32};

    REQUIRE(s.sumFourDivisors(nums1) == ans1);
}