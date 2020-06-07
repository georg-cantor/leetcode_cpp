/*
 * @lc app=leetcode id=406 lang=cpp
 *
 * [406] Queue Reconstruction by Height
 *
 * https://leetcode.com/problems/queue-reconstruction-by-height/description/
 *
 * algorithms
 * Medium (62.58%)
 * Likes:    2595
 * Dislikes: 301
 * Total Accepted:    125.3K
 * Total Submissions: 194.6K
 * Testcase Example:  '[[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]'
 *
 * Suppose you have a random list of people standing in a queue. Each person is
 * described by a pair of integers (h, k), where h is the height of the person
 * and k is the number of people in front of this person who have a height
 * greater than or equal to h. Write an algorithm to reconstruct the queue.
 * 
 * Note:
 * The number of people is less than 1,100.
 * 
 * 
 * Example
 * 
 * 
 * Input:
 * [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
 * 
 * Output:
 * [[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<std::vector<int>> reconstructQueue(std::vector<std::vector<int>>& people) {
        if (people.size() < 2) return people;
        // printPeople(people);
        // sort using a custom function object
        struct {
            bool operator()(std::vector<int> a, std::vector<int> b) const
            {
                return a[0] > b[0] || ((a[0] == b[0]) && a[1] < b[1]);
            }
        } customCmp;
        std::sort(people.begin(), people.end(), customCmp);
        // printPeople(people);

        std::list<std::vector<int>> reconstructed{};
        int currentHeight = people[0][0];
        for (auto p : people) {
            if (p[0] == currentHeight) {
                reconstructed.push_back(p);
            } else {
                std::list<std::vector<int>>::iterator range_begin = reconstructed.begin();
                std::advance(range_begin, p[1]);
                reconstructed.insert(range_begin, p);
            }
        }
        // printPeople(reconstructed);
        std::vector<std::vector<int>> res(reconstructed.begin(), reconstructed.end());
        return res;
    }
private:
    void printPeople(std::vector<std::vector<int>>& people) {
        for (auto p : people) {
            std::cout << "[" << p[0] << ", " << p[1] << "]" << ", ";
        }
        std::cout << std::endl;
    }
};
// @lc code=end
