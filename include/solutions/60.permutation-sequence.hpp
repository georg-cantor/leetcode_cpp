/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 *
 * https://leetcode.com/problems/permutation-sequence/description/
 *
 * algorithms
 * Medium (35.29%)
 * Likes:    1583
 * Dislikes: 326
 * Total Accepted:    194.9K
 * Total Submissions: 516.7K
 * Testcase Example:  '3\n3'
 *
 * The set [1,2,3,...,n] contains a total of n! unique permutations.
 * 
 * By listing and labeling all of the permutations in order, we get the
 * following sequence for n = 3:
 * 
 * 
 * "123"
 * "132"
 * "213"
 * "231"
 * "312"
 * "321"
 * 
 * 
 * Given n and k, return the k^th permutation sequence.
 * 
 * Note:
 * 
 * 
 * Given n will be between 1 and 9 inclusive.
 * Given k will be between 1 and n! inclusive.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 3, k = 3
 * Output: "213"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 4, k = 9
 * Output: "2314"
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::string getPermutation(int n, int k) {
        if (n == 1) return "1";
        k = k - 1;
        int factorial = fact(n-1);
        std::vector<char> elements{};
        for(int i = 1; i <= n; ++i) {
            elements.push_back('0'+i);
        }
        std::string res{""};
        for (int i = 0; i < n-1; ++i) {
            res.push_back(elements[k / factorial]);
            auto vi = elements.begin();
            std::advance(vi, k / factorial);
            elements.erase(vi);
            k = k % factorial;
            factorial = factorial / (n-1-i);
        }
        res.push_back(elements[0]);
        return res;
    }

private:
    int fact(int n) {
        if (n == 1) return 1;
        else {
            return n * fact(n - 1);
        }
    }
};
// @lc code=end
