#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <list>
#include <solutions/232.implement-queue-using-stacks.hpp>

TEST_CASE("test 232.implement-queue-using-stacks", "[232.implement-queue-using-stacks]") {
    MyQueue queue{};
    queue.push(1);
    queue.push(2);
    REQUIRE(queue.peek() == 1);
    REQUIRE(queue.pop() == 1);
    REQUIRE(queue.empty() == false);

    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    REQUIRE(obj->pop() == 1);
    REQUIRE(obj->peek() == 2);
    REQUIRE(obj->empty() == false);
    REQUIRE(obj->pop() == 2);
    REQUIRE(obj->empty() == true);
    delete obj;
}
