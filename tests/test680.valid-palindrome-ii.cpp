#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/680.valid-palindrome-ii.hpp>

TEST_CASE("test 680.valid-palindrome-ii", "[680.valid-palindrome-ii]") {
    Solution s;
    std::string in1 = "amanaplanacanalpanama";
    std::string in6 = "amanaplanacanalpanamxa";
    std::string in2 = "racacar";
    std::string in3 = "normaisasselflessasiamron";
    std::string in4 = "amanpxpnamxa";
    std::string in7 = "onormaisasselflessasiamron";
    std::string in5 = "normaisasselflessasiamrono";
    bool ans1 = true;
    bool ans2 = true;
    bool ans3 = true;
    bool ans4 = true;
    bool ans5 = true;
    bool ans6 = true;
    bool ans7 = true;
    REQUIRE(s.validPalindrome(in1) == ans1);
    REQUIRE(s.validPalindrome(in2) == ans2);
    REQUIRE(s.validPalindrome(in3) == ans3);
    REQUIRE(s.validPalindrome(in4) == ans4);
    REQUIRE(s.validPalindrome(in5) == ans5);
    REQUIRE(s.validPalindrome(in6) == ans6);
    REQUIRE(s.validPalindrome(in7) == ans7);
}
