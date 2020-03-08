#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/88.merge-sorted-array.hpp>

TEST_CASE("test 88.merge-sorted-array", "[88.merge-sorted-array]") {
    Solution s;
    std::vector<int> in1_1{1,2,3,0,0,0};
    int in1_2{3};
    std::vector<int> in1_3{2,5,6};
    int in1_4{3};
    std::vector<int> ans1{1,2,2,3,5,6};
    s.merge(in1_1, in1_2, in1_3, in1_4);
    REQUIRE(in1_1 == ans1);

    std::vector<int> in2_1{1,2,2,3,0,0,0,0,0};
    int in2_2{4};
    std::vector<int> in2_3{2,3,3,5,6};
    int in2_4{5};
    std::vector<int> ans2{1,2,2,2,3,3,3,5,6};
    s.merge(in2_1, in2_2, in2_3, in2_4);
    REQUIRE(in2_1 == ans2);


    std::vector<int> in3_1{1,0};
    int in3_2{1};
    std::vector<int> in3_3{0};
    int in3_4{1};
    std::vector<int> ans3{0,1};
    s.merge(in3_1, in3_2, in3_3, in3_4);
    REQUIRE(in3_1 == ans3);

    std::vector<int> in4_1{1};
    int in4_2{1};
    std::vector<int> in4_3{};
    int in4_4{0};
    std::vector<int> ans4{1};
    s.merge(in4_1, in4_2, in4_3, in4_4);
    REQUIRE(in4_1 == ans4);

    std::vector<int> in5_1{};
    int in5_2{0};
    std::vector<int> in5_3{};
    int in5_4{0};
    std::vector<int> ans5{};
    s.merge(in5_1, in5_2, in5_3, in5_4);
    REQUIRE(in5_1 == ans5);
}
