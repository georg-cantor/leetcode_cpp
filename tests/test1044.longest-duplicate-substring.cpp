#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_set>
#include <solutions/1044.longest-duplicate-substring.hpp>

TEST_CASE("test 1044.longest-duplicate-substring", "[1044.longest-duplicate-substring]") {
    Solution s;
    std::string in1{"banana"};
    std::string ans1{"ana"};

    std::string in2{"abcd"};
    std::string ans2{""};

    REQUIRE(s.longestDupSubstring(in1) == ans1);
    REQUIRE(s.longestDupSubstring(in2) == ans2);
}
