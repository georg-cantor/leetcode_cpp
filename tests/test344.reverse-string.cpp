#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/344.reverse-string.hpp>

TEST_CASE("test 344.reverse-string", "[344.reverse-string]") {
    REQUIRE(1==1);
    Solution s;
    std::vector<char> in1{'a', 'b'};
    std::vector<char> in2{'a', 'b', 'c'};
    std::vector<char> in3{'a', 'b', 'c', 'd'};
    s.reverseString(in1);
    s.printString(in1);
    s.reverseString(in2);
    s.printString(in2);
    s.reverseString(in3);
    s.printString(in3);
}
