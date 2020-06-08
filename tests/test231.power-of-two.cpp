#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/231.power-of-two.hpp>

TEST_CASE("test 231.power-of-two", "[231.power-of-two]") {
    Solution s;
    int in1{1};
    bool ans1{true};
    int in2{16};
    bool ans2{true};
    int in3{218};
    bool ans3{false};
    int in4{0};
    bool ans4{false};
    int in5{-218};
    bool ans5{false};
    int in6{-2147483648};
    bool ans6{false};
    int in7{-2147483647};
    bool ans7{false};
    int in8{-1};
    bool ans8{false};

    REQUIRE(s.isPowerOfTwo(in1) == ans1);
    REQUIRE(s.isPowerOfTwo(in2) == ans2);
    REQUIRE(s.isPowerOfTwo(in3) == ans3);
    REQUIRE(s.isPowerOfTwo(in4) == ans4);
    REQUIRE(s.isPowerOfTwo(in5) == ans5);
    REQUIRE(s.isPowerOfTwo(in6) == ans6);
    REQUIRE(s.isPowerOfTwo(in7) == ans7);
    REQUIRE(s.isPowerOfTwo(in8) == ans8);
}
