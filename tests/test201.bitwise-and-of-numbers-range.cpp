#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/201.bitwise-and-of-numbers-range.hpp>

TEST_CASE("test 201.bitwise-and-of-numbers-range", "[201.bitwise-and-of-numbers-range]") {
    Solution s;
    int in11{5};
    int in12{7};
    int ans1{4};

    int in21{0};
    int in22{1};
    int ans2{0};

    REQUIRE(s.rangeBitwiseAnd(in11, in12) == ans1);
    REQUIRE(s.rangeBitwiseAnd(in21, in22) == ans2);
}
