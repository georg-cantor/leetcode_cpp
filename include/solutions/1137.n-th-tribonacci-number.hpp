/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 *
 * https://leetcode.com/problems/n-th-tribonacci-number/description/
 *
 * algorithms
 * Easy (57.76%)
 * Likes:    157
 * Dislikes: 32
 * Total Accepted:    27.8K
 * Total Submissions: 48.9K
 * Testcase Example:  '4'
 *
 * The Tribonacci sequence Tn is defined as follows: 
 * 
 * T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
 * 
 * Given n, return the value of Tn.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 4
 * Output: 4
 * Explanation:
 * T_3 = 0 + 1 + 1 = 2
 * T_4 = 1 + 1 + 2 = 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 25
 * Output: 1389537
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= n <= 37
 * The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31
 * - 1.
 * 
 */

// @lc code=start
class Solution {
public:
    Solution() : known_vec(50, -1) {}
    int tribonacci(int n) {
        if (known_vec.at(n) == -1) {
            if (n == 0) {
                known_vec.at(n) = 0;
            } else if (n == 1) {
                known_vec.at(n) = 1;
            } else if (n == 2) {
                known_vec.at(n) = 1;
            } else {
                known_vec.at(n) = (tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1));
            }
        }
        return known_vec.at(n);

    }
 private:
    std::vector<int> known_vec;
};
// @lc code=end
