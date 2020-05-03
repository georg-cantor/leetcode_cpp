/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 *
 * https://leetcode.com/problems/ransom-note/description/
 *
 * algorithms
 * Easy (51.51%)
 * Likes:    515
 * Dislikes: 177
 * Total Accepted:    165.8K
 * Total Submissions: 314K
 * Testcase Example:  '"a"\n"b"'
 *
 * 
 * Given an arbitrary ransom note string and another string containing letters
 * from all the magazines, write a function that will return true if the
 * ransom 
 * note can be constructed from the magazines ; otherwise, it will return
 * false. 
 * 
 * 
 * Each letter in the magazine string can only be used once in your ransom
 * note.
 * 
 * 
 * Note:
 * You may assume that both strings contain only lowercase letters.
 * 
 * 
 * 
 * canConstruct("a", "b") -> false
 * canConstruct("aa", "ab") -> false
 * canConstruct("aa", "aab") -> true
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::vector<int> freq(26,0);
        for (auto ch: magazine) {
            freq[ch-'a']++;
        }
        for (auto ch: ransomNote) {
            freq[ch-'a']--;
            if (freq[ch-'a'] < 0) {
                return false;
            }
        }
        return true;
    }
    bool canConstruct1(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> ransomMap   = constructMap(ransomNote);
        std::unordered_map<char, int> magazineMap = constructMap(magazine);
        for(auto iter = ransomMap.begin(); iter != ransomMap.end(); ++iter){
            if (magazineMap[iter->first] < iter->second) {
                return false;
            }
        }
        return true;
    }
    std::unordered_map<char, int> constructMap(std::string note) {
        std::unordered_map<char, int> res{};
        for (auto ch: note) {
            res[ch]++;
        }
        return res;
    }
};
// @lc code=end
