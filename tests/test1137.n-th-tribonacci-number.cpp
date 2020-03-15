#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1137.n-th-tribonacci-number.hpp>

TEST_CASE("test 1137.n-th-tribonacci-number", "[1137.n-th-tribonacci-number]") {
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
    int in10{25};

    int ans0{0};
    int ans1{1};
    int ans2{1};
    int ans3{2};
    int ans4{4};
    int ans5{7};
    int ans6{13};
    int ans7{24};
    int ans8{44};
    int ans9{81};
    int ans10{1389537};

    REQUIRE(s.tribonacci(in0) == ans0);
    REQUIRE(s.tribonacci(in1) == ans1);
    REQUIRE(s.tribonacci(in2) == ans2);
    REQUIRE(s.tribonacci(in3) == ans3);
    REQUIRE(s.tribonacci(in4) == ans4);
    REQUIRE(s.tribonacci(in5) == ans5);
    REQUIRE(s.tribonacci(in6) == ans6);
    REQUIRE(s.tribonacci(in7) == ans7);
    REQUIRE(s.tribonacci(in8) == ans8);
    REQUIRE(s.tribonacci(in9) == ans9);
    REQUIRE(s.tribonacci(in10) == ans10);


}
