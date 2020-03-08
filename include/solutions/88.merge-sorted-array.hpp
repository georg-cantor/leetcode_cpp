/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 *
 * https://leetcode.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (37.40%)
 * Likes:    1710
 * Dislikes: 3619
 * Total Accepted:    498.9K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as
 * one sorted array.
 * 
 * Note:
 * 
 * 
 * The number of elements initialized in nums1 and nums2 are m and n
 * respectively.
 * You may assume that nums1 has enough space (size that is greater or equal to
 * m + n) to hold additional elements from nums2.
 * 
 * 
 * Example:
 * 
 * 
 * Input:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 
 * Output: [1,2,2,3,5,6]
 * 
 */

// @lc code=start
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        if (n==0) return;
        int first = m-1;
        int second = n-1;
        int last = m+n-1;
        while (last >=0) {
            if (first < 0 || second < 0) {
              nums1[last--] = (second < 0) ? nums1[first--] : nums2[second--];
            }
            else {
              nums1[last--] = (nums1[first] > nums2[second]) ? nums1[first--] : nums2[second--];
            }
        }
    }
};
// @lc code=end
