/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 *
 * https://leetcode.com/problems/roman-to-integer/description/
 *
 * algorithms
 * Easy (53.76%)
 * Likes:    1899
 * Dislikes: 3294
 * Total Accepted:    618.3K
 * Total Submissions: 1.1M
 * Testcase Example:  '"III"'
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 * 
 * 
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 * 
 * For example, two is written as II in Roman numeral, just two one's added
 * together. Twelve is written as, XII, which is simply X + II. The number
 * twenty seven is written as XXVII, which is XX + V + II.
 * 
 * Roman numerals are usually written largest to smallest from left to right.
 * However, the numeral for four is not IIII. Instead, the number four is
 * written as IV. Because the one is before the five we subtract it making
 * four. The same principle applies to the number nine, which is written as IX.
 * There are six instances where subtraction is used:
 * 
 * 
 * I can be placed before V (5) and X (10) to make 4 and 9. 
 * X can be placed before L (50) and C (100) to make 40 and 90. 
 * C can be placed before D (500) and M (1000) to make 400 and 900.
 * 
 * 
 * Given a roman numeral, convert it to an integer. Input is guaranteed to be
 * within the range from 1 to 3999.
 * 
 * Example 1:
 * 
 * 
 * Input: "III"
 * Output: 3
 * 
 * Example 2:
 * 
 * 
 * Input: "IV"
 * Output: 4
 * 
 * Example 3:
 * 
 * 
 * Input: "IX"
 * Output: 9
 * 
 * Example 4:
 * 
 * 
 * Input: "LVIII"
 * Output: 58
 * Explanation: L = 50, V= 5, III = 3.
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "MCMXCIV"
 * Output: 1994
 * Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 * 
 */

// @lc code=start
class Solution {
public:
    Solution() : romanMap{} {}
    int romanToInt1(std::string s) {
        load_map();
        int len = s.size();
        int res{0};
        int idx = 0;
        int cnt = 2;
        while (idx < len) {
            if (((idx+cnt) > len) || (!romanMap.count(s.substr(idx, cnt)))) {
                cnt = 1;
            }
            res += romanMap[s.substr(idx, cnt)];
            idx += cnt;
            cnt = 2;
        }
        return res;
    }
    int romanToInt(std::string s) {
        int len = s.size();
        int res{0};
        for (int i = 0; i < len; ++i) {
            int first = value_map(s[i]);
            if (i+1 < len) {
                int second = value_map(s[i+1]);
                if (first >= second) {
                    res += first;
                } else {
                    res += (second - first);
                    i++;
                }
            } else {
                res += first;
            }
        }
        return res;
    }
private:
    int value_map(char r)
    {
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;

        return -1;
    }
    std::map<std::string, int> romanMap;
    void load_map() {
        romanMap["I"] = 1;
        romanMap["V"] = 5;
        romanMap["X"] = 10;
        romanMap["L"] = 50;
        romanMap["C"] = 100;
        romanMap["D"] = 500;
        romanMap["M"] = 1000;
        romanMap["IV"] = 4;
        romanMap["IX"] = 9;
        romanMap["XL"] = 40;
        romanMap["XC"] = 90;
        romanMap["CD"] = 400;
        romanMap["CM"] = 900;
    };
};
// @lc code=end
