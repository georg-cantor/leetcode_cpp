//
// Created by 秦栋梁 on 2020/4/12.
//



#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/1408.string-matching-in-an-array.hpp"

TEST_CASE("test 1408. String Matching in an Array", "[1408. String Matching in an Array]") {
    Solution s;
    std::vector<std::string> in1{"mass","as","hero","superhero"};
    std::vector<std::string> in2{"leetcode","et","code"};
    std::vector<std::string> in3{"blue","green","bu"};

    std::vector<std::string> ans1{"as","hero"};
    std::vector<std::string> ans2{"et","code"};
    std::vector<std::string> ans3{};

    REQUIRE(s.stringMatching(in1) == ans1);
    REQUIRE(s.stringMatching(in2) == ans2);
    REQUIRE(s.stringMatching(in3) == ans3);
}

