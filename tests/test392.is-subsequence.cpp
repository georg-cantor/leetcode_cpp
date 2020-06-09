#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/392.is-subsequence.hpp>

TEST_CASE("test 392.is-subsequence", "[392.is-subsequence]") {
    Solution s;
    std::string s1{"axc"};
    std::string t1{"ahbgdc"};
    bool ans1{false};
    std::string s2{"abc"};
    std::string t2{"ahbgdc"};
    bool ans2{true};
    std::string s3{"axc"};
    std::string t3{"ahxgdc"};
    bool ans3{true};
    std::string s4{""};
    std::string t4{"ahbgdc"};
    bool ans4{true};
    std::string s5{""};
    std::string t5{""};
    bool ans5{true};

    REQUIRE(s.isSubsequence(s1, t1) == ans1);
    REQUIRE(s.isSubsequence(s2, t2) == ans2);
    REQUIRE(s.isSubsequence(s3, t3) == ans3);
    REQUIRE(s.isSubsequence(s4, t4) == ans4);
    REQUIRE(s.isSubsequence(s5, t5) == ans5);
}
