/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (62.05%)
 * Likes:    3544
 * Dislikes: 141
 * Total Accepted:    642.7K
 * Total Submissions: 1M
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers, every element appears twice except for
 * one. Find that single one.
 * 
 * Note:
 * 
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 * Example 1:
 * 
 * 
 * Input: [2,2,1]
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,1,2,1,2]
 * Output: 4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int singleNumber1(std::vector<int>& nums) {
        int result = 0;
        for (auto x: nums) {
            result ^= x;
        }
        return result;
    }

    int singleNumber(std::vector<int>& nums) {
        return std::accumulate(nums.cbegin(), nums.cend(), 0, std::bit_xor<int>());
    }
};
// @lc code=end
