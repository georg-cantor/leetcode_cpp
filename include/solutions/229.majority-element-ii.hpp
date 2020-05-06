/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 *
 * https://leetcode.com/problems/majority-element-ii/description/
 *
 * algorithms
 * Medium (34.20%)
 * Likes:    1384
 * Dislikes: 158
 * Total Accepted:    133.1K
 * Total Submissions: 383.6K
 * Testcase Example:  '[3,2,3]'
 *
 * Given an integer array of size n, find all elements that appear more than ⌊
 * n/3 ⌋ times.
 * 
 * Note: The algorithm should run in linear time and in O(1) space.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,2,3]
 * Output: [3]
 * 
 * Example 2:
 * 
 * 
 * Input: [1,1,1,3,3,2,2,2]
 * Output: [1,2]
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        std::vector<int> res;
        int len = nums.size();
        if (len <= 1) return nums;
        bool first_second = false;
        int first = 0;
        int second = 1;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < len; ++i) {
            if (nums[i] == first) {
                count1++;
            } else if (nums[i] == second) {
                count2++;
            } else if (count1 == 0) {
                first = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                second = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        int num_first = std::count(nums.begin(), nums.end(), first);
        int num_second = std::count(nums.begin(), nums.end(), second);
        if (num_first > len / 3) res.push_back(first);
        if (num_second > len / 3) res.push_back(second);
        return res;
    }
};
// @lc code=end
