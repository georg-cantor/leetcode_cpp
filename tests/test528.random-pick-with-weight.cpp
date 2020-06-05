#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <solutions/528.random-pick-with-weight.hpp>

TEST_CASE("test 528.random-pick-with-weight", "[528.random-pick-with-weight]") {
    std::vector<int> w1{1};
    std::vector<int> w2{1,3};
    Solution obj{w1};
    Solution obj1{w2};
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    std::cout << obj1.pickIndex() << std::endl;
    REQUIRE(obj.pickIndex() == 0);
    REQUIRE(obj.pickIndex() == 0);
}
