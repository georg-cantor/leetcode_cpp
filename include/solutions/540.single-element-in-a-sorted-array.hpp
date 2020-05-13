/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 *
 * https://leetcode.com/problems/single-element-in-a-sorted-array/description/
 *
 * algorithms
 * Medium (57.67%)
 * Likes:    1450
 * Dislikes: 77
 * Total Accepted:    128.5K
 * Total Submissions: 221.4K
 * Testcase Example:  '[1,1,2,3,3,4,4,8,8]'
 *
 * You are given a sorted array consisting of only integers where every element
 * appears exactly twice, except for one element which appears exactly once.
 * Find this single element that appears only once.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [1,1,2,3,3,4,4,8,8]
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [3,3,7,7,10,11,11]
 * Output: 10
 * 
 * 
 * 
 * 
 * Note: Your solution should run in O(log n) time and O(1) space.
 * 
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int len = nums.size();
        int lo = 0;
        int hi = len-1;
        int mid = lo + (hi - lo) / 2;
        while (lo < hi) {
            if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
                break;
            } else if (nums[mid] == nums[mid-1]) {
                if ((hi - mid) % 2 == 0){
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            } else if (nums[mid] == nums[mid+1]) {
                if ((hi - mid + 1) % 2 == 0) {
                    hi = mid - 1;
                } else {
                    lo = mid;
                }
            }
            mid = lo + (hi - lo) / 2;
        }
        return nums[mid];
    }
};
// @lc code=end
