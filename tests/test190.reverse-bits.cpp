#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/190.reverse-bits.hpp>

TEST_CASE("test 190.reverse-bits", "[190.reverse-bits]") {
    Solution s;
    std::uint32_t in1 = 43261596;
    std::uint32_t ans1 = 964176192;
    std::uint32_t in2{4294967293};
    std::uint32_t ans2{3221225471};
    std::uint32_t in3{0};
    std::uint32_t ans3{0};
    REQUIRE(s.reverseBits(in1) == ans1);
    REQUIRE(s.reverseBits(in2) == ans2);
    REQUIRE(s.reverseBits(in3) == ans3);
    REQUIRE(s.reverseBits1(in1) == ans1);
    REQUIRE(s.reverseBits1(in2) == ans2);
    REQUIRE(s.reverseBits1(in3) == ans3);
}
