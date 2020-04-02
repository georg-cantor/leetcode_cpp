#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/137.single-number-ii.hpp>

TEST_CASE("test 137.single-number-ii", "[137.single-number-ii]") {
    Solution s;
    std::vector<int> in1{3,9,20,3,9,3,9};
    std::vector<int> in2{1,2,3,4,5,4,3,2,1,2,3,4,1};
    std::vector<int> in3{2,2,3,2};
    std::vector<int> in4{0,-1,0,-1,0,-1,99};

    int ans1{20};
    int ans2{5};
    int ans3{3};
    int ans4{99};

    REQUIRE(s.singleNumber(in1) == ans1);
    REQUIRE(s.singleNumber(in2) == ans2);
    REQUIRE(s.singleNumber(in3) == ans3);
    REQUIRE(s.singleNumber(in4) == ans4);
}
