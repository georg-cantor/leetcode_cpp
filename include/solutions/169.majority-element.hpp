/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 *
 * https://leetcode.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (54.85%)
 * Likes:    2555
 * Dislikes: 206
 * Total Accepted:    521.2K
 * Total Submissions: 929.1K
 * Testcase Example:  '[3,2,3]'
 *
 * Given an array of size n, find the majority element. The majority element is
 * the element that appears more than ⌊ n/2 ⌋ times.
 * 
 * You may assume that the array is non-empty and the majority element always
 * exist in the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,2,3]
 * Output: 3
 * 
 * Example 2:
 * 
 * 
 * Input: [2,2,1,1,1,2,2]
 * Output: 2
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int majorityElement1(std::vector<int>& nums) {
        int len = nums.size();
        std::unordered_map<int, int> freq;
        for (auto num : nums) {
            freq.insert_or_assign(num, freq.find(num) != freq.end() ? freq[num]+1 : 1);
            if (freq[num] > len/2) {
                return num;
            }
        }
        return nums[0];
    }
    int majorityElement(std::vector<int>& nums) {
        int len = nums.size();
        int count = 1, majority = nums[0];
        for (int i = 1; i < len; i++) {
            if (count == 0) majority = nums[i];
            if (nums[i] == majority) count++;
            else count--;
        }
        return majority;
    }
};
// @lc code=end
