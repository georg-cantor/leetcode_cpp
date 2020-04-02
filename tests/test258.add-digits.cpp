#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/258.add-digits.hpp>

TEST_CASE("test 258.add-digits", "[258.add-digits]") {
    Solution s;
    int in1{4897};
    int in2{4896};
    int in3{38};

    int ans1{1};
    int ans2{9};
    int ans3{2};

    REQUIRE(s.addDigits(in1) == ans1);
    REQUIRE(s.addDigits(in2) == ans2);
    REQUIRE(s.addDigits(in3) == ans3);
}
