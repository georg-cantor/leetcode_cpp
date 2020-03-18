/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (28.31%)
 * Likes:    5720
 * Dislikes: 478
 * Total Accepted:    826.3K
 * Total Submissions: 2.9M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::string longestPalindrome(std::string s) {
        int len = s.size();
        if (len == 0 || len ==1) return s;
        int found_len = 0;
        std::string found{""};
        for (int i = 0; i < len; i++) {
            for (int j = s.size()-1; j >= i; j--) {
                if (isPalindrome(s.substr(i,j-i+1)) && j-i+1 > found.size()) {
                    found = s.substr(i, j-i+1);
                }
            }
        }
        return found;
    }
    bool isPalindrome(std::string s) {
        if (s.size() == 0) return true;
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            if (s.at(i) != s.at(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end
