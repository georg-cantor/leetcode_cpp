//
// Created by 秦栋梁 on 2020/4/12.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1399.count-largest-group.hpp>

TEST_CASE("test 1399.Count Largest Group", "[1399.Count Largest Group]") {
    Solution s;
    int in1{13};
    int ans1{4};
    int in2{2};
    int ans2{2};
    int in3{15};
    int ans3{6};
    int in4{24};
    int ans4{5};

    REQUIRE(s.countLargestGroup(in1) == ans1);
    REQUIRE(s.countLargestGroup(in2) == ans2);
    REQUIRE(s.countLargestGroup(in3) == ans3);
    REQUIRE(s.countLargestGroup(in4) == ans4);
}

