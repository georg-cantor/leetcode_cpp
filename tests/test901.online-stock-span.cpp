#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <utility>
#include <stack>
#include <solutions/901.online-stock-span.hpp>

TEST_CASE("test 901.online-stock-span", "[901.online-stock-span]") {
    StockSpanner obj{};
    REQUIRE(obj.next(100) == 1);
    REQUIRE(obj.next(80) == 1);
    REQUIRE(obj.next(60) == 1);
    REQUIRE(obj.next(70) == 2);
    REQUIRE(obj.next(60) == 1);
    REQUIRE(obj.next(75) == 4);
    REQUIRE(obj.next(85) == 6);
    StockSpanner obj1{};
    REQUIRE(obj1.next(29) == 1);
    REQUIRE(obj1.next(91) == 2);
    REQUIRE(obj1.next(62) == 1);
    REQUIRE(obj1.next(76) == 2);
    REQUIRE(obj1.next(51) == 1);
}
