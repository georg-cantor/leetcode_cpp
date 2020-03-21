/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 *
 * https://leetcode.com/problems/reverse-string/description/
 *
 * algorithms
 * Easy (64.69%)
 * Likes:    1141
 * Dislikes: 640
 * Total Accepted:    619.4K
 * Total Submissions: 940.2K
 * Testcase Example:  '["h","e","l","l","o"]'
 *
 * Write a function that reverses a string. The input string is given as an
 * array of characters char[].
 * 
 * Do not allocate extra space for another array, you must do this by modifying
 * the input array in-place with O(1) extra memory.
 * 
 * You may assume all the characters consist of printable ascii
 * characters.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: ["h","e","l","l","o"]
 * Output: ["o","l","l","e","h"]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["H","a","n","n","a","h"]
 * Output: ["h","a","n","n","a","H"]
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int len = s.size();
        if (len <= 1) return;
        int first = 0, last = len-1;
        while (first <= last) {
            std::swap(s[first], s[last]);
            first++;
            last--;
        }
    }
    void printString(std::vector<char>& s) {
        for (auto ch : s) {
            printf("%c", ch);
        }
        printf("\n");
    }
};
// @lc code=end
