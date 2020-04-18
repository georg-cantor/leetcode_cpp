/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 *
 * https://leetcode.com/problems/unique-paths-ii/description/
 *
 * algorithms
 * Medium (33.76%)
 * Likes:    1432
 * Dislikes: 222
 * Total Accepted:    270.9K
 * Total Submissions: 797.4K
 * Testcase Example:  '[[0,0,0],[0,1,0],[0,0,0]]'
 *
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in
 * the diagram below).
 * 
 * The robot can only move either down or right at any point in time. The robot
 * is trying to reach the bottom-right corner of the grid (marked 'Finish' in
 * the diagram below).
 * 
 * Now consider if some obstacles are added to the grids. How many unique paths
 * would there be?
 * 
 * 
 * 
 * An obstacle and empty space is marked as 1 and 0 respectively in the grid.
 * 
 * Note: m and n will be at most 100.
 * 
 * Example 1:
 * 
 * 
 * Input:
 * [
 * [0,0,0],
 * [0,1,0],
 * [0,0,0]
 * ]
 * Output: 2
 * Explanation:
 * There is one obstacle in the middle of the 3x3 grid above.
 * There are two ways to reach the bottom-right corner:
 * 1. Right -> Right -> Down -> Down
 * 2. Down -> Down -> Right -> Right
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) return 0;
        int n = obstacleGrid[0].size();
        if (n == 0) return 0;
        std::vector<std::vector<int>> res(m, std::vector<int>(n, -1));
        res[0][0] = 1 - obstacleGrid[0][0];
        for (int i = 1; i < m; ++i) {
            res[i][0] = obstacleGrid[i][0] == 0 ? res[i-1][0] : 0;
        }
        for (int i = 1; i < n; ++i) {
            res[0][i] = obstacleGrid[0][i] == 0 ? res[0][i-1] : 0;
        }
        return calculate(obstacleGrid, res, m-1, n-1);
    }

    int calculate(std::vector<std::vector<int>>& grid, std::vector<std::vector<int>>& points, int i, int j) {
        if (points[i][j] == -1) {
            if (grid[i][j] == 1) points[i][j] = 0;
            else {
                points[i][j] = calculate(grid, points, i-1, j) + calculate(grid, points, i, j-1);
            }
        }
        return points[i][j];
    }
};
// @lc code=end
