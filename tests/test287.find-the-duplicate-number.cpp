#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/287.find-the-duplicate-number.hpp>

TEST_CASE("test 287.find-the-duplicate-number", "[287.find-the-duplicate-number]") {
    Solution s;
    std::vector<int> in1{1,3,4,2,2};
    std::vector<int> in2{3,1,3,4,2};
    std::vector<int> in3{1,1};
    std::vector<int> in4{3,1,4,2,8,7,5,6,8};
    std::vector<int> in5{3,1,4,1,2,8,7,5,6};
    std::vector<int> in6{3,1,4,1,2,8,1,5,6,9,1,1,12};

    int ans1{2};
    int ans2{3};
    int ans3{1};
    int ans4{8};
    int ans5{1};
    int ans6{1};

    REQUIRE(s.findDuplicate(in1) == ans1);
    REQUIRE(s.findDuplicate(in2) == ans2);
    REQUIRE(s.findDuplicate(in3) == ans3);
    REQUIRE(s.findDuplicate(in4) == ans4);
    REQUIRE(s.findDuplicate(in5) == ans5);
    REQUIRE(s.findDuplicate(in6) == ans6);
}
