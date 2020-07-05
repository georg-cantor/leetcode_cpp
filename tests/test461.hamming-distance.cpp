#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <bitset>
#include <solutions/461.hamming-distance.hpp>

TEST_CASE("test 461.hamming-distance", "[461.hamming-distance]") {
    Solution s;
    int in11{1};
    int in12{4};
    int ans1{2};

    int in21{1234};
    int in22{19876};
    int ans2{8};

    int in31{0};
    int in32{19876};
    int ans3{7};

    int in41{0};
    int in42{2147483647};
    int ans4{31};

    REQUIRE(s.hammingDistance(in11, in12) == ans1);
    REQUIRE(s.hammingDistance(in21, in22) == ans2);
    REQUIRE(s.hammingDistance(in31, in32) == ans3);
    REQUIRE(s.hammingDistance(in41, in42) == ans4);
}
