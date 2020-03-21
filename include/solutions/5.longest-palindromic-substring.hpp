/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (28.31%)
 * Likes:    5720
 * Dislikes: 478
 * Total Accepted:    826.3K
 * Total Submissions: 2.9M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * 
 */

// @lc code=start
class Solution {
public:

    Solution(): table(1000,std::vector<bool>(1000, false)) {}

    std::string longestPalindrome(std::string s) {
        /* This is manacher's algorithms
         * https://oi-wiki.org/string/manacher/ */
        int n = s.size();
        if (n == 0 || n == 1) return s;
        int start = 0, total = 1;
        int N = 2*n + 1;
        int maxIdx{0};
        int maxRadius{0};
        std::vector<int> P(N, 1);
        std::string s2(N, '#');
        for (int i = 0; i<n; ++i)
            s2[i * 2 + 1] = s[i];

        for (int i = 0, l = 0, r = -1; i<N; ++i) {
            int k = (i > r) ? 1 : std::min(P[l+r-i], r-i);
            while (0 <= i-k && i+k < N && s2[i-k] == s2[i+k]) {
                k++;
            }
            P[i] = k--;
            if (i+k > r) {
                l = i-k;
                r = i+k;
            }
            if (P[i] > maxRadius) {
                maxIdx = i;
                maxRadius = P[i];
            }

        }
        start = (maxIdx - P[maxIdx] + 1) / 2;
        total = P[maxIdx] - 1;
        return s.substr(start, total);
    }

    std::string longestPalindrome4(std::string s) {
        /* This is another implementation of manacher's algorithm
         * https://oi-wiki.org/string/manacher/ */
        int n = s.size();
        if (n == 0 || n == 1) return s;
        int start = 0;
        int end = 0;
        std::vector<int> d1(n);
        std::vector<int> d2(n);
        int l1=0, l2 = 0, r1 = -1, r2 = -1;
        for (int i = 0; i < n; i++) {
            {
                int k = (i > r1) ? 1 : min(d1[l1+r1-i], r1-i);
                while (0 <= i-k && i+k < n && s[i-k] == s[i+k]) {
                    k++;
                }
                d1[i] = k--;
                if ((d1[i] * 2 - 1) > (end - start + 1)) {
                    start = i+1-d1[i];
                    end = i-1+d1[i];
                }
                if (i+k > r1) {
                    l1 = i-k;
                    r1 = i+k;
                }
            }
            {
                int k = (i > r2) ? 0 : min(d2[l2+r2-i+1], r2-i+1);
                while (0 <= i-k-1 && i+k < n && s[i-k-1] == s[i+k]) {
                    k++;
                }
                d2[i] = k--;
                if (2*d2[i] > (end - start + 1)) {
                    start = i-d2[i];
                    end = i+d2[i]-1;
                }
                if (i+k > r2) {
                    l2 = i-k-1;
                    r2 = i+k;
                }
            }
        }
        return s.substr(start, end-start+1);
    }

    std::string longestPalindrome3(std::string s) {
        /* 朴素算法
         * https://oi-wiki.org/string/manacher/ */
        int n = s.size();
        if (n == 0 || n == 1) return s;
        int start = 0;
        int end = 0;
        std::vector<int> d1(n);
        std::vector<int> d2(n);
        for (int i = 0; i < n; i++) {
            d1[i] = 1;
            while (0 <= i-d1[i] && i+d1[i] < n && s[i-d1[i]] == s[i+d1[i]]) {
                d1[i]++;
            }
            if ((d1[i] * 2 - 1) > (end - start + 1)) {
                start = i+1-d1[i];
                end = i-1+d1[i];
            }

            d2[i] = 0;
            while (0 <= i-d2[i]-1 && i+d2[i] < n && s[i-d2[i]-1] == s[i+d2[i]]) {
                d2[i]++;
            }
            if (2*d2[i] > (end - start + 1)) {
                start = i-d2[i];
                end = i+d2[i]-1;
            }
        }
        return s.substr(start, end-start+1);
    }

    std::string longestPalindrome2(std::string s) {
        /* 动态规划 */
        int len = s.size();
        if (len == 0 || len ==1) return s;
        int start = 0;
        int end = 0;
        for (int i = 0; i < len; i++) {
            table[i][i] = true;
            if ((i+1) < len) {
                table[i][i+1] = (s[i] == s[i+1]) ? true : false;
                if (table[i][i+1]) {
                    start = i;
                    end = i+1;
                }
            }
        }
        for (int total = 3; total <= len; total++) {
            for (int i = 0; i < len-total+1; i++) {
                int j = i+(total-1);
                table[i][j] = (table[i+1][j-1] && (s[i] == s[j]));
                if (table[i][j]) {
                    start = i;
                    end = j;
                }
            }
        }
        return s.substr(start, end-start+1);
    }
    std::string longestPalindrome1(std::string s) {
        /* brute force */
        int len = s.size();
        if (len == 0 || len ==1) return s;
        for (int total = len; total > 0; total--) {
            for (int i = 0; i < len; i++) {
                int j = i + (total-1);
                if (j >= len) break;
                else if (isPalindrome(s.substr(i, total))) {
                    return s.substr(i, total);
                }
            }
        }
        return s.substr(0,1);
    }
    bool isPalindrome(std::string s) {
        if (s.size() == 0) return true;
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            if (s.at(i) != s.at(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
private:
    std::vector<std::vector<bool>> table;
    int min(int a, int b) {
        return (a < b) ? a : b;
    }
};
// @lc code=end
