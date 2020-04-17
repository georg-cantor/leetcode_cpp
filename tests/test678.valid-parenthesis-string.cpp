#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/678.valid-parenthesis-string.hpp>

TEST_CASE("test 678.valid-parenthesis-string", "[678.valid-parenthesis-string]") {
    Solution s;
    std::string in1{"()"};
    std::string in2{"(*)"};
    std::string in3{"(*))"};
    std::string in4{"(*)))"};
    std::string in5{"()*)"};
    std::string in6{""};
    std::string in7{"(())((())()()(*)(*()(())())())()()((()())((()))(*"};

    bool ans1{true};
    bool ans2{true};
    bool ans3{true};
    bool ans4{false};
    bool ans5{true};
    bool ans6{true};
    bool ans7{false};

    REQUIRE(s.checkValidString(in1) == ans1);
    REQUIRE(s.checkValidString(in2) == ans2);
    REQUIRE(s.checkValidString(in3) == ans3);
    REQUIRE(s.checkValidString(in4) == ans4);
    REQUIRE(s.checkValidString(in5) == ans5);
    REQUIRE(s.checkValidString(in6) == ans6);
    REQUIRE(s.checkValidString(in7) == ans7);
}
