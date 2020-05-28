/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 *
 * https://leetcode.com/problems/counting-bits/description/
 *
 * algorithms
 * Medium (66.82%)
 * Likes:    2400
 * Dislikes: 150
 * Total Accepted:    251.8K
 * Total Submissions: 370.1K
 * Testcase Example:  '2'
 *
 * Given a non negative integer number num. For every numbers i in the range 0
 * ≤ i ≤ num calculate the number of 1's in their binary representation and
 * return them as an array.
 * 
 * Example 1:
 * 
 * 
 * Input: 2
 * Output: [0,1,1]
 * 
 * Example 2:
 * 
 * 
 * Input: 5
 * Output: [0,1,1,2,1,2]
 * 
 * 
 * Follow up:
 * 
 * 
 * It is very easy to come up with a solution with run time
 * O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a
 * single pass?
 * Space complexity should be O(n).
 * Can you do it like a boss? Do it without using any builtin function like
 * __builtin_popcount in c++ or in any other language.
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> countBits(int num) {
        std::vector<int> res(num+1, 0);
        for (int i = 1; i <= num; ++i) {
            if (i % 2 == 0) {
                res[i] = res[i/2];
            } else {
                res[i] = res[i/2] + 1;
            }
        }
        return res;
    }
};
// @lc code=end
