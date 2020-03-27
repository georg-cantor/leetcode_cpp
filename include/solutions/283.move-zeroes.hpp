/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (55.63%)
 * Likes:    3078
 * Dislikes: 106
 * Total Accepted:    639.6K
 * Total Submissions: 1.1M
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int len = nums.size();
        int zeros = 0;
        for (int i = len-1; i >= 0; --i) {
            if (nums[i] == 0) {
                for (int j = i; j < len-1-zeros; j++) {
                    std::swap(nums[j],nums[j+1]);
                }
                zeros++;
            }
        }
    }
};
// @lc code=end
