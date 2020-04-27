/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 *
 * https://leetcode.com/problems/maximal-square/description/
 *
 * algorithms
 * Medium (34.61%)
 * Likes:    2468
 * Dislikes: 63
 * Total Accepted:    210.3K
 * Total Submissions: 582.6K
 * Testcase Example:  '[["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]'
 *
 * Given a 2D binary matrix filled with 0's and 1's, find the largest square
 * containing only 1's and return its area.
 * 
 * Example:
 * 
 * 
 * Input: 
 * 
 * 1 0 1 0 0
 * 1 0 1 1 1
 * 1 1 1 1 1
 * 1 0 0 1 0
 * 
 * Output: 4
 * 
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(std::vector<std::vector<char>>& matrix) {
        int m = matrix.size();
        if (m == 0) {
            return 0;
        }
        int n = matrix[0].size();
        if (n == 0) {
            return 0;
        }
        std::vector<std::vector<int>> res(m, std::vector<int>(n, 0));
        res[0][0] = matrix[0][0] - '0';
        int maxSquare = res[0][0];
        for (int k = 1; k < m; ++k) {
            res[k][0] = matrix[k][0]-'0';
            maxSquare = std::max(maxSquare, res[k][0]);
        }
        for (int k = 1; k < n; ++k) {
            res[0][k] = matrix[0][k]-'0';
            maxSquare = std::max(maxSquare, res[0][k]);
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] == '1') {
                    res[i][j] = std::min(std::min(res[i-1][j], res[i][j-1]), res[i-1][j-1]) + 1;
                    maxSquare = std::max(maxSquare, res[i][j]);
                }
            }
        }
        return maxSquare * maxSquare;
    }
};
// @lc code=end
