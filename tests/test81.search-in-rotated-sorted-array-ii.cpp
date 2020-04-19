#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/81.search-in-rotated-sorted-array-ii.hpp>

TEST_CASE("test 81.search-in-rotated-sorted-array-ii", "[81.search-in-rotated-sorted-array-ii]") {
    Solution s;
    std::vector<int> in11{4,4,5,6,7,0,0,1,1,2,2};
    int in12{0};
    std::vector<int> in21{4,4,5,6,7,0,0,1,1,2,2};
    int in22{3};
    std::vector<int> in31{1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6};
    int in32{7};
    std::vector<int> in41{1,3,1,1,1};
    int in42{3};

    bool ans1{true};
    bool ans2{false};
    bool ans3{false};
    bool ans4{true};

    REQUIRE(s.search(in11, in12) == ans1);
    REQUIRE(s.search(in21, in22) == ans2);
    REQUIRE(s.search(in31, in32) == ans3);
    REQUIRE(s.search(in41, in42) == ans4);
}
