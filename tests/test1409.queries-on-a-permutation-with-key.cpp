//
// Created by 秦栋梁 on 2020/4/12.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <list>
#include "solutions/1409.queries-on-a-permutation-with-key.hpp"

TEST_CASE("test 1409. Queries on a Permutation With Key", "[1409. Queries on a Permutation With Key]") {
    Solution s;
    std::vector<int> in11{3,1,2,1};
    int in12{5};

    std::vector<int> in21{4,1,2,2};
    int in22{4};

    std::vector<int> in31{7,5,5,8,3};
    int in32{8};

    std::vector<int> ans1{2,1,2,1};
    std::vector<int> ans2{3,1,2,0};
    std::vector<int> ans3{6,5,0,7,5};

    REQUIRE(s.processQueries(in11, in12) == ans1);
    REQUIRE(s.processQueries(in21, in22) == ans2);
    REQUIRE(s.processQueries(in31, in32) == ans3);
}
