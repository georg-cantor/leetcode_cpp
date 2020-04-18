/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 *
 * https://leetcode.com/problems/unique-paths/description/
 *
 * algorithms
 * Medium (50.09%)
 * Likes:    2660
 * Dislikes: 187
 * Total Accepted:    418.9K
 * Total Submissions: 807.2K
 * Testcase Example:  '3\n2'
 *
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in
 * the diagram below).
 * 
 * The robot can only move either down or right at any point in time. The robot
 * is trying to reach the bottom-right corner of the grid (marked 'Finish' in
 * the diagram below).
 * 
 * How many possible unique paths are there?
 * 
 * 
 * Above is a 7 x 3 grid. How many possible unique paths are there?
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: m = 3, n = 2
 * Output: 3
 * Explanation:
 * From the top-left corner, there are a total of 3 ways to reach the
 * bottom-right corner:
 * 1. Right -> Right -> Down
 * 2. Right -> Down -> Right
 * 3. Down -> Right -> Right
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: m = 7, n = 3
 * Output: 28
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= m, n <= 100
 * It's guaranteed that the answer will be less than or equal to 2 * 10 ^ 9.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 0) return 1;
        if (n == 0) return 1;
        std::vector<std::vector<int>> res(m, std::vector<int>(n, 0));
        res[0][0] = 1;
        for (int i = 1; i < m; ++i) {
            res[i][0] = 1;
        }
        for (int i = 1; i < n; ++i) {
            res[0][i] = 1;
        }
        return calculate(m, n, res, m-1, n-1);
    }
    int calculate(int m, int n, std::vector<std::vector<int>>& points, int i, int j) {
        if (points[i][j] == 0) {
            points[i][j] = calculate(m, n, points, i-1, j) + calculate(m, n, points, i, j-1);
        }
        return points[i][j];
    }
};
// @lc code=end
