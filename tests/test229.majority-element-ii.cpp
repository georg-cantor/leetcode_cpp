#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/229.majority-element-ii.hpp>

TEST_CASE("test 229.majority-element-ii", "[229.majority-element-ii]") {
    Solution s;
    std::vector<int> in1{3,2,3};
    std::vector<int> in2{2,2,1,1,1,2,2};
    std::vector<int> in3{10};
    std::vector<int> in4{6,5,5};
    std::vector<int> in5{1,3,3,2,2,1,1,1};
    std::vector<int> in6{1,2};
    std::vector<int> in7{2,2};
    std::vector<int> in8{};
    std::vector<int> in9{2,2,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9};
    std::vector<int> ans1{3};
    std::vector<int> ans2{2,1};
    std::vector<int> ans3{10};
    std::vector<int> ans4{5};
    std::vector<int> ans5{1};
    std::vector<int> ans6{2,1};
    std::vector<int> ans7{2};
    std::vector<int> ans8{};
    std::vector<int> ans9{3,9};

    REQUIRE(s.majorityElement(in1) == ans1);
    REQUIRE(s.majorityElement(in2) == ans2);
    REQUIRE(s.majorityElement(in3) == ans3);
    REQUIRE(s.majorityElement(in4) == ans4);
    REQUIRE(s.majorityElement(in5) == ans5);
    REQUIRE(s.majorityElement(in6) == ans6);
    REQUIRE(s.majorityElement(in7) == ans7);
    REQUIRE(s.majorityElement(in8) == ans8);
    REQUIRE(s.majorityElement(in9) == ans9);
}
