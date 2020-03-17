#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/9.palindrome-number.hpp>

TEST_CASE("test 9.palindrome-number", "[9.palindrome-number]") {
    Solution s;
    int in14 = 1000110001;
    int in13 = 1001;
    int in0 = 1000021;
    int in1 = 12321;
    int in2 = 43234;
    int in3 = 12344321;
    int in4 = 11;
    int in5 = 1;
    int in6 = 9;
    int in12 = 100;
    int in7 = 10;
    int in8 = 17;
    int in9 = 22;
    int in10 = 29;
    int in11 = -213321;
    int ans14 = true;
    int ans13 = true;
    int ans0 = false;
    int ans1 = true;
    int ans2 = true;
    int ans3 = true;
    int ans4 = true;
    int ans5 = true;
    int ans6 = true;
    int ans7 = false;
    int ans8 = false;
    int ans9 = true;
    int ans10 = false;
    int ans11 = false;
    int ans12 = false;
    REQUIRE(s.isPalindrome(in13) == ans13);
    REQUIRE(s.isPalindrome(in14) == ans14);
    REQUIRE(s.isPalindrome(in0) == ans0);
    REQUIRE(s.isPalindrome(in1) == ans1);
    REQUIRE(s.isPalindrome(in2) == ans2);
    REQUIRE(s.isPalindrome(in3) == ans3);
    REQUIRE(s.isPalindrome(in4) == ans4);
    REQUIRE(s.isPalindrome(in5) == ans5);
    REQUIRE(s.isPalindrome(in6) == ans6);
    REQUIRE(s.isPalindrome(in12) == ans12);
    REQUIRE(s.isPalindrome(in7) == ans7);
    REQUIRE(s.isPalindrome(in8) == ans8);
    REQUIRE(s.isPalindrome(in9) == ans9);
    REQUIRE(s.isPalindrome(in10) == ans10);
    REQUIRE(s.isPalindrome(in11) == ans11);
}
