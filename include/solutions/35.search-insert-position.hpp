/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 *
 * https://leetcode.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (41.47%)
 * Likes:    2227
 * Dislikes: 245
 * Total Accepted:    595.1K
 * Total Submissions: 1.4M
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * Given a sorted array and a target value, return the index if the target is
 * found. If not, return the index where it would be if it were inserted in
 * order.
 * 
 * You may assume no duplicates in the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,3,5,6], 5
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [1,3,5,6], 2
 * Output: 1
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: [1,3,5,6], 7
 * Output: 4
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: [1,3,5,6], 0
 * Output: 0
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int searchInsert1(std::vector<int>& nums, int target) {
        int len = nums.size();
        if (len == 0) return 0;
        int left = 0;
        int right = len-1;
        int mid;
        while (left + 1 <  right) {
            mid = left + (right - left) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (target > nums[mid]) {
                left = mid;
            }
            if (target < nums[mid]) {
                right = mid;
            }
        }
        //printf("left: %d, right: %d\n", left, right);
        if (target <= nums[left]) return left;
        else if (target <= nums[right]) return right;
        else return right + 1;
    }

    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while (left <= right) {
            mid = left + (right - left)/2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < target)
                left = mid + 1;
            if (nums[mid] > target)
                right = mid - 1;
        }
        return left;
    }
};
// @lc code=end
