#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/1002.find-common-characters.hpp>

TEST_CASE("test 1002.find-common-characters", "[1002.find-common-characters]") {
    Solution s;
    std::vector<std::string> in1{"bella","label","roller"};
    std::vector<std::string> in2{"cool","lock","cook"};
    std::vector<std::string> in3{};
    std::vector<std::string> in4{"bella"};

    std::vector<std::string> ans1_1{"l","l","e"};
    std::vector<std::string> ans2_1{"o","c"};
    std::vector<std::string> ans3_1{};
    std::vector<std::string> ans4_1{"a","l","l","e","b"};

    std::vector<std::string> ans1_2{"e","l","l"};
    std::vector<std::string> ans2_2{"c","o"};
    std::vector<std::string> ans3_2{};
    std::vector<std::string> ans4_2{"a","b","e","l","l"};

    REQUIRE(s.commonChars1(in1) == ans1_1);
    REQUIRE(s.commonChars1(in2) == ans2_1);
    REQUIRE(s.commonChars1(in3) == ans3_1);
    REQUIRE(s.commonChars1(in4) == ans4_1);

    REQUIRE(s.commonChars(in1) == ans1_2);
    REQUIRE(s.commonChars(in2) == ans2_2);
    REQUIRE(s.commonChars(in3) == ans3_2);
    REQUIRE(s.commonChars(in4) == ans4_2);
}
