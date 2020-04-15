#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/238.product-of-array-except-self.hpp>

TEST_CASE("test 238.product-of-array-except-self", "[238.product-of-array-except-self]") {
    Solution s;
    std::vector<int> in1{1,2,3,4};
    std::vector<int> ans1{24,12,8,6};

    REQUIRE(s.productExceptSelf(in1) == ans1);
}
