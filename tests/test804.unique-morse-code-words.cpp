#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <vector>
#include <solutions/804.unique-morse-code-words.hpp>

TEST_CASE("test 804.unique-morse-code-words", "[804.unique-morse-code-words]") {
    Solution s;
    std::vector <std::string> in_1{"gin", "zen", "gig", "msg"};
    int ans_1{2};
    REQUIRE(s.uniqueMorseRepresentations(in_1) == ans_1);
}
