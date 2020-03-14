#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/234.palindrome-linked-list.hpp>

TEST_CASE("test 234.palindrome-linked-list", "[234.palindrome-linked-list]") {
    Solution s;
    std::vector<int> in1{3,9};
    std::vector<int> in2{1,2,3,-1,-1,-1,-1,3,2,1};
    std::vector<int> in3{1,2,1};
    std::vector<int> in4{};
    std::vector<int> in5{1};
    bool ans1 = false;
    bool ans2 = true;
    bool ans3 = true;
    bool ans4 = true;
    bool ans5 = true;
    REQUIRE(s.isPalindrome(build_from_vec(in1)) == ans1);
    REQUIRE(s.isPalindrome(build_from_vec(in2)) == ans2);
    REQUIRE(s.isPalindrome(build_from_vec(in3)) == ans3);
    REQUIRE(s.isPalindrome(build_from_vec(in4)) == ans4);
    REQUIRE(s.isPalindrome(build_from_vec(in5)) == ans5);
}
