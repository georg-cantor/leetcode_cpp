#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <solutions/217.contains-duplicate.hpp>

TEST_CASE("test 217.contains-duplicate", "[217.contains-duplicate]") {
    Solution s;
    std::vector<int> in1{1,1,1,3,3,4,3,2,4,2};
    std::vector<int> in2{1,2,3,4};
    std::vector<int> in3{1,2,3,1};
    std::vector<int> in4{};
    std::vector<int> in5{1};

    bool ans1{true};
    bool ans2{false};
    bool ans3{true};
    bool ans4{false};
    bool ans5{false};

    REQUIRE(s.containsDuplicate(in1) == ans1);
    REQUIRE(s.containsDuplicate(in2) == ans2);
    REQUIRE(s.containsDuplicate(in3) == ans3);
    REQUIRE(s.containsDuplicate(in4) == ans4);
    REQUIRE(s.containsDuplicate(in5) == ans5);
}
