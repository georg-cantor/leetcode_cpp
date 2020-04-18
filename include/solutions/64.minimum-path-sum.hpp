/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 *
 * https://leetcode.com/problems/minimum-path-sum/description/
 *
 * algorithms
 * Medium (49.52%)
 * Likes:    2354
 * Dislikes: 51
 * Total Accepted:    334.1K
 * Total Submissions: 645.4K
 * Testcase Example:  '[[1,3,1],[1,5,1],[4,2,1]]'
 *
 * Given a m x n grid filled with non-negative numbers, find a path from top
 * left to bottom right which minimizes the sum of all numbers along its path.
 * 
 * Note: You can only move either down or right at any point in time.
 * 
 * Example:
 * 
 * 
 * Input:
 * [
 * [1,3,1],
 * ⁠ [1,5,1],
 * ⁠ [4,2,1]
 * ]
 * Output: 7
 * Explanation: Because the path 1→3→1→1→1 minimizes the sum.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int minPathSum(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        if (n == 0) return 0;
        std::vector<std::vector<int>> res(m, std::vector<int>(n, -1));
        res[0][0] = grid[0][0];
        for (int i = 1; i < m; ++i) {
            res[i][0] = res[i-1][0] + grid[i][0];
        }
        for (int i = 1; i < n; ++i) {
            res[0][i] = res[0][i-1] + grid[0][i];
        }
        return calculate(grid, res, m-1, n-1);
        /*
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; ++j) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
        return res[m-1][n-1];
         */
    }
    int calculate(std::vector<std::vector<int>>& grid, std::vector<std::vector<int>>& points, int i, int j) {
        if (points[i][j] == -1) {
            points[i][j] = std::min(calculate(grid, points, i-1, j), calculate(grid, points, i, j-1)) + grid[i][j];
        }
        return points[i][j];
    }
};
// @lc code=end
