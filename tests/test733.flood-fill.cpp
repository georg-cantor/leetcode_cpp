#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/733.flood-fill.hpp>

TEST_CASE("test 733.flood-fill", "[733.flood-fill]") {
    Solution s;
    std::vector<std::vector<int>> in11{{1,1,1},{1,1,0},{1,0,1}};
    int in12{1};
    int in13{1};
    int in14{2};
    std::vector<std::vector<int>> ans1{{2,2,2},{2,2,0},{2,0,1}};


    std::vector<std::vector<int>> in21{{1,1,1},{1,1,0},{1,0,1}};
    int in22{0};
    int in23{0};
    int in24{2};
    std::vector<std::vector<int>> ans2{{2,2,2},{2,2,0},{2,0,1}};

    std::vector<std::vector<int>> in31{{1,1,1},{1,1,0},{1,0,1}};
    int in32{0};
    int in33{1};
    int in34{2};
    std::vector<std::vector<int>> ans3{{2,2,2},{2,2,0},{2,0,1}};

    REQUIRE(s.floodFill(in11,in12,in13,in14) == ans1);
    REQUIRE(s.floodFill(in21,in22,in23,in24) == ans2);
    REQUIRE(s.floodFill(in31,in32,in33,in34) == ans3);
}
