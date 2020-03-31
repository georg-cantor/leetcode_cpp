/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 *
 * https://leetcode.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (33.90%)
 * Likes:    1462
 * Dislikes: 4208
 * Total Accepted:    423.7K
 * Total Submissions: 1.2M
 * Testcase Example:  '"PAYPALISHIRING"\n3'
 *
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 * 
 * 
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * 
 * 
 * And then read line by line: "PAHNAPLSIIGYIR"
 * 
 * Write the code that will take a string and make this conversion given a
 * number of rows:
 * 
 * 
 * string convert(string s, int numRows);
 * 
 * Example 1:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 3
 * Output: "PAHNAPLSIIGYIR"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 4
 * Output: "PINALSIGYAHRPI"
 * Explanation:
 * 
 * P     I    N
 * A   L S  I G
 * Y A   H R
 * P     I
 * 
 */

// @lc code=start
class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if (numRows <= 1) return s;
        std::vector<std::string> lines(numRows);
        bool direction = true;
        int cur = 0;
        for (auto ch: s) {
            if (direction) {
                lines[cur].push_back(ch);
                cur++;
                if (cur == numRows) {
                    cur--;
                    direction = false;
                }
            }
            else {
                cur--;
                lines[cur].push_back(ch);
                if (cur == 0) {
                    cur++;
                    direction = true;
                }
            }
        }
        std::string res{};
        for (auto s: lines) {
            res.append(s);
        }
        return res;
    }
};
// @lc code=end
