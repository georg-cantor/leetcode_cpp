#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/55.jump-game.hpp>

TEST_CASE("test 55.jump-game", "[55.jump-game]") {
    Solution s;
    std::vector<int> in1{2,3,1,1,4};
    bool ans1{true};

    std::vector<int> in2{3,2,1,0,4};
    bool ans2{false};

    std::vector<int> in3{0,1,2,3,4};
    bool ans3{false};

    REQUIRE(s.canJump(in1) == ans1);
    REQUIRE(s.canJump(in2) == ans2);
    REQUIRE(s.canJump(in3) == ans3);
}
