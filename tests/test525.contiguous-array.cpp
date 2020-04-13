#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/525.contiguous-array.hpp>

TEST_CASE("test 525.contiguous-array", "[525.contiguous-array]") {
    Solution s;
    std::vector<int> in1{0,1};
    std::vector<int> in2{0,1,0};
    std::vector<int> in3{0,0,1,0,0,0,1,1};
    std::vector<int> in4{1, 0,	0,	1,	1,	0,	0,	1,	1,	0};

    int ans1{2};
    int ans2{2};
    int ans3{6};
    int ans4{10};

    REQUIRE(s.findMaxLength(in1) == ans1);
    REQUIRE(s.findMaxLength(in2) == ans2);
    REQUIRE(s.findMaxLength(in3) == ans3);
    REQUIRE(s.findMaxLength(in4) == ans4);
}
