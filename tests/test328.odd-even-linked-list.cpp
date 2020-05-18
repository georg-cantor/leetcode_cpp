#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/328.odd-even-linked-list.hpp>

TEST_CASE("test 328.odd-even-linked-list", "[328.odd-even-linked-list]") {
    Solution s;
    std::vector<int> in1{1,2,3,4,5};
    std::vector<int> ans1{1,3,5,2,4};

    std::vector<int> in2{2,1,3,5,6,4,7};
    std::vector<int> ans2{2,3,6,7,1,5,4};

    REQUIRE(list_to_vector(s.oddEvenList(build_from_vec(in1))) == ans1);
    REQUIRE(list_to_vector(s.oddEvenList(build_from_vec(in2))) == ans2);
}
