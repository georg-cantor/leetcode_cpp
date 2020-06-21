#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include <solutions/60.permutation-sequence.hpp>

TEST_CASE("test 60.permutation-sequence", "[60.permutation-sequence]") {
    Solution s;
    int in11{3};
    int in12{3};
    int in21{1};
    int in22{1};
    int in31{4};
    int in32{10};
    int in41{4};
    int in42{9};
    int in51{9};
    int in52{1};
    int in61{9};
    int in62{362880};
    int in71{9};
    int in72{362879};

    std::string ans1{"213"};
    std::string ans2{"1"};
    std::string ans3{"2341"};
    std::string ans4{"2314"};
    std::string ans5{"123456789"};
    std::string ans6{"987654321"};
    std::string ans7{"987654312"};

    REQUIRE(s.getPermutation(in11, in12) == ans1);
    REQUIRE(s.getPermutation(in21, in22) == ans2);
    REQUIRE(s.getPermutation(in31, in32) == ans3);
    REQUIRE(s.getPermutation(in41, in42) == ans4);
    REQUIRE(s.getPermutation(in51, in52) == ans5);
    REQUIRE(s.getPermutation(in61, in62) == ans6);
    REQUIRE(s.getPermutation(in71, in72) == ans7);
}
