#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/49.group-anagrams.hpp>

TEST_CASE("test 49.group-anagrams", "[49.group-anagrams]") {
    Solution s;
    std::vector<std::string> in1{"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> ans1{
        {"bat"},
        {"eat","tea","ate"},
        {"tan","nat"}
    };
    REQUIRE(s.groupAnagrams(in1) == ans1);
}
