#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <limits>
#include <solutions/787.cheapest-flights-within-k-stops.hpp>

TEST_CASE("test 787.cheapest-flights-within-k-stops", "[787.cheapest-flights-within-k-stops]") {
    Solution s;
    int in11{3};
    std::vector<std::vector<int>> in12{{0,1,100},{1,2,100},{0,2,500}};
    int in13{0};
    int in14{2};
    int in15{1};
    int ans1{200};

    int in21{3};
    std::vector<std::vector<int>> in22{{0,1,100},{1,2,100},{0,2,500}};
    int in23{0};
    int in24{2};
    int in25{0};
    int ans2{500};

    REQUIRE(s.findCheapestPrice(in11, in12, in13, in14, in15) == ans1);
    REQUIRE(s.findCheapestPrice(in21, in22, in23, in24, in25) == ans2);
}
