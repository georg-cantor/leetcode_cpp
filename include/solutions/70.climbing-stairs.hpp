/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 *
 * https://leetcode.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (45.50%)
 * Likes:    3510
 * Dislikes: 116
 * Total Accepted:    587.9K
 * Total Submissions: 1.3M
 * Testcase Example:  '2'
 *
 * You are climbing a stair case. It takes n steps to reach to the top.
 * 
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 * 
 * Note: Given n will be a positive integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 2
 * Output: 2
 * Explanation: There are two ways to climb to the top.
 * 1. 1 step + 1 step
 * 2. 2 steps
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 3
 * Output: 3
 * Explanation: There are three ways to climb to the top.
 * 1. 1 step + 1 step + 1 step
 * 2. 1 step + 2 steps
 * 3. 2 steps + 1 step
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    Solution(): known_vec(50, -1) {}
    int climbStairs(int n) {
        if (known_vec.at(n) == -1) {
            if (n == 1) {
                known_vec.at(n) = 1;
            } else if (n == 2) {
                known_vec.at(n) = 2;
            } else {
                known_vec.at(n) = climbStairs(n-1) + climbStairs(n-2);
            }
        }
        return known_vec.at(n);
    }
 private:
    std::vector<int> known_vec;
};
// @lc code=end
