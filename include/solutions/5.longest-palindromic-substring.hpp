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
    Solution(): table(1000,std::vector<bool>(1000, false)) {}
    std::string longestPalindrome(std::string s) {
        int len = s.size();
        if (len == 0 || len ==1) return s;
        int start = 0;
        int end = 0;
        for (int i = 0; i < len; i++) {
            table[i][i] = true;
            if ((i+1) < len) {
                table[i][i+1] = (s[i] == s[i+1]) ? true : false;
                if (table[i][i+1]) {
                    start = i;
                    end = i+1;
                }
            }
        }
        for (int total = 3; total <= len; total++) {
            for (int i = 0; i < len-total+1; i++) {
                int j = i+(total-1);
                table[i][j] = (table[i+1][j-1] && (s[i] == s[j]));
                if (table[i][j]) {
                    start = i;
                    end = j;
                }
            }
        }
        return s.substr(start, end-start+1);
    }
    std::string longestPalindrome1(std::string s) {
        int len = s.size();
        if (len == 0 || len ==1) return s;
        for (int total = len; total > 0; total--) {
            for (int i = 0; i < len; i++) {
                int j = i + (total-1);
                if (j >= len) break;
                else if (isPalindrome(s.substr(i, total))) {
                    return s.substr(i, total);
                }
            }
        }
        return s.substr(0,1);
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
private:
    std::vector<std::vector<bool>> table;
};
// @lc code=end
