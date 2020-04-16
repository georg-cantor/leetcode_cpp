#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/26.remove-duplicates-from-sorted-array.hpp>

TEST_CASE("test 26.remove-duplicates-from-sorted-array", "[26.remove-duplicates-from-sorted-array]") {
    Solution s;
    std::vector<int> in1 = {1, 1, 2};
    std::vector<int> in2 = {0,0,1,1,1,2,2,3,3,4};
    std::vector<int> in3 = {-1};
    std::vector<int> in4{};
    std::vector<int> in5 = {-1, 0, 4, 13, 13, 22};
    int ans1 = 2;
    int ans2 = 5;
    int ans3 = 1;
    int ans4 = 0;
    int ans5 = 5;
    std::vector<int> out1{1,2};
    std::vector<int> out2{0,1,2,3,4};
    std::vector<int> out3{-1};
    std::vector<int> out4{};
    std::vector<int> out5{-1,0,4,13,22};
    REQUIRE(s.removeDuplicates(in1) == ans1);
    //REQUIRE(s.getResult() == out1);
    REQUIRE(s.removeDuplicates(in2) == ans2);
    //REQUIRE(s.getResult() == out2);
    REQUIRE(s.removeDuplicates(in3) == ans3);
    //REQUIRE(s.getResult() == out3);
    REQUIRE(s.removeDuplicates(in4) == ans4);
    //REQUIRE(s.getResult() == out4);
    REQUIRE(s.removeDuplicates(in5) == ans5);
    //REQUIRE(s.getResult() == out5);
}
