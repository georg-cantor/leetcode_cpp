#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/20.valid-parentheses.hpp>

TEST_CASE("test 20.valid-parentheses", "[20.valid-parentheses]") {
    Solution s;
    std::string in1 = "()";
    std::string in2 = "";
    std::string in3 = "()[]{}";
    std::string in4 = "(]";
    std::string in5 = "([)]";
    std::string in6 = "{[]}";
    std::string in7 = "]";
    bool ans1 = true;
    bool ans2 = true;
    bool ans3 = true;
    bool ans4 = false;
    bool ans5 = false;
    bool ans6 = true;
    bool ans7 = false;
    REQUIRE(s.isValid(in1) == ans1);
    REQUIRE(s.isValid(in2) == ans2);
    REQUIRE(s.isValid(in3) == ans3);
    REQUIRE(s.isValid(in4) == ans4);
    REQUIRE(s.isValid(in5) == ans5);
    REQUIRE(s.isValid(in6) == ans6);
    REQUIRE(s.isValid(in7) == ans7);
}
