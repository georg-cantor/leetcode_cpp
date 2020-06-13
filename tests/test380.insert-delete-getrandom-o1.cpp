#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>
#include <solutions/380.insert-delete-getrandom-o1.hpp>

TEST_CASE("test 380.insert-delete-getrandom-o1", "[380.insert-delete-getrandom-o1]") {
    RandomizedSet randomSet{};
    REQUIRE(randomSet.insert(1));
    REQUIRE(!randomSet.remove(2));
    REQUIRE(randomSet.insert(2));
    int rnd_1 = randomSet.getRandom();
    REQUIRE(rnd_1 == 1 || rnd_1 == 2);
    REQUIRE(randomSet.remove(1));
    REQUIRE(!randomSet.insert(2));
    int rnd_2 = randomSet.getRandom();
    REQUIRE(rnd_2 == 2);
}
