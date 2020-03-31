#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/13.roman-to-integer.hpp>

TEST_CASE("test 13.roman-to-integer", "[13.roman-to-integer]") {
    Solution s;
    std::string in1{"III"};
    std::string in2{"IV"};
    std::string in3{"IX"};
    std::string in4{"LVIII"};
    std::string in5{"MCMXCIV"};
    std::string in6{};
    std::string in7{"I"};

    int ans1{3};
    int ans2{4};
    int ans3{9};
    int ans4{58};
    int ans5{1994};
    int ans6{0};
    int ans7{1};

    REQUIRE(s.romanToInt(in1) == ans1);
    REQUIRE(s.romanToInt(in2) == ans2);
    REQUIRE(s.romanToInt(in3) == ans3);
    REQUIRE(s.romanToInt(in4) == ans4);
    REQUIRE(s.romanToInt(in5) == ans5);
    REQUIRE(s.romanToInt(in6) == ans6);
    REQUIRE(s.romanToInt(in7) == ans7);
}
