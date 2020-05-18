/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 *
 * https://leetcode.com/problems/permutation-in-string/description/
 *
 * algorithms
 * Medium (40.13%)
 * Likes:    1356
 * Dislikes: 54
 * Total Accepted:    112.9K
 * Total Submissions: 259.3K
 * Testcase Example:  '"ab"\n"eidbaooo"'
 *
 * Given two strings s1 and s2, write a function to return true if s2 contains
 * the permutation of s1. In other words, one of the first string's
 * permutations is the substring of the second string.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s1 = "ab" s2 = "eidbaooo"
 * Output: True
 * Explanation: s2 contains one permutation of s1 ("ba").
 * 
 * 
 * Example 2:
 * 
 * 
 * Input:s1= "ab" s2 = "eidboaoo"
 * Output: False
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The input strings only contain lower case letters.
 * The length of both given strings is in range [1, 10,000].
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        int m = s1.size();
        int n = s2.size();
        if (m == 0 || n == 0 || m > n) return false;
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);
        for (int i = 0; i < m; ++i) {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if (freq1 == freq2) return true;
        for (int j = m; j < n; ++j) {
            freq2[s2[j]-'a']++;
            freq2[s2[j-m]-'a']--;
            if (freq1 == freq2) return true;
        }
        return false;
    }
};
// @lc code=end
