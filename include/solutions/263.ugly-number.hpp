/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 *
 * https://leetcode.com/problems/ugly-number/description/
 *
 * algorithms
 * Easy (41.06%)
 * Likes:    371
 * Dislikes: 559
 * Total Accepted:    188.9K
 * Total Submissions: 458.1K
 * Testcase Example:  '6'
 *
 * Write a program to check whether a given number is an ugly number.
 * 
 * Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.
 * 
 * Example 1:
 * 
 * 
 * Input: 6
 * Output: true
 * Explanation: 6 = 2 × 3
 * 
 * Example 2:
 * 
 * 
 * Input: 8
 * Output: true
 * Explanation: 8 = 2 × 2 × 2
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 14
 * Output: false 
 * Explanation: 14 is not ugly since it includes another prime factor 7.
 * 
 * 
 * Note:
 * 
 * 
 * 1 is typically treated as an ugly number.
 * Input is within the 32-bit signed integer range: [−2^31,  2^31 − 1].
 * 
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        int x = num;
        while (x > 1) {
            if (x % 2 == 0) {
                x /= 2;
            }
            else if (x % 3 == 0) {
                x /= 3;
            }
            else if (x % 5 == 0) {
                x /= 5;
            } else {
                break;
            }
        }
        if (x == 1) {
            return true;
        } else {
            return false;
        };
    }
};
// @lc code=end
