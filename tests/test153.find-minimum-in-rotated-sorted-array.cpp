#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/153.find-minimum-in-rotated-sorted-array.hpp>

TEST_CASE("test 153.find-minimum-in-rotated-sorted-array", "[153.find-minimum-in-rotated-sorted-array]") {
    Solution s;
    std::vector<int> in1{3,4,5,1,2};
    std::vector<int> in2{4,5,6,7,0,1,2};
    std::vector<int> in3{4,5,6,0,1,2,3};
    std::vector<int> in4{0,1,2,3,4,5,6};
    std::vector<int> in5{1,2,3,4,5,6,0};
    std::vector<int> in6{2,3,4,5,6,0,1};
    std::vector<int> in7{3,4,5,6,0,1,2};
    std::vector<int> in8{5,6,0,1,2,3,4};
    std::vector<int> in9{6,0,1,2,3,4,5};

    int ans1{1};
    int ans2{0};
    int ans3{0};
    int ans4{0};
    int ans5{0};
    int ans6{0};
    int ans7{0};
    int ans8{0};
    int ans9{0};

    REQUIRE(s.findMin(in1) == ans1);
    REQUIRE(s.findMin(in2) == ans2);
    REQUIRE(s.findMin(in3) == ans3);
    REQUIRE(s.findMin(in4) == ans4);
    REQUIRE(s.findMin(in5) == ans5);
    REQUIRE(s.findMin(in6) == ans6);
    REQUIRE(s.findMin(in7) == ans7);
    REQUIRE(s.findMin(in8) == ans8);
    REQUIRE(s.findMin(in9) == ans9);
}
