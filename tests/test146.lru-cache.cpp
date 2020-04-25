#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <utility>
#include <unordered_map>
#include <list>
#include <solutions/146.lru-cache.hpp>

TEST_CASE("test 146.lru-cache", "[146.lru-cache]") {
    LRUCache cache = LRUCache( 2 /* capacity */ );

    cache.put(1, 1);
    cache.put(2, 2);
    REQUIRE(cache.get(1) == 1);       // returns 1
    cache.put(3, 3);    // evicts key 2
    REQUIRE(cache.get(2) == -1);       // returns -1 (not found)
    cache.put(4, 4);    // evicts key 1
    REQUIRE(cache.get(1) == -1);       // returns -1 (not found)
    REQUIRE(cache.get(3) == 3);       // returns 3
    REQUIRE(cache.get(4) == 4);       // returns 4
}
