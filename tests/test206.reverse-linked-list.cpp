#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/206.reverse-linked-list.hpp>

TEST_CASE("test 206.reverse-linked-list", "[206.reverse-linked-list]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1,2};
    std::vector<int> in4{1};
    std::vector<int> in5{};
    std::vector<int> ans1{7,15,-1,-1,20,9,3};
    std::vector<int> ans2{9,8,7,6,-1,-1,5,4,-1,-1,3,2,1};
    std::vector<int> ans3{2,1};
    std::vector<int> ans4{1};
    std::vector<int> ans5{};

    REQUIRE(list_to_vector(s.reverseList(build_from_vec(in1))) == ans1);
    REQUIRE(list_to_vector(s.reverseList(build_from_vec(in2))) == ans2);
    REQUIRE(list_to_vector(s.reverseList(build_from_vec(in3))) == ans3);
    REQUIRE(list_to_vector(s.reverseList(build_from_vec(in4))) == ans4);
    REQUIRE(list_to_vector(s.reverseList(build_from_vec(in5))) == ans5);

    /* Below is the tests for recursive reverse */
    REQUIRE(list_to_vector(s.reverseListRec(build_from_vec(in1))) == ans1);
    REQUIRE(list_to_vector(s.reverseListRec(build_from_vec(in2))) == ans2);
    REQUIRE(list_to_vector(s.reverseListRec(build_from_vec(in3))) == ans3);
    REQUIRE(list_to_vector(s.reverseListRec(build_from_vec(in4))) == ans4);
    REQUIRE(list_to_vector(s.reverseListRec(build_from_vec(in5))) == ans5);
}
