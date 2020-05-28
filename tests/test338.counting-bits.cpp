#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/338.counting-bits.hpp>

TEST_CASE("test 338.counting-bits", "[338.counting-bits]") {
    Solution s;
    int in1{2};
    int in2{5};
    int in3{15};
    int in4{0};

    std::vector<int> ans1{0,1,1};
    std::vector<int> ans2{0,1,1,2,1,2};
    std::vector<int> ans3{0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
    std::vector<int> ans4{0};

    REQUIRE(s.countBits(in1) == ans1);
    REQUIRE(s.countBits(in2) == ans2);
    REQUIRE(s.countBits(in3) == ans3);
    REQUIRE(s.countBits(in4) == ans4);
}
