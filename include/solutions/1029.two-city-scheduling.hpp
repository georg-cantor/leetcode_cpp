/*
 * @lc app=leetcode id=1029 lang=cpp
 *
 * [1029] Two City Scheduling
 *
 * https://leetcode.com/problems/two-city-scheduling/description/
 *
 * algorithms
 * Easy (55.63%)
 * Likes:    903
 * Dislikes: 122
 * Total Accepted:    43.3K
 * Total Submissions: 77.7K
 * Testcase Example:  '[[10,20],[30,200],[400,50],[30,20]]'
 *
 * There are 2N people a company is planning to interview. The cost of flying
 * the i-th person to city A is costs[i][0], and the cost of flying the i-th
 * person to city B is costs[i][1].
 * 
 * Return the minimum cost to fly every person to a city such that exactly N
 * people arrive in each city.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [[10,20],[30,200],[400,50],[30,20]]
 * Output: 110
 * Explanation: 
 * The first person goes to city A for a cost of 10.
 * The second person goes to city A for a cost of 30.
 * The third person goes to city B for a cost of 50.
 * The fourth person goes to city B for a cost of 20.
 * 
 * The total minimum cost is 10 + 30 + 50 + 20 = 110 to have half the people
 * interviewing in each city.
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= costs.length <= 100
 * It is guaranteed that costs.length is even.
 * 1 <= costs[i][0], costs[i][1] <= 1000
 * 
 */

// @lc code=start
class Solution {
public:
    int twoCitySchedCost1(std::vector<std::vector<int>>& costs) {
        int res{0};
        std::sort(costs.begin(), costs.end(), [](std::vector<int> &a, std::vector<int> &b) {
            return (a[0]-a[1]) < (b[0]-b[1]);
        });
        for (int i = 0; i < costs.size()/2; ++i) {
            res += costs[i][0];
            res += costs[i+costs.size()/2][1];
        }
        return res;
    }

    int twoCitySchedCost2(std::vector<std::vector<int>>& costs) {
        int len = costs.size();
        int res{0};
        std::nth_element(costs.begin(), costs.begin() + len/2, costs.end(), [](std::vector<int> &a, std::vector<int> &b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        });
        for (int i = 0; i < len/2; ++i) {
            res += costs[i][0];
            res += costs[i + len/2][1];
        }
        return res;
    }
    int twoCitySchedCost(std::vector<std::vector<int>>& costs) {
        int len = costs.size();
        int ans{0};
        int i = 0;
        std::vector<std::pair<int, int>> vec{};
        for (i = 0; i < len; ++i) {
            vec.push_back(std::make_pair(costs[i][0]-costs[i][1], i));
        }
        std::sort(vec.begin(), vec.end());
        for (i = 0; i < len/2; ++i) {
            ans += costs[vec[i].second][0];
            ans += costs[vec[i+len/2].second][1];
        }
        return ans;
    }
};
// @lc code=end
