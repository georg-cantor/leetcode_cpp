/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 *
 * https://leetcode.com/problems/is-subsequence/description/
 *
 * algorithms
 * Easy (47.93%)
 * Likes:    1266
 * Dislikes: 195
 * Total Accepted:    176.8K
 * Total Submissions: 364.2K
 * Testcase Example:  '"abc"\n"ahbgdc"'
 *
 * Given a string s and a string t, check if s is subsequence of t.
 * 
 * A subsequence of a string is a new string which is formed from the original
 * string by deleting some (can be none) of the characters without disturbing
 * the relative positions of the remaining characters. (ie, "ace" is a
 * subsequence of "abcde" while "aec" is not).
 * 
 * Follow up:
 * If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you
 * want to check one by one to see if T has its subsequence. In this scenario,
 * how would you change your code?
 * 
 * Credits:
 * Special thanks to @pbrother for adding this problem and creating all test
 * cases.
 * 
 * 
 * Example 1:
 * Input: s = "abc", t = "ahbgdc"
 * Output: true
 * Example 2:
 * Input: s = "axc", t = "ahbgdc"
 * Output: false
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= s.length <= 100
 * 0 <= t.length <= 10^4
 * Both strings consists only of lowercase characters.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int sl = s.size();
        int tl = t.size();
        if (sl > tl) return false;
        if (sl == 0) return true;
        int sp = 0;
        int tp = 0;
        int cnt = 0;
        while (sp < sl && tp < tl) {
            if (s[sp] == t[tp]) {
                sp++;
                cnt++;
            }
            tp++;
        }
        if (cnt == sl) return true;
        else return false;
    }
};
// @lc code=end
