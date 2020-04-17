/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (55.17%)
 * Likes:    1267
 * Dislikes: 131
 * Total Accepted:    511.6K
 * Total Submissions: 918.6K
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t , write a function to determine if t is an anagram
 * of s.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Note:
 * You may assume the string contains only lowercase alphabets.
 * 
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your
 * solution to such case?
 * 
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        return build_map_from_str(s) == build_map_from_str(t);
    }
    std::unordered_map<char, int> build_map_from_str(std::string s) {
        std::unordered_map<char, int> anagram{};
        for (auto ch: s) {
            anagram[ch]++;
        }
        return anagram;
    }
};
// @lc code=end
