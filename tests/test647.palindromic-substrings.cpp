#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/647.palindromic-substrings.hpp>

TEST_CASE("test 647.palindromic-substrings", "[647.palindromic-substrings]") {
    Solution s;
    std::string in0 = "aaa";
    std::string in1 = "abc";
    std::string in2 = "amppma";

    int ans0 = 6;
    int ans1 = 3;
    int ans2 = 9;

    REQUIRE(s.countSubstrings(in0) == ans0);
    REQUIRE(s.countSubstrings(in1) == ans1);
    REQUIRE(s.countSubstrings(in2) == ans2);
}
