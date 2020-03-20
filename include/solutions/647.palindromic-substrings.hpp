/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 *
 * https://leetcode.com/problems/palindromic-substrings/description/
 *
 * algorithms
 * Medium (58.47%)
 * Likes:    2085
 * Dislikes: 101
 * Total Accepted:    155.3K
 * Total Submissions: 261.5K
 * Testcase Example:  '"abc"'
 *
 * Given a string, your task is to count how many palindromic substrings in
 * this string.
 * 
 * The substrings with different start indexes or end indexes are counted as
 * different substrings even they consist of same characters.
 * 
 * Example 1:
 * 
 * 
 * Input: "abc"
 * Output: 3
 * Explanation: Three palindromic strings: "a", "b", "c".
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "aaa"
 * Output: 6
 * Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The input string length won't exceed 1000.
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int countSubstrings(std::string s) {
        int n = s.size();
        if (n <= 1) return n;
        std::vector<int> d1(n, 0);
        std::vector<int> d2(n, 0);
        int result = 0;
        int l1=0, l2=0, r1=-1, r2=-1;
        for (int i = 0; i < n; i++) {
            {
                int k = (i > r1) ? 1 : std::min(d1[l1+r1-i], r1-i);
                while (i-k >= 0 && i+k < n && s[i-k]==s[i+k]) {
                    k++;
                }
                d1[i] = k--;
                if (i+k>r1) {
                    r1 = i+k;
                    l1 = i-k;
                }
            }
            {
                int k = (i > r2) ? 0 : std::min(d2[l2+r2-i+1], r2-i+1);
                while (i-k-1 >= 0 && i+k < n && s[i-k-1]==s[i+k]) {
                    k++;
                }
                d2[i] = k--;
                if (i+k > r2) {
                    r2 = i+k;
                    l2 = i-k-1;
                }
            }
        }
        for (auto num: d1) {
            result += num;
        }
        for (auto num:d2) {
            result += num;
        }
        return result;
    }
};
// @lc code=end
