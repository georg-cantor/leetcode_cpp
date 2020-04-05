//
// Created by 秦栋梁 on 2020/4/5.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/1404.number-of-steps-to-reduce-a-number-in-binary-representation-to-one.hpp"

TEST_CASE("test 1395. Count Number of Teams", "[1395. Find Lucky Integer in an Array]") {
    Solution s;
    std::string in1{"11001"};
    std::string in2{"1101"};
    std::string in3{"10"};
    std::string in4{"1"};

    int ans1{8};
    int ans2{6};
    int ans3{1};
    int ans4{0};

    REQUIRE(s.numSteps(in1) == ans1);
    REQUIRE(s.numSteps(in2) == ans2);
    REQUIRE(s.numSteps(in3) == ans3);
    REQUIRE(s.numSteps(in4) == ans4);
}


