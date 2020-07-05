/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 *
 * https://leetcode.com/problems/hamming-distance/description/
 *
 * algorithms
 * Easy (71.12%)
 * Likes:    1755
 * Dislikes: 158
 * Total Accepted:    324.5K
 * Total Submissions: 450.5K
 * Testcase Example:  '1\n4'
 *
 * The Hamming distance between two integers is the number of positions at
 * which the corresponding bits are different.
 * 
 * Given two integers x and y, calculate the Hamming distance.
 * 
 * Note:
 * 0 ≤ x, y < 2^31.
 * 
 * 
 * Example:
 * 
 * Input: x = 1, y = 4
 * 
 * Output: 2
 * 
 * Explanation:
 * 1   (0 0 0 1)
 * 4   (0 1 0 0)
 * ⁠      ↑   ↑
 * 
 * The above arrows point to positions where the corresponding bits are
 * different.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned long long x1 = x;
        unsigned long long y1 = y;
        std::bitset<32> x_bit(x1);
        std::bitset<32> y_bit(y1);

        int cnt{0};

        for (int i = 0; i < 32; ++i) {
            if (x_bit[i] != y_bit[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};
// @lc code=end
