/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
 *
 * algorithms
 * Easy (42.50%)
 * Likes:    2121
 * Dislikes: 4486
 * Total Accepted:    832.3K
 * Total Submissions: 1.9M
 * Testcase Example:  '[1,1,2]'
 *
 * Given a sorted array nums, remove the duplicates in-place such that each
 * element appear only once and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying
 * the input array in-place with O(1) extra memory.
 * 
 * Example 1:
 * 
 * 
 * Given nums = [1,1,2],
 * 
 * Your function should return length = 2, with the first two elements of nums
 * being 1 and 2 respectively.
 * 
 * It doesn't matter what you leave beyond the returned length.
 * 
 * Example 2:
 * 
 * 
 * Given nums = [0,0,1,1,1,2,2,3,3,4],
 * 
 * Your function should return length = 5, with the first five elements of nums
 * being modified to 0, 1, 2, 3, and 4 respectively.
 * 
 * It doesn't matter what values are set beyond the returned length.
 * 
 * 
 * Clarification:
 * 
 * Confused why the returned value is an integer but your answer is an array?
 * 
 * Note that the input array is passed in by reference, which means
 * modification to the input array will be known to the caller as well.
 * 
 * Internally you can think of this:
 * 
 * 
 * // nums is passed in by reference. (i.e., without making a copy)
 * int len = removeDuplicates(nums);
 * 
 * // any modification to nums in your function would be known by the caller.
 * // using the length returned by your function, it prints the first len
 * elements.
 * for (int i = 0; i < len; i++) {
 * print(nums[i]);
 * }
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates1(std::vector<int>& nums) {
        int len = nums.size();
        if (len == 0) {
          traceArr.resize(0);
          return 0;
        }
        int first = 0;
        int last = first+1;
        while (last < len) {
          if (nums[last]==nums[first]) {
            last++;
          } else {
            nums[++first] = nums[last++];
          }
        }
        traceArr.resize(first+1);
        for (int i = 0; i < first+1; i++) {
            traceArr[i] = nums[i];
        }
        return first+1;
    }
    std::vector<int> getResult() {
        return traceArr;
    }

    int removeDuplicates(std::vector<int>& nums) {
        int len = nums.size();
        if (len <= 1) return len;
        int current_pos = 1;
        int current_val = nums[0];
        for (int i = 1; i < len; ++i) {
            if (nums[i] != current_val) {
                current_val = nums[i];
                nums[current_pos] = current_val;
                current_pos++;
            }
        }
        return current_pos;
    }
 private:
    std::vector<int> traceArr;
};
// @lc code=end
