#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/92.reverse-linked-list-ii.hpp>

TEST_CASE("test 92.reverse-linked-list-ii", "[92.reverse-linked-list-ii]") {
    Solution s;
    std::vector<int> in1{3,9,20,-1,-1,15,7};
    std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
    std::vector<int> in3{1,2};
    std::vector<int> in4{1};
    std::vector<int> ans1{3,15,-1,-1,20,9,7};
    std::vector<int> ans2{1,2,6,-1,-1,5,4,-1,-1,3,7,8,9};
    std::vector<int> ans3{2,1};
    std::vector<int> ans4{1};

    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in1),2,6)) == ans1);
    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in2),3,10)) == ans2);
    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in3),1,1)) == in3);
    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in3),2,2)) == in3);
    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in3),1,2)) == ans3);
    REQUIRE(list_to_vector(s.reverseBetween(build_from_vec(in4),1,1)) == ans4);
}
