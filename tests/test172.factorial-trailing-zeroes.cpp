#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/172.factorial-trailing-zeroes.hpp>

TEST_CASE("test 172.factorial-trailing-zeroes", "[172.factorial-trailing-zeroes]") {
    Solution s;
    int in1{5};
    int in2{6};
    int in3{10};
    int in4{19087};
    int ans1{1};
    int ans2{1};
    int ans3{2};
    int ans4{4769};

    REQUIRE(s.trailingZeroes(in1) == ans1);
    REQUIRE(s.trailingZeroes(in2) == ans2);
    REQUIRE(s.trailingZeroes(in3) == ans3);
    REQUIRE(s.trailingZeroes(in4) == ans4);
}
