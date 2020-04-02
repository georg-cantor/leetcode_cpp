/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 *
 * https://leetcode.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (47.40%)
 * Likes:    1608
 * Dislikes: 358
 * Total Accepted:    363.3K
 * Total Submissions: 736.9K
 * Testcase Example:  '19'
 *
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with
 * any positive integer, replace the number by the sum of the squares of its
 * digits, and repeat the process until the number equals 1 (where it will
 * stay), or it loops endlessly in a cycle which does not include 1. Those
 * numbers for which this process ends in 1 are happy numbers.
 * 
 * Example: 
 * 
 * 
 * Input: 19
 * Output: true
 * Explanation: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 * 
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        std::unordered_map<int, int> u_map{};
        u_map[n] = 1;
        while (n != 1) {
            int new_n = 0;
            while (n) {
                new_n += std::pow(n%10, 2);
                n = n/10;
            }
            n = new_n;
            if (u_map.count(n)) {
                return false;
            } else {
                u_map[n] = 1;
            }
        }
        return true;
    }
};
// @lc code=end
