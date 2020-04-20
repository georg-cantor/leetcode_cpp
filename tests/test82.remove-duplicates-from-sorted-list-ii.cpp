#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/82.remove-duplicates-from-sorted-list-ii.hpp>

TEST_CASE("test 82.remove-duplicates-from-sorted-list-ii", "[82.remove-duplicates-from-sorted-list-ii]") {
    Solution s;
    std::vector<int> in1{1,1,2};
    std::vector<int> in2{1,1,1,1,2,2,2,3,3,3,4};
    std::vector<int> in3{1,1,2,3,3};

    std::vector<int> ans1{2};
    std::vector<int> ans2{4};
    std::vector<int> ans3{2};

    REQUIRE(list_to_vector(s.deleteDuplicates(build_from_vec(in1))) == ans1);
    REQUIRE(list_to_vector(s.deleteDuplicates(build_from_vec(in2))) == ans2);
    REQUIRE(list_to_vector(s.deleteDuplicates(build_from_vec(in3))) == ans3);
}
