/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 *
 * https://leetcode.com/problems/valid-palindrome-ii/description/
 *
 * algorithms
 * Easy (35.36%)
 * Likes:    1203
 * Dislikes: 89
 * Total Accepted:    128.7K
 * Total Submissions: 359.4K
 * Testcase Example:  '"aba"'
 *
 * 
 * Given a non-empty string s, you may delete at most one character.  Judge
 * whether you can make it a palindrome.
 * 
 * 
 * Example 1:
 * 
 * Input: "aba"
 * Output: True
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: "abca"
 * Output: True
 * Explanation: You could delete the character 'c'.
 * 
 * 
 * 
 * Note:
 * 
 * The string will only contain lowercase characters a-z.
 * The maximum length of the string is 50000.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(std::string s) {
        if (s.size() == 0) return true;
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            if (s.at(i) == s.at(j)) {
                i++;
                j--;
            } else if (isPalindromeRange(s, i, j-1)) {
                return true;
            } else if (isPalindromeRange(s, i+1, j)) {
                return true;
            } else {
                return false;
            }
        }
        return true;
    }
 private:
    bool isPalindromeRange(std::string& s, int i, int j) {
        for (int k = i; k <= i + (j - i) / 2; k++) {
            if (s.at(k) != s.at(j - k + i)) {
              return false;
            }
        }
        return true;
    }
};
// @lc code=end
