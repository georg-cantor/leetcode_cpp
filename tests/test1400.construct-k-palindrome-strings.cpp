//
// Created by 秦栋梁 on 2020/4/12.
//


#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1400.construct-k-palindrome-strings.hpp>

TEST_CASE("test 1400. Construct K Palindrome Strings", "[1400.Construct K Palindrome Strings]") {
    Solution s;
    std::string in11{"annabelle"};
    int in12{2};

    std::string in21{"leetcode"};
    int in22{3};

    std::string in31{"true"};
    int in32{4};

    std::string in41{"yzyzyzyzyzyzyzy"};
    int in42{2};

    std::string in51{"cr"};
    int in52{7};

    bool ans1{true};
    bool ans2{false};
    bool ans3{true};
    bool ans4{true};
    bool ans5{false};

    REQUIRE(s.canConstruct(in11, in12) == ans1);
    REQUIRE(s.canConstruct(in21, in22) == ans2);
    REQUIRE(s.canConstruct(in31, in32) == ans3);
    REQUIRE(s.canConstruct(in41, in42) == ans4);
    REQUIRE(s.canConstruct(in51, in52) == ans5);
}
