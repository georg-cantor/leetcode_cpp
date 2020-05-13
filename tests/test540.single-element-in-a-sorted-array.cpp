#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/540.single-element-in-a-sorted-array.hpp>

TEST_CASE("test 540.single-element-in-a-sorted-array", "[540.single-element-in-a-sorted-array]") {
    Solution s;
    std::vector<int> in1{1};
    int ans1{1};

    std::vector<int> in2{1, 1, 2};
    int ans2{2};

    std::vector<int> in3{1, 2, 2};
    int ans3{1};

    std::vector<int> in4{1,1,2,3,3,4,4,8,8};
    int ans4{2};

    std::vector<int> in5{3,3,7,7,10,11,11};
    int ans5{10};

    REQUIRE(s.singleNonDuplicate(in1) == ans1);
    REQUIRE(s.singleNonDuplicate(in2) == ans2);
    REQUIRE(s.singleNonDuplicate(in3) == ans3);
    REQUIRE(s.singleNonDuplicate(in4) == ans4);
    REQUIRE(s.singleNonDuplicate(in5) == ans5);
}
