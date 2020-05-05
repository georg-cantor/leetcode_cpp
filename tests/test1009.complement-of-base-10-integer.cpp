#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1009.complement-of-base-10-integer.hpp>

TEST_CASE("test 1009.complement-of-base-10-integer", "[1009.complement-of-base-10-integer]") {
    Solution s;
    int in1{5};
    int ans1{2};

    int in2{0};
    int ans2{1};

    int in3{7};
    int ans3{0};

    int in4{10};
    int ans4{5};

    REQUIRE(s.bitwiseComplement(in1) == ans1);
    REQUIRE(s.bitwiseComplement(in2) == ans2);
    REQUIRE(s.bitwiseComplement(in3) == ans3);
    REQUIRE(s.bitwiseComplement(in4) == ans4);
}
