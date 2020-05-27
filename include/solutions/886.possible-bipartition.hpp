/*
 * @lc app=leetcode id=886 lang=cpp
 *
 * [886] Possible Bipartition
 *
 * https://leetcode.com/problems/possible-bipartition/description/
 *
 * algorithms
 * Medium (42.24%)
 * Likes:    694
 * Dislikes: 21
 * Total Accepted:    37.6K
 * Total Submissions: 87.8K
 * Testcase Example:  '4\n[[1,2],[1,3],[2,4]]'
 *
 * Given a set of N people (numbered 1, 2, ..., N), we would like to split
 * everyone into two groups of any size.
 * 
 * Each person may dislike some other people, and they should not go into the
 * same group. 
 * 
 * Formally, if dislikes[i] = [a, b], it means it is not allowed to put the
 * people numbered a and b into the same group.
 * 
 * Return true if and only if it is possible to split everyone into two groups
 * in this way.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: N = 4, dislikes = [[1,2],[1,3],[2,4]]
 * Output: true
 * Explanation: group1 [1,4], group2 [2,3]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: N = 3, dislikes = [[1,2],[1,3],[2,3]]
 * Output: false
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: N = 5, dislikes = [[1,2],[2,3],[3,4],[4,5],[1,5]]
 * Output: false
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= N <= 2000
 * 0 <= dislikes.length <= 10000
 * 1 <= dislikes[i][j] <= N
 * dislikes[i][0] < dislikes[i][1]
 * There does not exist i != j for which dislikes[i] == dislikes[j].
 * 
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool possibleBipartition(int N, std::vector<std::vector<int>>& dislikes) {
        dislikeGraph = std::vector<std::vector<int>>(N);
        for (const auto& dislike: dislikes) {
            dislikeGraph[dislike[0] - 1].push_back(dislike[1] - 1);
            dislikeGraph[dislike[1] - 1].push_back(dislike[0] - 1);
        }
        colors = std::vector<int>(N, 0);
        for (int i = 0; i < N; ++i) {
            if (colors[i] == 0 && !tint(i, 1)) return false;
        }
        return true;
    }
private:
    std::vector<std::vector<int>> dislikeGraph;
    std::vector<int> colors;
    bool tint(int pos, int color) {
        colors[pos] = color;
        for (int neighbor : dislikeGraph[pos]) {
            if (colors[neighbor] == color) return false;
            if (colors[neighbor] == 0 && !tint(neighbor, -color)) return false;
        }
        return true;
    }
};
// @lc code=end
