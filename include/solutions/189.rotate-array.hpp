/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 *
 * https://leetcode.com/problems/rotate-array/description/
 *
 * algorithms
 * Easy (33.02%)
 * Likes:    2356
 * Dislikes: 765
 * Total Accepted:    438.4K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,2,3,4,5,6,7]\n3'
 *
 * Given an array, rotate the array to the right by k steps, where k is
 * non-negative.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,4,5,6,7] and k = 3
 * Output: [5,6,7,1,2,3,4]
 * Explanation:
 * rotate 1 steps to the right: [7,1,2,3,4,5,6]
 * rotate 2 steps to the right: [6,7,1,2,3,4,5]
 * rotate 3 steps to the right: [5,6,7,1,2,3,4]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [-1,-100,3,99] and k = 2
 * Output: [3,99,-1,-100]
 * Explanation: 
 * rotate 1 steps to the right: [99,-1,-100,3]
 * rotate 2 steps to the right: [3,99,-1,-100]
 * 
 * 
 * Note:
 * 
 * 
 * Try to come up as many solutions as you can, there are at least 3 different
 * ways to solve this problem.
 * Could you do it in-place with O(1) extra space?
 * 
 */

// @lc code=start
class Solution {
public:
    void rotate1(std::vector<int>& nums, int k) {
        int len = nums.size();
        if (len <= 1) return;
        k = k % len;
        std::vector<int> dup{nums};
        for (int i = 0; i < len; ++i) {
            nums[i] = dup[(len-k+i) % len];
        }
    }
    void rotate(std::vector<int>& nums, int k) {
        k %= nums.size();
        /*
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin()+k);
        std::reverse(nums.begin()+k, nums.end());
         */
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
private:
    template<class BidirIt>
    void reverse(BidirIt first, BidirIt last)
    {
        while ((first != last) && (first != --last)) {
            std::iter_swap(first++, last);
        }
    }
};
// @lc code=end
