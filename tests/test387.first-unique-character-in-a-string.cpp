#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/387.first-unique-character-in-a-string.hpp>

TEST_CASE("test 387.first-unique-character-in-a-string", "[387.first-unique-character-in-a-string]") {
    Solution s;
    std::string in1{"leetcode"};
    std::string in2{"loveleetcode"};
    int ans1{0};
    int ans2{2};

    REQUIRE(s.firstUniqChar(in1) == ans1);
    REQUIRE(s.firstUniqChar(in2) == ans2);
}
