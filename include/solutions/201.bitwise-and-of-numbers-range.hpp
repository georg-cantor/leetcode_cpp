/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 *
 * https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
 *
 * algorithms
 * Medium (36.80%)
 * Likes:    691
 * Dislikes: 95
 * Total Accepted:    110.3K
 * Total Submissions: 293.8K
 * Testcase Example:  '5\n7'
 *
 * Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND
 * of all numbers in this range, inclusive.
 * 
 * Example 1:
 * 
 * 
 * Input: [5,7]
 * Output: 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [0,1]
 * Output: 0
 */

/***
 * # Starting from the most significant bit that is set in
 * # n, compare each bit in n to the equivalent bit in m.
 * # If both bits are the same, set the same bit
 * # in the result to its value in m and n.
 * # Stop when a bit is set differently in m and n.
 * # When any bit is different, all less significant bits # must take on both values of 0 and 1 in the range.
 * # Time - O(log n) # Space - O(1)
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd1(int m, int n) {
        if (m == 0) return 0;
        int res{0};
        int bit = (int) std::log(n);
        while (bit >= 0 && ((m & (1 << bit)) == (n & (1 << bit)))) {
            if (m & (1 << bit)) {
                res += std::pow(2, bit);
            }
            bit--;
        }
        return res;
    }

    int rangeBitwiseAnd(int m, int n) {
        int offset = 0;
        for (; m != n; ++offset) {
            m >>= 1;
            n >>= 1;
        }
        return n << offset;
    }
};
// @lc code=end
