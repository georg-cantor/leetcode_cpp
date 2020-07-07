#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/66.plus-one.hpp>

TEST_CASE("test 66.plus-one", "[66.plus-one]") {
    Solution s;
    std::vector<int> in1{1,2,3};
    std::vector<int> in2{4,3,2,1};
    std::vector<int> in3{9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
    std::vector<int> in4{};

    std::vector<int> ans1{1,2,4};
    std::vector<int> ans2{4,3,2,2};
    std::vector<int> ans3{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    std::vector<int> ans4{1};

    REQUIRE(s.plusOne(in1) == ans1);
    REQUIRE(s.plusOne(in2) == ans2);
    REQUIRE(s.plusOne(in3) == ans3);
    REQUIRE(s.plusOne(in4) == ans4);
}
