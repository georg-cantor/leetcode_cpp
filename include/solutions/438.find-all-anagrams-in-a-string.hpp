/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 *
 * https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
 *
 * algorithms
 * Medium (40.40%)
 * Likes:    2761
 * Dislikes: 166
 * Total Accepted:    239.1K
 * Total Submissions: 566.6K
 * Testcase Example:  '"cbaebabacd"\n"abc"'
 *
 * Given a string s and a non-empty string p, find all the start indices of p's
 * anagrams in s.
 * 
 * Strings consists of lowercase English letters only and the length of both
 * strings s and p will not be larger than 20,100.
 * 
 * The order of output does not matter.
 * 
 * Example 1:
 * 
 * Input:
 * s: "cbaebabacd" p: "abc"
 * 
 * Output:
 * [0, 6]
 * 
 * Explanation:
 * The substring with start index = 0 is "cba", which is an anagram of "abc".
 * The substring with start index = 6 is "bac", which is an anagram of
 * "abc".
 * 
 * 
 * 
 * Example 2:
 * 
 * Input:
 * s: "abab" p: "ab"
 * 
 * Output:
 * [0, 1, 2]
 * 
 * Explanation:
 * The substring with start index = 0 is "ab", which is an anagram of "ab".
 * The substring with start index = 1 is "ba", which is an anagram of "ab".
 * The substring with start index = 2 is "ab", which is an anagram of "ab".
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        std::vector<int> res{};
        int sLen = s.size();
        int pLen = p.size();
        if (sLen == 0 || pLen == 0 || sLen < pLen) return res;
        std::vector<int> alphaFreq(26, 0);
        std::vector<int> betaFreq(26, 0);
        for (int i = 0; i < pLen; ++i) {
            alphaFreq[p[i] - 'a']++;
            betaFreq[s[i] - 'a']++;
        }
        if (alphaFreq == betaFreq) res.push_back(0);
        for (int i = pLen; i < sLen; ++i) {
            betaFreq[s[i] - 'a']++;
            betaFreq[s[i-pLen] - 'a']--;
            if (alphaFreq == betaFreq) res.push_back(i-pLen+1);
        }
        return res;
    }
};
// @lc code=end
