#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/518.coin-change-2.hpp>

TEST_CASE("test 518.coin-change-2", "[518.coin-change-2]") {
    Solution s;
    std::vector<int> in11{1,5,10,25,50};
    int in12{100};
    int ans1{292};
    std::vector<int> in21{1,2,5};
    int in22{5};
    int ans2{4};
    std::vector<int> in31{3};
    int in32{2};
    int ans3{0};
    std::vector<int> in41{10};
    int in42{10};
    int ans4{1};
    std::vector<int> in51{3,5,7,8,9,10,11};
    int in52{500};
    int ans5{35502874};

    REQUIRE(s.change(in12, in11) == ans1);
    REQUIRE(s.change(in22, in21) == ans2);
    REQUIRE(s.change(in32, in31) == ans3);
    REQUIRE(s.change(in42, in41) == ans4);
    REQUIRE(s.change(in52, in51) == ans5);
}
