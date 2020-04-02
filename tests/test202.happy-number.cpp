#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <solutions/202.happy-number.hpp>

TEST_CASE("test 202.happy-number", "[202.happy-number]") {
    Solution s;
    int in1{19};
    bool ans1{true};
    REQUIRE(s.isHappy(in1) == ans1);
}
