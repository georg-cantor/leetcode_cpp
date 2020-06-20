/*
 * @lc app=leetcode id=1044 lang=cpp
 *
 * [1044] Longest Duplicate Substring
 *
 * https://leetcode.com/problems/longest-duplicate-substring/description/
 *
 * algorithms
 * Hard (25.20%)
 * Likes:    475
 * Dislikes: 194
 * Total Accepted:    22.8K
 * Total Submissions: 72.5K
 * Testcase Example:  '"banana"'
 *
 * Given a string S, consider all duplicated substrings: (contiguous)
 * substrings of S that occur 2 or more times.  (The occurrences may overlap.)
 * 
 * Return any duplicated substring that has the longest possible length.  (If S
 * does not have a duplicated substring, the answer is "".)
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: "banana"
 * Output: "ana"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "abcd"
 * Output: ""
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 2 <= S.length <= 10^5
 * S consists of lowercase English letters.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::string longestDupSubstring(std::string S) {
        int len = S.size();
        int left = 1;
        int right = len;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (search(mid, S, len) != -1) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        int start = search(left-1, S, len);
        return S.substr(start, left-1);
    }

private:
    int search(int len, std::string s, int n) {
        long modulus = (long) std::pow(2, 34);
        long value = 0;
        std::unordered_set<long> uSet;
        for (int i = 0; i < len; ++i) {
            value = (value * 26 + s[i] - 'a') % modulus;
        }
        uSet.insert(value);

        long aL = 1;
        for (int i = 0; i < len; ++i) {
            aL = (aL *26) % modulus;
        }

        for (int i = 1; i <= n-len; ++i) {
            value = (value * 26 - (s[i-1] - 'a') * aL + modulus + s[i+len-1] - 'a') % modulus;
            if (uSet.count(value)) {
                return i;
            } else {
                uSet.insert(value);
            }
        }
        return -1;
    }
};
// @lc code=end
