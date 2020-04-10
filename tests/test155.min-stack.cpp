#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/155.min-stack.hpp>

TEST_CASE("test 155.min-stack", "[155.min-stack]") {
    MinStack obj{};
    obj.push(-2);
    obj.push(0);
    obj.push(-3);
    REQUIRE(obj.getMin() == -3);
    obj.pop();
    REQUIRE(obj.top() == 0);
    REQUIRE(obj.getMin() == -2);
    obj.pop();
    REQUIRE(obj.top() == -2);
    REQUIRE(obj.getMin() == -2);
}
