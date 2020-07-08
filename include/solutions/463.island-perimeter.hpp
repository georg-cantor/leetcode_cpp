/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 *
 * https://leetcode.com/problems/island-perimeter/description/
 *
 * algorithms
 * Easy (63.24%)
 * Likes:    2009
 * Dislikes: 118
 * Total Accepted:    217.9K
 * Total Submissions: 333.9K
 * Testcase Example:  '[[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]'
 *
 * You are given a map in form of a two-dimensional integer grid where 1
 * represents land and 0 represents water.
 * 
 * Grid cells are connected horizontally/vertically (not diagonally). The grid
 * is completely surrounded by water, and there is exactly one island (i.e.,
 * one or more connected land cells).
 * 
 * The island doesn't have "lakes" (water inside that isn't connected to the
 * water around the island). One cell is a square with side length 1. The grid
 * is rectangular, width and height don't exceed 100. Determine the perimeter
 * of the island.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input:
 * [[0,1,0,0],
 * ⁠[1,1,1,0],
 * ⁠[0,1,0,0],
 * ⁠[1,1,0,0]]
 * 
 * Output: 16
 * 
 * Explanation: The perimeter is the 16 yellow stripes in the image below:
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        int height = grid.size();
        if (height == 0) return 0;
        int width = grid[0].size();
        if (width == 0) return 0;
        int res{0};
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (grid[i][j] == 1) {
                    if (i-1 < 0 || grid[i-1][j] == 0) {
                        res++;
                    }
                    if (i+1 >= height || grid[i+1][j] == 0) {
                        res++;
                    }
                    if (j-1 < 0 || grid[i][j-1] == 0) {
                        res++;
                    }
                    if (j+1 >= width || grid[i][j+1] == 0) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end
