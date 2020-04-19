/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 *
 * https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
 *
 * algorithms
 * Medium (43.86%)
 * Likes:    1755
 * Dislikes: 216
 * Total Accepted:    398K
 * Total Submissions: 897.1K
 * Testcase Example:  '[3,4,5,1,2]'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
 * 
 * Find the minimum element.
 * 
 * You may assume no duplicate exists in the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,4,5,1,2] 
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,5,6,7,0,1,2]
 * Output: 0
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findMin1(std::vector<int>& nums) {
        int len = nums.size();
        if (len == 1) return nums[0];
        int lo = 0;
        int hi = len - 1;
        if (nums[lo] < nums[hi]) {
            return nums[lo];
        }
        int mid;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (nums[mid] > nums[lo]) {
                lo = mid;
            } else if (nums[mid] < nums[lo]){
                hi = mid;
            } else {
                return std::min(nums[lo], nums[hi]);
            }
        }
        return nums[mid];
    }
    int findMin(std::vector<int>& nums) {
        int lo = 0, hi = nums.size()-1;
        while (lo < hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] < nums[hi]) {
                hi = mid;
            } else {
                lo = mid+1;
            }
        }
        return nums[lo];
    }
};
// @lc code=end
