#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/125.valid-palindrome.hpp>

TEST_CASE("test 125.valid-palindrome", "[125.valid-palindrome]") {
    Solution s;
    std::string in1 = "A man, a plan, a canal: Panama";
    std::string in2 = "";
    std::string in3 = "race a car";
    std::string in4 = "Norma is as selfless as I am, Ron.";
    std::string in5 = "T. Eliot, top bard, notes putrid tang emanating, is sad. I’d assign it a name: gnat dirt upset on drab pot-toilet.";
    std::string in6 = "Al lets Della call Ed 'Stella.'";
    bool ans1 = true;
    bool ans2 = true;
    bool ans3 = false;
    bool ans4 = true;
    bool ans5 = true;
    bool ans6 = true;
    REQUIRE(s.isPalindrome(in1) == ans1);
    REQUIRE(s.isPalindrome(in2) == ans2);
    REQUIRE(s.isPalindrome(in3) == ans3);
    REQUIRE(s.isPalindrome(in4) == ans4);
    REQUIRE(s.isPalindrome(in5) == ans5);
    REQUIRE(s.isPalindrome(in6) == ans6);
}