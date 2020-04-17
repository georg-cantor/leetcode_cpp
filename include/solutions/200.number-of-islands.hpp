/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 *
 * https://leetcode.com/problems/number-of-islands/description/
 *
 * algorithms
 * Medium (43.70%)
 * Likes:    4631
 * Dislikes: 174
 * Total Accepted:    611K
 * Total Submissions: 1.3M
 * Testcase Example:  '[["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]]'
 *
 * Given a 2d grid map of '1's (land) and '0's (water), count the number of
 * islands. An island is surrounded by water and is formed by connecting
 * adjacent lands horizontally or vertically. You may assume all four edges of
 * the grid are all surrounded by water.
 * 
 * Example 1:
 * 
 * 
 * Input:
 * 11110
 * 11010
 * 11000
 * 00000
 * 
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input:
 * 11000
 * 11000
 * 00100
 * 00011
 * 
 * Output: 3
 * 
 */

// @lc code=start
class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        int cnt = 0;
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        if (n == 0) return 0;
        for (int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    removeIslands(grid, m, n, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }

    void removeIslands(std::vector<std::vector<char>>& a, int m, int n, int i, int j) {
        if (i < 0 || j < 0 || i >= m || j >= n || a[i][j] != '1') return;
        a[i][j] = '0';
        removeIslands(a, m, n, i+1, j);
        removeIslands(a, m, n, i-1, j);
        removeIslands(a, m, n, i, j+1);
        removeIslands(a, m, n, i, j-1);
    }
};
// @lc code=end
