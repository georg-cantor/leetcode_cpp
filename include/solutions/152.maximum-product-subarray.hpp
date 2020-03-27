/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 *
 * https://leetcode.com/problems/maximum-product-subarray/description/
 *
 * algorithms
 * Medium (30.38%)
 * Likes:    3343
 * Dislikes: 139
 * Total Accepted:    295.8K
 * Total Submissions: 955.2K
 * Testcase Example:  '[2,3,-2,4]'
 *
 * Given an integer array nums, find the contiguous subarray within an array
 * (containing at least one number) which has the largest product.
 * 
 * Example 1:
 * 
 * 
 * Input: [2,3,-2,4]
 * Output: 6
 * Explanation: [2,3] has the largest product 6.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [-2,0,-1]
 * Output: 0
 * Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 * 
 */

// @lc code=start
class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        if (len == 1) return nums[0];

        std::vector<int> dp_max{};
        std::vector<int> dp_min{};
        dp_min.push_back(1);
        dp_max.push_back(1);
        dp_min.push_back(nums[0]);
        dp_max.push_back(nums[0]);
        int maxP = dp_max[1];
        int minP = dp_min[1];
        for (int i = 1; i < len; i++) {
            int a = dp_max.back();
            int b = dp_min.back();
            dp_max.push_back(std::max(std::max(a*nums[i], b*nums[i]), nums[i]));
            dp_min.push_back(std::min(std::min(a*nums[i], b*nums[i]), nums[i]));
            if (dp_max.back() > maxP) maxP = dp_max.back();
        }
        print_vec(dp_max);
        print_vec(dp_min);
        return maxP;
    }
    void print_vec(std::vector<int>& nums) {
        printf("{");
        for (auto num: nums) {
            printf("%d, ", num);
        }
        printf("}\n");
    }
};
// @lc code=end
