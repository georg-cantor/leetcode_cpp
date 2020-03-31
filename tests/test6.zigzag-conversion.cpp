#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/6.zigzag-conversion.hpp>

TEST_CASE("test 6.zigzag-conversion", "[6.zigzag-conversion]") {
    Solution s;
    std::string in11{"PAYPALISHIRING"};
    int in12{3};
    std::string in21{"PAYPALISHIRING"};
    int in22{4};
    std::string in31{"PAYPALISHIRING"};
    int in32{0};
    std::string in41{"PAYPALISHIRING"};
    int in42{1};

    std::string ans1{"PAHNAPLSIIGYIR"};
    std::string ans2{"PINALSIGYAHRPI"};
    std::string ans3{"PAYPALISHIRING"};
    std::string ans4{"PAYPALISHIRING"};

    REQUIRE(s.convert(in11, in12) == ans1);
    REQUIRE(s.convert(in21, in22) == ans2);
    REQUIRE(s.convert(in31, in32) == ans3);
    REQUIRE(s.convert(in41, in42) == ans4);
}
