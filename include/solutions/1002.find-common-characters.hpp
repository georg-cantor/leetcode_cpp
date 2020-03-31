/*
 * @lc app=leetcode id=1002 lang=cpp
 *
 * [1002] Find Common Characters
 *
 * https://leetcode.com/problems/find-common-characters/description/
 *
 * algorithms
 * Easy (66.72%)
 * Likes:    642
 * Dislikes: 81
 * Total Accepted:    56.6K
 * Total Submissions: 84.7K
 * Testcase Example:  '["bella","label","roller"]'
 *
 * Given an array A of strings made only from lowercase letters, return a list
 * of all characters that show up in all strings within the list (including
 * duplicates).  For example, if a character occurs 3 times in all strings but
 * not 4 times, you need to include that character three times in the final
 * answer.
 * 
 * You may return the answer in any order.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: ["bella","label","roller"]
 * Output: ["e","l","l"]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["cool","lock","cook"]
 * Output: ["c","o"]
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= A.length <= 100
 * 1 <= A[i].length <= 100
 * A[i][j] is a lowercase letter
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<std::string> commonChars1(std::vector<std::string>& A) {
        int len = A.size();
        int min_size = std::numeric_limits<int>::max();
        int min_index = 0;
        std::vector<std::unordered_map<std::string, int>> u_maps;
        std::vector<std::string> res{};
        if (len == 0) return res;
        for (auto str: A) {
            std::unordered_map<std::string, int> u_map;
            for (int i = 0; i < str.size(); ++i) {
                u_map.insert_or_assign(str.substr(i, 1), u_map.find(str.substr(i, 1)) != u_map.end() ? u_map[str.substr(i, 1)]+1 : 1);
            }
            if (u_map.size() < min_size) {
                min_size = u_map.size();
                min_index = u_maps.size();
            }
            u_maps.push_back(std::move(u_map));
        }
        std::swap(u_maps[0], u_maps[min_index]);
        for (const auto& x : u_maps[0]) {
            int min_cnt = x.second;
            for (int i = 1; i < u_maps.size(); ++i) {
                if (!u_maps[i].count(x.first)) {
                    min_cnt = 0;
                    break;
                } else {
                    min_cnt = std::min(min_cnt, u_maps[i][x.first]);
                }
            }
            while(min_cnt != 0) {
                res.push_back(x.first);
                min_cnt--;
            }
        }
        return res;
    }

    std::vector<std::string> commonChars(std::vector<std::string>& A) {
        std::vector<std::string> res{};
        if (A.size() == 0) return res;
        int prev[26] = {0};
        for(char c : A[0]) prev[c-'a']++;

        for(std::string& str : A){
            int curr[26] = {0};
            for(char c : str) curr[c-'a']++;
            for(int i=0; i<26; i++) prev[i] = std::min(prev[i], curr[i]);
        }


        for(int i=0; i<26; i++){
            while(prev[i]>0){
                std::string s(1,'a'+i);
                res.push_back(std::move(s));
                prev[i]--;
            }
        }

        return res;
    }
};
// @lc code=end
