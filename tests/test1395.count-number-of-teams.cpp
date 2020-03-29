//
// Created by 秦栋梁 on 2020/3/29.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/1395.count-number-of-teams.hpp"

TEST_CASE("test 1395. Count Number of Teams", "[1395. Find Lucky Integer in an Array]") {
    Solution s;
    std::vector<int> in1{2,5,3,4,1};
    std::vector<int> in2{2,1,3};
    std::vector<int> in3{1,2,3,4};

    int ans1{3};
    int ans2{0};
    int ans3{4};

    REQUIRE(s.numTeams(in1) == ans1);
    REQUIRE(s.numTeams(in2) == ans2);
    REQUIRE(s.numTeams(in3) == ans3);
}



