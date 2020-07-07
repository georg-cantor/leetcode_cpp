/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (41.92%)
 * Likes:    1549
 * Dislikes: 2405
 * Total Accepted:    627.6K
 * Total Submissions: 1.5M
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int len = digits.size();
        if (len == 0) return std::vector<int>{1};
        std::vector<int> res{digits};
        std::vector<int> zeros(len, 0);
        zeros[len-1] = 1;
        int carry{0};
        for (int i = len-1; i >= 0; --i) {
            int x = digits[i] + carry + zeros[i];
            res[i] = x % 10;
            carry = x/10;
            if (carry == 0) {
                break;
            }
        }
        if (carry != 0) {
            auto it = res.begin();
            it = res.insert(it, 1);
        }
        return res;
    }
};
// @lc code=end
