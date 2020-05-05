#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/476.number-complement.hpp>

TEST_CASE("test 476.number-complement", "[476.number-complement]") {
    Solution s;
    int in1{5};
    int ans1{2};

    int in2{1};
    int ans2{0};

    int in3{7};
    int ans3{0};

    int in4{10};
    int ans4{5};

    REQUIRE(s.findComplement(in1) == ans1);
    REQUIRE(s.findComplement(in2) == ans2);
    REQUIRE(s.findComplement(in3) == ans3);
    REQUIRE(s.findComplement(in4) == ans4);
}
