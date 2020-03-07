#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1207.unique-number-of-occurrences.hpp>

TEST_CASE("test 1207.unique-number-of-occurrences", "[1207.unique-number-of-occurrences]") {
    Solution s;
    std::vector<int> in1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::vector<int> in2 = {4, -3, 5, -2, -1, 2, 6, -2};
    std::vector<int> in3 = {-1};
    std::vector<int> in4 = {-1, 11, -4, 13, -5, -2};
    std::vector<int> in5 = {-3,0,1,-3,1,1,1,-3,10,0};
    std::vector<int> in6 = {1,2,2,1,1,3};
    bool ans1 = false;
    bool ans2 = false;
    bool ans3 = true;
    bool ans4 = false;
    bool ans5 = true;
    bool ans6 = true;
    REQUIRE(s.uniqueOccurrences(in1) == ans1);
    REQUIRE(s.uniqueOccurrences(in2) == ans2);
    REQUIRE(s.uniqueOccurrences(in3) == ans3);
    REQUIRE(s.uniqueOccurrences(in4) == ans4);
    REQUIRE(s.uniqueOccurrences(in5) == ans5);
    REQUIRE(s.uniqueOccurrences(in6) == ans6);
}
