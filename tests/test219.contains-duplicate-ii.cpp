#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/219.contains-duplicate-ii.hpp>

TEST_CASE("test 219.contains-duplicate-ii", "[219.contains-duplicate-ii]") {
    Solution s;
    std::vector<int> in11{1,2,3,1};
    int in12{3};
    std::vector<int> in21{1,0,1,1};
    int in22{1};
    std::vector<int> in31{1,2,3,1,2,3};
    int in32{2};

    bool ans1{true};
    bool ans2{true};
    bool ans3{false};

    REQUIRE(s.containsNearbyDuplicate(in11, in12) == ans1);
    REQUIRE(s.containsNearbyDuplicate(in21, in22) == ans2);
    REQUIRE(s.containsNearbyDuplicate(in31, in32) == ans3);
}
