#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include "solutions/lib.hpp"
#include <solutions/107.binary-tree-level-order-traversal-ii.hpp>

TEST_CASE("test 107.binary-tree-level-order-traversal-ii", "[107.binary-tree-level-order-traversal-ii]") {
  Solution s;
  std::vector<int> in1{3,9,20,-1,-1,15,7};
  std::vector<int> in2{1,2,3,-1,-1,4,5,-1,-1,6,7,8,9};
  std::vector<int> in3{1};
  std::vector<int> in4{};
  std::vector<std::vector<int>> ans1{{15, 7}, {9, 20}, {3}};
  std::vector<std::vector<int>> ans2{{8,9}, {6,7}, {4,5}, {2,3}, {1}};
  std::vector<std::vector<int>> ans3{{1}};
  std::vector<std::vector<int>> ans4{};
  REQUIRE(s.levelOrderBottom(build_from_level_order(in1)) == ans1);
  REQUIRE(s.levelOrderBottom(build_from_level_order(in2)) == ans2);
  REQUIRE(s.levelOrderBottom(build_from_level_order(in3)) == ans3);
  REQUIRE(s.levelOrderBottom(build_from_level_order(in4)) == ans4);
}
