#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/697.degree-of-an-array.hpp>

TEST_CASE("test 697.degree-of-an-array", "[697.degree-of-an-array]") {
    Solution s;
    std::vector<int> in1{1, 2, 2, 3, 1};
    std::vector<int> in2{1,2,2,3,1,4,2};
    std::vector<int> in3{1, 5, 2, 3, 5, 4, 5, 6};
    std::vector<int> in4{1};

    int ans1{2};
    int ans2{6};
    int ans3{6};
    int ans4{1};

    REQUIRE(s.findShortestSubArray(in1) == ans1);
    REQUIRE(s.findShortestSubArray(in2) == ans2);
    REQUIRE(s.findShortestSubArray(in3) == ans3);
    REQUIRE(s.findShortestSubArray(in4) == ans4);
}
