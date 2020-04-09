#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/844.backspace-string-compare.hpp>

TEST_CASE("test 844.backspace-string-compare", "[844.backspace-string-compare]") {
    Solution s;
    std::string in11{"ab#c"};
    std::string in12{"ad#c"};
    bool ans1{true};

    std::string in21{"ab##"};
    std::string in22{"c#d#"};
    bool ans2{true};

    std::string in31{"a##c"};
    std::string in32{"#a#c"};
    bool ans3{true};

    std::string in41{"a#c"};
    std::string in42{"b"};
    bool ans4{false};

    REQUIRE(s.backspaceCompare(in11, in12) == ans1);
    REQUIRE(s.backspaceCompare(in21, in22) == ans2);
    REQUIRE(s.backspaceCompare(in31, in32) == ans3);
    REQUIRE(s.backspaceCompare(in41, in42) == ans4);
}
