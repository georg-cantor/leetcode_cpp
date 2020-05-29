/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 *
 * https://leetcode.com/problems/course-schedule/description/
 *
 * algorithms
 * Medium (40.83%)
 * Likes:    3433
 * Dislikes: 168
 * Total Accepted:    375.8K
 * Total Submissions: 897.4K
 * Testcase Example:  '2\n[[1,0]]'
 *
 * There are a total of numCourses courses you have to take, labeled from 0 to
 * numCourses-1.
 * 
 * Some courses may have prerequisites, for example to take course 0 you have
 * to first take course 1, which is expressed as a pair: [0,1]
 * 
 * Given the total number of courses and a list of prerequisite pairs, is it
 * possible for you to finish all courses?
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: numCourses = 2, prerequisites = [[1,0]]
 * Output: true
 * Explanation: There are a total of 2 courses to take. 
 * To take course 1 you should have finished course 0. So it is possible.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
 * Output: false
 * Explanation: There are a total of 2 courses to take. 
 * To take course 1 you should have finished course 0, and to take course 0 you
 * should
 * also have finished course 1. So it is impossible.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The input prerequisites is a graph represented by a list of edges, not
 * adjacency matrices. Read more about how a graph is represented.
 * You may assume that there are no duplicate edges in the input
 * prerequisites.
 * 1 <= numCourses <= 10^5
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        std::vector<std::vector<int>> courseDependencies(numCourses);
        std::vector<std::vector<int>> reverseDependencies(numCourses);
        std::vector<int> inDegrees(numCourses);
        std::queue<int> zeroInDegreeVertex{};
        int counter{0};

        for (auto prerequisite : prerequisites) {
            courseDependencies[prerequisite[0]].push_back(prerequisite[1]);
            reverseDependencies[prerequisite[1]].push_back(prerequisite[0]);
        }
        for (int i = 0; i < numCourses; ++i) {
            if (courseDependencies[i].size() == 0) {
                zeroInDegreeVertex.push(i);
            }
            inDegrees[i] = courseDependencies[i].size();
        }

        while (!zeroInDegreeVertex.empty()) {
            auto vertex = zeroInDegreeVertex.front();
            zeroInDegreeVertex.pop();
            ++counter;
            for (auto v : reverseDependencies[vertex]) {
                if (--inDegrees[v] == 0) {
                    zeroInDegreeVertex.push(v);
                }
            }
        }

        if (counter != numCourses) {
            return false;
        } else {
            return true;
        }
    }
};
// @lc code=end
