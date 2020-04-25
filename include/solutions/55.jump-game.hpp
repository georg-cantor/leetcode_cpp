/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 *
 * https://leetcode.com/problems/jump-game/description/
 *
 * algorithms
 * Medium (32.84%)
 * Likes:    3355
 * Dislikes: 293
 * Total Accepted:    391.5K
 * Total Submissions: 1.2M
 * Testcase Example:  '[2,3,1,1,4]'
 *
 * Given an array of non-negative integers, you are initially positioned at the
 * first index of the array.
 * 
 * Each element in the array represents your maximum jump length at that
 * position.
 * 
 * Determine if you are able to reach the last index.
 * 
 * Example 1:
 * 
 * 
 * Input: [2,3,1,1,4]
 * Output: true
 * Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last
 * index.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [3,2,1,0,4]
 * Output: false
 * Explanation: You will always arrive at index 3 no matter what. Its
 * maximum
 * jump length is 0, which makes it impossible to reach the last index.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int n = nums.size();
        int needed = 1;
        for (int i = n-2; i >= 0; --i) {
            if (nums[i] < needed) {
                needed++;
            } else {
                needed = 1;
            }
        }
        return (needed == 1);
    }
};
// @lc code=end
