#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/96.unique-binary-search-trees.hpp>

TEST_CASE("test 96.unique-binary-search-trees", "[96.unique-binary-search-trees]") {
    Solution s;
    int in0{0};
    int in1{1};
    int in2{2};
    int in3{3};
    int in4{4};
    int in5{5};
    int in6{6};
    int in7{7};
    int in8{8};
    int in9{9};
    int in10{10};

    int ans0{1};
    int ans1{1};
    int ans2{2};
    int ans3{5};
    int ans4{14};
    int ans5{42};
    int ans6{132};
    int ans7{429};
    int ans8{1430};
    int ans9{4862};
    int ans10{16796};

    REQUIRE(s.numTrees(in0) == ans0);
    REQUIRE(s.numTrees(in1) == ans1);
    REQUIRE(s.numTrees(in2) == ans2);
    REQUIRE(s.numTrees(in3) == ans3);
    REQUIRE(s.numTrees(in4) == ans4);
    REQUIRE(s.numTrees(in5) == ans5);
    REQUIRE(s.numTrees(in6) == ans6);
    REQUIRE(s.numTrees(in7) == ans7);
    REQUIRE(s.numTrees(in8) == ans8);
    REQUIRE(s.numTrees(in9) == ans9);
    REQUIRE(s.numTrees(in10) == ans10);
}
