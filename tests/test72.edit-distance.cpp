#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/72.edit-distance.hpp>

TEST_CASE("test 72.edit-distance", "[72.edit-distance]") {
    Solution s;
    std::string in11{"horse"};
    std::string in12{"ros"};
    int ans1{3};

    std::string in21{"intention"};
    std::string in22{"execution"};
    int ans2{5};

    std::string in31{"dinitrophenylhydrazine"};
    std::string in32{"benzalphenylhydrazone"};
    int ans3{7};

    REQUIRE(s.minDistance(in11, in12) == ans1);
    REQUIRE(s.minDistance(in21, in22) == ans2);
    REQUIRE(s.minDistance(in31, in32) == ans3);
}
