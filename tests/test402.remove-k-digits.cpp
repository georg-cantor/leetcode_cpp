#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/402.remove-k-digits.hpp>

TEST_CASE("test 402.remove-k-digits", "[402.remove-k-digits]") {
    Solution s;
    std::string in11{"1432219"};
    int in12{3};
    std::string ans1{"1219"};

    std::string in21{"10200"};
    int in22{1};
    std::string ans2{"200"};

    std::string in31{"10"};
    int in32{2};
    std::string ans3{"0"};

    REQUIRE(s.removeKdigits(in11, in12) == ans1);
    REQUIRE(s.removeKdigits(in21, in22) == ans2);
    REQUIRE(s.removeKdigits(in31, in32) == ans3);
}
