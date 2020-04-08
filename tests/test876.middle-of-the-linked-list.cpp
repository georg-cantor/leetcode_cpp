#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/876.middle-of-the-linked-list.hpp>

TEST_CASE("test 876.middle-of-the-linked-list", "[876.middle-of-the-linked-list]") {
    Solution s;
    std::vector<int> in1{1};
    std::vector<int> in2{1,2};
    std::vector<int> in3{1,2,3,4,5};
    std::vector<int> in4{1,2,3,4,5,6};

    std::vector<int> ans1{1};
    std::vector<int> ans2{2};
    std::vector<int> ans3{3,4,5};
    std::vector<int> ans4{4,5,6};

    REQUIRE(list_to_vector(s.middleNode(build_from_vec(in1))) == ans1);
    REQUIRE(list_to_vector(s.middleNode(build_from_vec(in2))) == ans2);
    REQUIRE(list_to_vector(s.middleNode(build_from_vec(in3))) == ans3);
    REQUIRE(list_to_vector(s.middleNode(build_from_vec(in4))) == ans4);
}
