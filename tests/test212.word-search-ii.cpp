#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_set>
#include <solutions/212.word-search-ii.hpp>

TEST_CASE("test 212.word-search-ii", "[212.word-search-ii]") {
  Solution s;
  std::vector<std::vector<char>> in11{{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}};
  std::vector<std::string> in12{"oath","pea","eat","rain"};
  std::vector<std::string> ans1{"eat","oath"};

  REQUIRE(s.findWords(in11, in12) == ans1);
}
