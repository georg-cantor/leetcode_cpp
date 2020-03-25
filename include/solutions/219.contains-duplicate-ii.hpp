/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 *
 * https://leetcode.com/problems/contains-duplicate-ii/description/
 *
 * algorithms
 * Easy (36.32%)
 * Likes:    715
 * Dislikes: 876
 * Total Accepted:    247K
 * Total Submissions: 669.6K
 * Testcase Example:  '[1,2,3,1]\n3'
 *
 * Given an array of integers and an integer k, find out whether there are two
 * distinct indices i and j in the array such that nums[i] = nums[j] and the
 * absolute difference between i and j is at most k.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [1,2,3,1], k = 3
 * Output: true
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [1,0,1,1], k = 1
 * Output: true
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [1,2,3,1,2,3], k = 2
 * Output: false
 * 
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate1(std::vector<int>& nums, int k) {
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i+1; j < len; ++j) {
                if (nums[i] == nums[j]) {
                    if (std::abs(i-j) <= k) return true;
                    break;
                }
            }
        }
        return false;
    }
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int len = nums.size();
        std::unordered_map<int, int> m{};
        for (int i = 0; i < len; ++i) {
            auto it = m.find(nums[i]);
            if (it != m.end() && std::abs(i-m[nums[i]]) <= k) {
                return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end
