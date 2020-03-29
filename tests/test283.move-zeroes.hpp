#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/283.move-zeroes.hpp>

TEST_CASE("test 283.move-zeroes", "[283.move-zeroes]") {
    Solution s;
    std::vector<int> in1{0,1,0,3,12};
    std::vector<int> ans1{1,3,12,0,0};
    std::vector<int> in2{0,1,0,6,8,12,12,0,-34,0,29,0,3,12};
    std::vector<int> ans2{1,6,8,12,12,-34,29,3,12,0,0,0,0,0};
    std::vector<int> in3{0};
    std::vector<int> ans3{0};
    std::vector<int> in4{1,2,3,4,5};
    std::vector<int> ans4{1,2,3,4,5};
    std::vector<int> in5{};
    std::vector<int> ans5{};
    s.moveZeroes(in1);
    s.moveZeroes(in2);
    s.moveZeroes(in3);
    s.moveZeroes(in4);
    s.moveZeroes(in5);
    REQUIRE(in1 == ans1);
    REQUIRE(in2 == ans2);
    REQUIRE(in3 == ans3);
    REQUIRE(in4 == ans4);
    REQUIRE(in5 == ans5);
}