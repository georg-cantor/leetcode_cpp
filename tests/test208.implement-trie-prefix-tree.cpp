#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <memory>
#include <solutions/208.implement-trie-prefix-tree.hpp>

TEST_CASE("test 208.implement-trie-prefix-tree", "[208.implement-trie-prefix-tree]") {
    Trie trie{};
    trie.insert("apple");
    REQUIRE(trie.search("apple"));
    REQUIRE(!trie.search("app"));
    REQUIRE(trie.startsWith("app"));
    trie.insert("app");
    REQUIRE(trie.search("app"));
}
