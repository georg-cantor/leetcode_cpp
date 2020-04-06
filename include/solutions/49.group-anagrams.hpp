/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 *
 * https://leetcode.com/problems/group-anagrams/description/
 *
 * algorithms
 * Medium (50.78%)
 * Likes:    2729
 * Dislikes: 157
 * Total Accepted:    517.7K
 * Total Submissions: 969.1K
 * Testcase Example:  '["eat","tea","tan","ate","nat","bat"]'
 *
 * Given an array of strings, group anagrams together.
 * 
 * Example:
 * 
 * 
 * Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
 * Output:
 * [
 * ⁠ ["ate","eat","tea"],
 * ⁠ ["nat","tan"],
 * ⁠ ["bat"]
 * ]
 * 
 * Note:
 * 
 * 
 * All inputs will be in lowercase.
 * The order of your output does not matter.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::map<const std::string, std::vector<std::string>> anagrams;
        std::vector<std::vector<std::string>> res{};
        for (auto str: strs) {
            std::string cpy{};
            std::copy(str.begin(), str.end(), std::back_inserter(cpy));
            std::sort(cpy.begin(), cpy.end());
            if (!anagrams.count(cpy)) {
                std::vector<std::string> ss{};
                anagrams[cpy] = std::move(ss);
            }
            anagrams[cpy].push_back(str);
        }
        for (auto it = anagrams.begin(); it != anagrams.end(); ++it) {
            res.push_back(it->second);
        }
        return res;
    }
};
// @lc code=end
