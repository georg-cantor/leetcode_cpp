#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/242.valid-anagram.hpp>

TEST_CASE("test 242.valid-anagram", "[242.valid-anagram]") {
    Solution s;
    std::string in11{"anagram"};
    std::string in12{"nagaram"};
    bool ans1{true};

    std::string in21{"rat"};
    std::string in22{"car"};
    bool ans2{false};

    REQUIRE(s.isAnagram(in11, in12) == ans1);
    REQUIRE(s.isAnagram(in21, in22) == ans2);
}
