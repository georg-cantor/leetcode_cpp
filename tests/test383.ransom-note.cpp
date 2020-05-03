#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/383.ransom-note.hpp>

TEST_CASE("test 383.ransom-note", "[383.ransom-note]") {
    Solution s;
    std::string in11{"a"};
    std::string in12{"b"};
    bool ans1{false};

    std::string in21{"aa"};
    std::string in22{"ab"};
    bool ans2{false};

    std::string in31{"aa"};
    std::string in32{"aab"};
    bool ans3{true};

    REQUIRE(s.canConstruct(in11, in12) == ans1);
    REQUIRE(s.canConstruct(in21, in22) == ans2);
    REQUIRE(s.canConstruct(in31, in32) == ans3);
}
