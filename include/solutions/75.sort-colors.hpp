/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 *
 * https://leetcode.com/problems/sort-colors/description/
 *
 * algorithms
 * Medium (44.66%)
 * Likes:    3207
 * Dislikes: 215
 * Total Accepted:    491.6K
 * Total Submissions: 1.1M
 * Testcase Example:  '[2,0,2,1,1,0]'
 *
 * Given an array with n objects colored red, white or blue, sort them in-place
 * so that objects of the same color are adjacent, with the colors in the order
 * red, white and blue.
 * 
 * Here, we will use the integers 0, 1, and 2 to represent the color red,
 * white, and blue respectively.
 * 
 * Note: You are not suppose to use the library's sort function for this
 * problem.
 * 
 * Example:
 * 
 * 
 * Input: [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]
 * 
 * Follow up:
 * 
 * 
 * A rather straight forward solution is a two-pass algorithm using counting
 * sort.
 * First, iterate the array counting number of 0's, 1's, and 2's, then
 * overwrite array with total number of 0's, then 1's and followed by 2's.
 * Could you come up with a one-pass algorithm using only constant space?
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int len = nums.size();
        int left = 0;
        int right = len - 1;
        for (int i = 0; i < len; ++i) {
            if (nums[i] == 0) {
                std::swap(nums[i], nums[left++]);
            } else if (nums[i] == 2 && i < right) {
                std::swap(nums[i--], nums[right--]);
            }
        }
    }

    void sortColors1(std::vector<int>& nums) {
        std::vector<int> colors(3);
        for (auto num: nums) {
            colors[num]++;
        }
        auto it = nums.begin();
        for (int i = 0; i < 3; ++i) {
            while (colors[i]--) {
                *it++ = i;
            }
        }
    }
};
// @lc code=end
