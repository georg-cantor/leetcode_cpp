/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 *
 * https://leetcode.com/problems/subsets/description/
 *
 * algorithms
 * Medium (57.94%)
 * Likes:    3169
 * Dislikes: 73
 * Total Accepted:    516.2K
 * Total Submissions: 874.6K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a set of distinct integers, nums, return all possible subsets (the
 * power set).
 * 
 * Note: The solution set must not contain duplicate subsets.
 * 
 * Example:
 * 
 * 
 * Input: nums = [1,2,3]
 * Output:
 * [
 * ⁠ [3],
 * [1],
 * [2],
 * [1,2,3],
 * [1,3],
 * [2,3],
 * [1,2],
 * []
 * ]
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::vector<int>> res{};
        unsigned long long total = std::pow(2, n);
        for (unsigned long long i = 0; i < total; ++i) {
            std::bitset<64> bs(i);
            //std::cout << bs << std::endl;
            std::vector<int> bs_to_subset{};
            for (int j = 0; j < n; ++j) {
                if (bs[j]) {
                    bs_to_subset.push_back(nums[j]);
                }
            }
            res.push_back(bs_to_subset);
        }
        return res;
    }

};
// @lc code=end
