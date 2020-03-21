#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/4.median-of-two-sorted-arrays.hpp>

TEST_CASE("test 4.median-of-two-sorted-arrays", "[4.median-of-two-sorted-arrays]") {
    Solution s;
    std::vector<int> in11{1,3,4,7,10,13,19};
    std::vector<int> in12{2,5,6,8,9,11,12,14,15,17,22};
    double ans1 = 9.5;
    std::vector<int> in21{1,3};
    std::vector<int> in22{2};
    double ans2 = 2.0;
    std::vector<int> in31{1,2};
    std::vector<int> in32{3,4};
    double ans3 = 2.5;
    std::vector<int> in41{2};
    std::vector<int> in42{};
    double ans4 = 2.0;
    REQUIRE(s.findMedianSortedArrays(in41, in42) == ans4);
    REQUIRE(s.findMedianSortedArrays(in11, in12) == ans1);
    REQUIRE(s.findMedianSortedArrays(in21, in22) == ans2);
    REQUIRE(s.findMedianSortedArrays(in31, in32) == ans3);
}
