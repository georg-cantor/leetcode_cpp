#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <set>
#include <solutions/997.find-the-town-judge.hpp>

TEST_CASE("test 997.find-the-town-judge", "[997.find-the-town-judge]") {
    Solution s;
    int in11{2};
    std::vector<std::vector<int>> in12{{1,2}};

    int in21{3};
    std::vector<std::vector<int>> in22{{1,3},{2,3}};

    int in31{3};
    std::vector<std::vector<int>> in32{{1,3},{2,3},{3,1}};

    int in41{3};
    std::vector<std::vector<int>> in42{{1,2},{2,3}};

    int in51{4};
    std::vector<std::vector<int>> in52{{1,3},{1,4},{2,3},{2,4},{4,3}};

    int in61{1};
    std::vector<std::vector<int>> in62{};

    int ans1{2};
    int ans2{3};
    int ans3{-1};
    int ans4{-1};
    int ans5{3};
    int ans6{1};

    REQUIRE(s.findJudge(in11, in12) == ans1);
    REQUIRE(s.findJudge(in21, in22) == ans2);
    REQUIRE(s.findJudge(in31, in32) == ans3);
    REQUIRE(s.findJudge(in41, in42) == ans4);
    REQUIRE(s.findJudge(in51, in52) == ans5);
    REQUIRE(s.findJudge(in61, in62) == ans6);
}
