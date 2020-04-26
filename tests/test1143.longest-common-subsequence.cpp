#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/1143.longest-common-subsequence.hpp>

TEST_CASE("test 1143.longest-common-subsequence", "[1143.longest-common-subsequence]") {
    Solution s;
    std::string in11{"abcde"};
    std::string in12{"ace"};
    std::string ans11{"ace"};
    int ans12{3};

    std::string in21{"abc"};
    std::string in22{"abc"};
    std::string ans21{"abc"};
    int ans22{3};

    std::string in31{"abc"};
    std::string in32{"def"};
    std::string ans31{""};
    int ans32{0};

    std::string in41{"ezupkr"};
    std::string in42{"ubmrapg"};
    std::string ans41{"ur"};
    int ans42{2};

    std::string in51{"oxcpqrsvwf"};
    std::string in52{"shmtulqrypy"};
    std::string ans51{"qr"};
    int ans52{2};

    REQUIRE(s.longestCommonSubsequence(in11, in12) == ans12);
    REQUIRE(s.longestCommonSubsequence(in21, in22) == ans22);
    REQUIRE(s.longestCommonSubsequence(in31, in32) == ans32);
    REQUIRE(s.longestCommonSubsequence(in41, in42) == ans42);
    REQUIRE(s.longestCommonSubsequence(in51, in52) == ans52);
}
