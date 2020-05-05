/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (51.49%)
 * Likes:    1691
 * Dislikes: 112
 * Total Accepted:    450.8K
 * Total Submissions: 861.4K
 * Testcase Example:  '"leetcode"'
 *
 * 
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * 
 * 
 * 
 * Note: You may assume the string contain only lowercase letters.
 * 
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(std::string s) {
        std::vector<int> frequencies(26, 0);
        for (auto ch: s) {
            frequencies[ch-'a']++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (frequencies[s[i]-'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end
