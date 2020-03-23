/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 *
 * https://leetcode.com/problems/reverse-bits/description/
 *
 * algorithms
 * Easy (33.72%)
 * Likes:    830
 * Dislikes: 310
 * Total Accepted:    228.1K
 * Total Submissions: 644.6K
 * Testcase Example:  '00000010100101000001111010011100'
 *
 * Reverse bits of a given 32 bits unsigned integer.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: 00000010100101000001111010011100
 * Output: 00111001011110000010100101000000
 * Explanation: The input binary string 00000010100101000001111010011100
 * represents the unsigned integer 43261596, so return 964176192 which its
 * binary representation is 00111001011110000010100101000000.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 11111111111111111111111111111101
 * Output: 10111111111111111111111111111111
 * Explanation: The input binary string 11111111111111111111111111111101
 * represents the unsigned integer 4294967293, so return 3221225471 which its
 * binary representation is 10111111111111111111111111111111.
 * 
 * 
 * 
 * Note:
 * 
 * 
 * Note that in some languages such as Java, there is no unsigned integer type.
 * In this case, both input and output will be given as signed integer type and
 * should not affect your implementation, as the internal binary representation
 * of the integer is the same whether it is signed or unsigned.
 * In Java, the compiler represents the signed integers using 2's complement
 * notation. Therefore, in Example 2 above the input represents the signed
 * integer -3 and the output represents the signed integer -1073741825.
 * 
 * 
 * 
 * 
 * Follow up:
 * 
 * If this function is called many times, how would you optimize it?
 * 
 */

// @lc code=start
class Solution {
public:
    std::uint32_t reverseBits1(std::uint32_t n) {
        std::uint32_t result = n&1;
        for (int i = 1; i < 32; i++) {
            //printf("%d", (n>>i)&1);
            result = result * 2 + ((n>>i)&1);
        }
        //printf("\n");
        return result;
    }

    std::uint32_t reverseBits(std::uint32_t n) {
        std::bitset<32> n_bits{n};
        std::bitset<32> result_bits;
        for (auto i = 0; i < 32; ++i) {
            //std::swap(n_bits[i], n_bits[31-i]);
            result_bits.set(i,n_bits[31-i]);
        }
        std::uint32_t result = result_bits.to_ulong();
        return result;
    }
};
// @lc code=end
