#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/35.search-insert-position.hpp>

TEST_CASE("test 35.search-insert-position", "[35.search-insert-position]") {
    Solution s;
    std::vector<int> in11{1,3,5,6};
    int in12{5};
    int ans1{2};

    std::vector<int> in21{1,3,5,6};
    int in22{2};
    int ans2{1};

    std::vector<int> in31{1,3,5,6};
    int in32{7};
    int ans3{4};

    std::vector<int> in41{1,3,5,6};
    int in42{0};
    int ans4{0};

    std::vector<int> in51{1};
    int in52{0};
    int ans5{0};

    std::vector<int> in61{};
    int in62{0};
    int ans6{0};

    std::vector<int> in71{1,5};
    int in72{2};
    int ans7{1};

    REQUIRE(s.searchInsert(in11, in12) ==  ans1);
    REQUIRE(s.searchInsert(in21, in22) ==  ans2);
    REQUIRE(s.searchInsert(in31, in32) ==  ans3);
    REQUIRE(s.searchInsert(in41, in42) ==  ans4);
    REQUIRE(s.searchInsert(in51, in52) ==  ans5);
    REQUIRE(s.searchInsert(in61, in62) ==  ans6);
    REQUIRE(s.searchInsert(in71, in72) ==  ans7);
}
