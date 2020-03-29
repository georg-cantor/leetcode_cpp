//
// Created by 秦栋梁 on 2020/3/29.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <map>
#include <unordered_map>
#include <solutions/1394.find-lucky-integer-in-an-array.hpp>

TEST_CASE("test 1394. Find Lucky Integer in an Array", "[1394. Find Lucky Integer in an Array]") {
    Solution s;
    std::vector<int> in1{2,2,3,4};
    std::vector<int> in2{1,2,2,3,3,3};
    std::vector<int> in3{2,2,2,3,3};
    std::vector<int> in4{5};
    std::vector<int> in5{7,7,7,7,7,7,7};

    int ans1{2};
    int ans2{3};
    int ans3{-1};
    int ans4{-1};
    int ans5{7};

    REQUIRE(s.findLucky(in1) == ans1);
    REQUIRE(s.findLucky(in2) == ans2);
    REQUIRE(s.findLucky(in3) == ans3);
    REQUIRE(s.findLucky(in4) == ans4);
    REQUIRE(s.findLucky(in5) == ans5);
}

