#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <queue>
#include "solutions/lib.hpp"
#include <solutions/1008.construct-binary-search-tree-from-preorder-traversal.hpp>

TEST_CASE("test 1008.construct-binary-search-tree-from-preorder-traversal", "[1008.construct-binary-search-tree-from-preorder-traversal]") {
    Solution s;
    std::vector<int> in1{8,5,1,7,10,12};
    std::vector<int> ans1{8,5,10,1,7,-1,12};

    REQUIRE(tree_to_vector(s.bstFromPreorder(in1)) == ans1);
}
