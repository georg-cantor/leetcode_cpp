#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/169.majority-element.hpp>

TEST_CASE("test 169.majority-element", "[169.majority-element]") {
    Solution s;
    std::vector<int> in1{3,2,3};
    std::vector<int> in2{2,2,1,1,1,2,2};
    std::vector<int> in3{10};
    std::vector<int> in4{6,5,5};
    int ans1 = 3;
    int ans2 = 2;
    int ans3 = 10;
    int ans4 = 5;

    REQUIRE(s.majorityElement(in1) == ans1);
    REQUIRE(s.majorityElement(in2) == ans2);
    REQUIRE(s.majorityElement(in3) == ans3);
    REQUIRE(s.majorityElement(in4) == ans4);
}
