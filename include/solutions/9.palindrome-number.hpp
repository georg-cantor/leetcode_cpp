/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (46.71%)
 * Likes:    1987
 * Dislikes: 1487
 * Total Accepted:    827.7K
 * Total Submissions: 1.8M
 * Testcase Example:  '121'
 *
 * Determine whether an integer is a palindrome. An integer is a palindrome
 * when it reads the same backward as forward.
 * 
 * Example 1:
 * 
 * 
 * Input: 121
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * Follow up:
 * 
 * Coud you solve it without converting the integer to a string?
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x < 10) return true;
        else if (x%10 == 0) return false;
        else {
            int y = x;
            int decimal_bits = 0;
            while (y!=0) {
                decimal_bits++;
                y = y/10;
            }
            printf("isPalindromeRec(%d, %d)\n", x, decimal_bits-2);
            return isPalindromeRec(x, decimal_bits-2);
        }
    }
    bool isPalindromeRec(int x, int decimal_bits) {
        if (x < 0) {
            return false;
        }
        else if (x < 10) {
            return true;
        } else if (x%10 == 0) {
            return false;
        } else {
            int toMinus = 1;
            int cal_bits = decimal_bits;
            while (cal_bits != 0) {
                toMinus *= 10;
                cal_bits--;
            }
            printf("isPalindromeRec(%d, %d)\n", x/10 - ((x%10)*toMinus), decimal_bits-2);
            return isPalindromeRec(x/10 - ((x%10)*toMinus), decimal_bits-2);
        }
    }
};
// @lc code=end
