#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <functional>
#include <solutions/136.single-number.hpp>

TEST_CASE("test 136.single-number", "[136.single-number]") {
    Solution s;
    std::vector<int> in1{3,9,20,1,1,3,20};
    std::vector<int> in2{1,2,3,4,5,4,3,2,1};

    int ans1{9};
    int ans2{5};

    REQUIRE(s.singleNumber(in1) == ans1);
    REQUIRE(s.singleNumber(in2) == ans2);
}
