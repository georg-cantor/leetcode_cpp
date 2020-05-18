#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/567.permutation-in-string.hpp>

TEST_CASE("test 567.permutation-in-string", "[567.permutation-in-string]") {
    Solution s;
    std::string in11{"ab"};
    std::string in12{"eidbaooo"};
    bool ans1{true};

    std::string in21{"ab"};
    std::string in22{"eidboaoo"};
    bool ans2{false};

    REQUIRE(s.checkInclusion(in11, in12) == ans1);
    REQUIRE(s.checkInclusion(in21, in22) == ans2);
}
