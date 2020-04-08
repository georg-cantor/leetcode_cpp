#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <iterator>
#include <solutions/34.find-first-and-last-position-of-element-in-sorted-array.hpp>

TEST_CASE("test 34.find-first-and-last-position-of-element-in-sorted-array", "[34.find-first-and-last-position-of-element-in-sorted-array]") {
    Solution s;
    std::vector<int> in11{5,7,7,8,8,10};
    int in12{8};
    std::vector<int> in21{5,7,7,8,8,10};
    int in22{6};
    std::vector<int> in31{5,7,7,8,8,10};
    int in32{10};
    std::vector<int> in41{2,2};
    int in42{2};

    std::vector<int> ans1{3,4};
    std::vector<int> ans2{-1, -1};
    std::vector<int> ans3{5,5};
    std::vector<int> ans4{0,1};
    REQUIRE(s.searchRange(in11, in12) == ans1);
    REQUIRE(s.searchRange(in21, in22) == ans2);
    REQUIRE(s.searchRange(in31, in32) == ans3);
    REQUIRE(s.searchRange(in41, in42) == ans4);
}
