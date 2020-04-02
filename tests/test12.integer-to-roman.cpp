#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <map>
#include <solutions/12.integer-to-roman.hpp>

TEST_CASE("test 12.integer-to-roman", "[12.integer-to-roman]") {
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

    REQUIRE(s.intToRoman(ans1) == in1);
    REQUIRE(s.intToRoman(ans2) == in2);
    REQUIRE(s.intToRoman(ans3) == in3);
    REQUIRE(s.intToRoman(ans4) == in4);
    REQUIRE(s.intToRoman(ans5) == in5);
    REQUIRE(s.intToRoman(ans6) == in6);
    REQUIRE(s.intToRoman(ans7) == in7);
}
