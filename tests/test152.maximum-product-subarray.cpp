#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/152.maximum-product-subarray.hpp>

TEST_CASE("test 152.maximum-product-subarray", "[152.maximum-product-subarray]") {
    Solution s;
    std::vector<int> in1{2,3,-2,4};
    std::vector<int> in2{-2,0,-1};
    std::vector<int> in3{2,7,9,3,1};
    std::vector<int> in4{4,2,7,1,3,-6,9};
    std::vector<int> in5{4,2,7,3,-6,9,10,-3,98,73};
    std::vector<int> in6{4,2,7,3,-6,9,10,-3,73};

    int ans1{6};
    int ans2{0};
    int ans3{378};
    int ans4{168};
    int ans5{1947032640};
    int ans6{19867680};

    REQUIRE(s.maxProduct(in1) == ans1);
    REQUIRE(s.maxProduct(in2) == ans2);
    REQUIRE(s.maxProduct(in3) == ans3);
    REQUIRE(s.maxProduct(in4) == ans4);
    REQUIRE(s.maxProduct(in6) == ans6);
    REQUIRE(s.maxProduct(in5) == ans5);
}
