#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <queue>
#include <solutions/207.course-schedule.hpp>

TEST_CASE("test 207.course-schedule", "[207.course-schedule]") {
    Solution s;
    int in11{2};
    std::vector<std::vector<int>> in12{{1,0}};
    bool ans1{true};

    int in21{2};
    std::vector<std::vector<int>> in22{{1,0}, {0,1}};
    bool ans2{false};

    int in31{8};
    std::vector<std::vector<int>> in32{{1,0},{2,6},{1,7},{5,1},{6,4},{7,0},{0,5}};
    bool ans3{false};

    int in41{8};
    std::vector<std::vector<int>> in42{{1,0},{2,6},{1,7},{6,4},{7,0},{0,5}};
    bool ans4{true};

    int in51{2};
    std::vector<std::vector<int>> in52{};
    bool ans5{true};

    REQUIRE(s.canFinish(in11, in12) == ans1);
    REQUIRE(s.canFinish(in21, in22) == ans2);
    REQUIRE(s.canFinish(in31, in32) == ans3);
    REQUIRE(s.canFinish(in41, in42) == ans4);
    REQUIRE(s.canFinish(in51, in52) == ans5);
}
