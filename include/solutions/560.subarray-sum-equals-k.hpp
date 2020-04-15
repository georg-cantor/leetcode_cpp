/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 *
 * https://leetcode.com/problems/subarray-sum-equals-k/description/
 *
 * algorithms
 * Medium (43.45%)
 * Likes:    3634
 * Dislikes: 117
 * Total Accepted:    219.6K
 * Total Submissions: 504.6K
 * Testcase Example:  '[1,1,1]\n2'
 *
 * Given an array of integers and an integer k, you need to find the total
 * number of continuous subarrays whose sum equals to k.
 * 
 * Example 1:
 * 
 * Input:nums = [1,1,1], k = 2
 * Output: 2
 * 
 * 
 * 
 * Note:
 * 
 * The length of the array is in range [1, 20,000].
 * The range of numbers in the array is [-1000, 1000] and the range of the
 * integer k is [-1e7, 1e7].
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> u_map{};
        u_map[0] = 1;
        int acc = 0;
        int res{0};
        for (auto num: nums) {
            acc += num;
            /*
            if (acc == k) {
                res++;
            }
             */
            if (u_map.count(acc-k)) {
                res += u_map[acc-k];
            }
            u_map[acc]++;
            //u_map.insert_or_assign(acc, u_map.count(acc) ? u_map[acc]+1 : 1);
        }
        return res;
    }
};
auto gucciGang = []() {std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);return 0;}();
// @lc code=end
