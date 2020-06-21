/*
 * @lc app=leetcode id=174 lang=cpp
 *
 * [174] Dungeon Game
 *
 * https://leetcode.com/problems/dungeon-game/description/
 *
 * algorithms
 * Hard (28.96%)
 * Likes:    1346
 * Dislikes: 36
 * Total Accepted:    90K
 * Total Submissions: 297.7K
 * Testcase Example:  '[[-2,-3,3],[-5,-10,1],[10,30,-5]]'
 *
 * table.dungeon, .dungeon th, .dungeon td {
 * ⁠ border:3px solid black;
 * }
 * 
 * ⁠.dungeon th, .dungeon td {
 * ⁠   text-align: center;
 * ⁠   height: 70px;
 * ⁠   width: 70px;
 * }
 * 
 * The demons had captured the princess (P) and imprisoned her in the
 * bottom-right corner of a dungeon. The dungeon consists of M x N rooms laid
 * out in a 2D grid. Our valiant knight (K) was initially positioned in the
 * top-left room and must fight his way through the dungeon to rescue the
 * princess.
 * 
 * The knight has an initial health point represented by a positive integer. If
 * at any point his health point drops to 0 or below, he dies immediately.
 * 
 * Some of the rooms are guarded by demons, so the knight loses health
 * (negative integers) upon entering these rooms; other rooms are either empty
 * (0's) or contain magic orbs that increase the knight's health (positive
 * integers).
 * 
 * In order to reach the princess as quickly as possible, the knight decides to
 * move only rightward or downward in each step.
 * 
 * 
 * 
 * Write a function to determine the knight's minimum initial health so that he
 * is able to rescue the princess.
 * 
 * For example, given the dungeon below, the initial health of the knight must
 * be at least 7 if he follows the optimal path RIGHT-> RIGHT -> DOWN ->
 * DOWN.
 * 
 * 
 * 
 * 
 * -2 (K)
 * -3
 * 3
 * 
 * 
 * -5
 * -10
 * 1
 * 
 * 
 * 10
 * 30
 * -5 (P)
 * 
 * 
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The knight's health has no upper bound.
 * Any room can contain threats or power-ups, even the first room the knight
 * enters and the bottom-right room where the princess is imprisoned.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int calculateMinimumHP(std::vector<std::vector<int>>& dungeon) {
        int height = dungeon.size();
        if (height == 0) return 1;
        int width = dungeon[0].size();
        if (width == 0) return 1;
        std::vector<std::vector<int>> matrix(height, std::vector<int>(width, 0));
        //matrix[height-1][width-1] = 1;
        for (int i = height - 1; i >= 0; --i) {
            for (int j = width - 1; j >= 0; --j) {
                int right;
                if (j+1 <= width-1) {
                    right = matrix[i][j+1] - dungeon[i][j+1];
                } else {
                    right = std::numeric_limits<int>::max();
                }
                int down;
                if (i+1 <= height-1) {
                    down = matrix[i+1][j] - dungeon[i+1][j];
                } else {
                    down = std::numeric_limits<int>::max();
                }
                matrix[i][j] = std::min(right, down);
                if ((matrix[i][j] == std::numeric_limits<int>::max()) || matrix[i][j] <= 0) matrix[i][j] = 1;
            }
        }
        return (matrix[0][0] - dungeon[0][0] <= 0) ? 1 : matrix[0][0] - dungeon[0][0];
    }
};
// @lc code=end
