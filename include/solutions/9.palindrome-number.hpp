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
            int bits_num = count_bits(x);
            //printf("bits_num: %d\n", bits_num);
            int y = x;
            int half_revert = 0;
            for (int i = 0; i < bits_num/2; i++) {
                int r = y % 10;
                y = y/10;
                half_revert =half_revert*10 + r;
            }
            //printf("y: %d, half_revert: %d\n", y, half_revert);
            if (y == half_revert || y/10 == half_revert) return true;
            else return false;
        }
    }
private:
    int count_bits(int x) {
        int bits = 0;
        while (x != 0) {
            bits++;
            x = x/10;
        }
        return bits;
    }
};
// @lc code=end
