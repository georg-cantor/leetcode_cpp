/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 *
 * https://leetcode.com/problems/valid-parenthesis-string/description/
 *
 * algorithms
 * Medium (33.52%)
 * Likes:    1101
 * Dislikes: 33
 * Total Accepted:    51.7K
 * Total Submissions: 160.4K
 * Testcase Example:  '"()"'
 *
 * 
 * Given a string containing only three types of characters: '(', ')' and '*',
 * write a function to check whether this string is valid. We define the
 * validity of a string by these rules:
 * 
 * Any left parenthesis '(' must have a corresponding right parenthesis ')'.
 * Any right parenthesis ')' must have a corresponding left parenthesis '('.
 * Left parenthesis '(' must go before the corresponding right parenthesis ')'.
 * '*' could be treated as a single right parenthesis ')' or a single left
 * parenthesis '(' or an empty string.
 * An empty string is also valid.
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: "()"
 * Output: True
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: "(*)"
 * Output: True
 * 
 * 
 * 
 * Example 3:
 * 
 * Input: "(*))"
 * Output: True
 * 
 * 
 * 
 * Note:
 * 
 * The string size will be in the range [1, 100].
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(std::string s) {
        int lowVal = 0;
        int highVal = 0;
        for (auto ch: s) {
            if (ch == '(') {
                lowVal++;
                highVal++;
            } else if (ch == ')') {
                lowVal--;
                highVal--;
            } else {
                lowVal--;
                highVal++;
            }
            if (highVal < 0) {
                return false;
            }
            if (lowVal<0) {
                lowVal = 0;
            }
        }
        //printf("low: %d- high:%d\n", lowVal, highVal);
        if (lowVal*highVal <= 0) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end
