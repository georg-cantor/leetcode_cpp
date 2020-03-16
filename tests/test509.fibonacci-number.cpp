#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/509.fibonacci-number.hpp>

TEST_CASE("test 509.fibonacci-number", "[509.fibonacci-number]") {
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
    int in10{13};
    int in11{21};

    int ans0{0};
    int ans1{1};
    int ans2{1};
    int ans3{2};
    int ans4{3};
    int ans5{5};
    int ans6{8};
    int ans7{13};
    int ans8{21};
    int ans9{34};
    int ans10{233};
    int ans11{10946};

    REQUIRE(s.fib(in0) == ans0);
    REQUIRE(s.fib(in1) == ans1);
    REQUIRE(s.fib(in2) == ans2);
    REQUIRE(s.fib(in3) == ans3);
    REQUIRE(s.fib(in4) == ans4);
    REQUIRE(s.fib(in5) == ans5);
    REQUIRE(s.fib(in6) == ans6);
    REQUIRE(s.fib(in7) == ans7);
    REQUIRE(s.fib(in8) == ans8);
    REQUIRE(s.fib(in9) == ans9);
    REQUIRE(s.fib(in10) == ans10);
    REQUIRE(s.fib(in11) == ans11);
}
