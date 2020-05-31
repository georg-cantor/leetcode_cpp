/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 *
 * https://leetcode.com/problems/edit-distance/description/
 *
 * algorithms
 * Hard (42.09%)
 * Likes:    3467
 * Dislikes: 52
 * Total Accepted:    248.3K
 * Total Submissions: 582.3K
 * Testcase Example:  '"horse"\n"ros"'
 *
 * Given two words word1 and word2, find the minimum number of operations
 * required to convert word1 to word2.
 * 
 * You have the following 3 operations permitted on a word:
 * 
 * 
 * Insert a character
 * Delete a character
 * Replace a character
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: word1 = "horse", word2 = "ros"
 * Output: 3
 * Explanation: 
 * horse -> rorse (replace 'h' with 'r')
 * rorse -> rose (remove 'r')
 * rose -> ros (remove 'e')
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: word1 = "intention", word2 = "execution"
 * Output: 5
 * Explanation: 
 * intention -> inention (remove 't')
 * inention -> enention (replace 'i' with 'e')
 * enention -> exention (replace 'n' with 'x')
 * exention -> exection (replace 'n' with 'c')
 * exection -> execution (insert 'u')
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int minDistance(std::string word1, std::string word2) {
        int m = word1.size();
        int n = word2.size();
        distanceMatrix = std::vector<std::vector<int>>(m+1, std::vector<int>(n+1, -1));
        return minDistanceRec(word1, word2, m, n);
    }

private:
    std::vector<std::vector<int>> distanceMatrix;
    int minDistanceRec(const std::string& word1, const std::string& word2, int m, int n) {
        if (m == 0) return n;
        if (n == 0) return m;
        if (distanceMatrix[m][n] >= 0) return distanceMatrix[m][n];

        int res{0};

        if (word1[m-1] == word2[n-1]) {
            res = minDistanceRec(word1, word2, m-1, n-1);
        } else {
            res = 1 + std::min(minDistanceRec(word1, word2, m-1, n-1),
                    std::min(minDistanceRec(word1, word2, m-1, n), minDistanceRec(word1, word2, m, n-1)));
        }
        distanceMatrix[m][n] = res;
        return distanceMatrix[m][n];
    }
};
// @lc code=end
