#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/918.maximum-sum-circular-subarray.hpp>

TEST_CASE("test 918.maximum-sum-circular-subarray", "[918.maximum-sum-circular-subarray]") {
    Solution s;
    std::vector<int> in1{1,-2,3,-2};
    std::vector<int> in2{5, -3, 5};
    std::vector<int> in3{3, -1, 2, -1};
    std::vector<int> in4{3, -2, 2, -3};
    std::vector<int> in5{-2, -3, -1};

    int ans1{3};
    int ans2{10};
    int ans3{4};
    int ans4{3};
    int ans5{-1};

    REQUIRE(s.maxSubarraySumCircular(in1) == ans1);
    REQUIRE(s.maxSubarraySumCircular(in2) == ans2);
    REQUIRE(s.maxSubarraySumCircular(in3) == ans3);
    REQUIRE(s.maxSubarraySumCircular(in4) == ans4);
    REQUIRE(s.maxSubarraySumCircular(in5) == ans5);
}
