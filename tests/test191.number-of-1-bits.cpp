#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/191.number-of-1-bits.hpp>

TEST_CASE("test 191.number-of-1-bits", "[191.number-of-1-bits]") {
    Solution s;
    std::uint32_t in1{43261596};
    int ans1{12};
    std::uint32_t in2{4294967293};
    int ans2{31};
    std::uint32_t in3{0};
    int ans3{0};

    REQUIRE(s.hammingWeight(in1) == ans1);
    REQUIRE(s.hammingWeight(in2) == ans2);
    REQUIRE(s.hammingWeight(in3) == ans3);
}
