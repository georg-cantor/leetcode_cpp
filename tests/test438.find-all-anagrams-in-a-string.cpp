#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <string>
#include <solutions/438.find-all-anagrams-in-a-string.hpp>

TEST_CASE("test 438.find-all-anagrams-in-a-string", "[438.find-all-anagrams-in-a-string]") {
    Solution s;
    std::string in11{"cbaebabacd"};
    std::string in12{"abc"};
    std::vector<int> ans1{0,6};

    std::string in21{"abab"};
    std::string in22{"ab"};
    std::vector<int> ans2{0,1,2};

    REQUIRE(s.findAnagrams(in11, in12) == ans1);
    REQUIRE(s.findAnagrams(in21, in22) == ans2);
}
