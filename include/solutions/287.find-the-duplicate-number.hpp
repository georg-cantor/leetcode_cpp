/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 *
 * https://leetcode.com/problems/find-the-duplicate-number/description/
 *
 * algorithms
 * Medium (52.64%)
 * Likes:    4439
 * Dislikes: 548
 * Total Accepted:    317.9K
 * Total Submissions: 586.3K
 * Testcase Example:  '[1,3,4,2,2]'
 *
 * Given an array nums containing n + 1 integers where each integer is between
 * 1 and n (inclusive), prove that at least one duplicate number must exist.
 * Assume that there is only one duplicate number, find the duplicate one.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,3,4,2,2]
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [3,1,3,4,2]
 * Output: 3
 * 
 * Note:
 * 
 * 
 * You must not modify the array (assume the array is read only).
 * You must use only constant, O(1) extra space.
 * Your runtime complexity should be less than O(n^2).
 * There is only one duplicate number in the array, but it could be repeated
 * more than once.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findDuplicate1(std::vector<int>& nums) {
        int len = nums.size();
        std::sort(nums.begin(), nums.end());
        int lo = 0;
        int hi = len - 1;
        int mid;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if ((mid-1>=0 && nums[mid] == nums[mid-1]) || (mid+1<len && nums[mid] == nums[mid+1])) {
                break;
            } else if (nums[mid] > mid) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return nums[mid];
    }

    int findDuplicate(std::vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) {
                break;
            }
        }
        fast = 0;
        while (fast != slow) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }

};
// @lc code=end
