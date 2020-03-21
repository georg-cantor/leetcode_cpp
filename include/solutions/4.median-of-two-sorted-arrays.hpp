/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 *
 * https://leetcode.com/problems/median-of-two-sorted-arrays/description/
 *
 * algorithms
 * Hard (27.79%)
 * Likes:    6157
 * Dislikes: 943
 * Total Accepted:    613.4K
 * Total Submissions: 2.2M
 * Testcase Example:  '[1,3]\n[2]'
 *
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * 
 * Find the median of the two sorted arrays. The overall run time complexity
 * should be O(log (m+n)).
 * 
 * You may assume nums1 and nums2 cannot be both empty.
 * 
 * Example 1:
 * 
 * 
 * nums1 = [1, 3]
 * nums2 = [2]
 * 
 * The median is 2.0
 * 
 * 
 * Example 2:
 * 
 * 
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 * 
 * The median is (2 + 3)/2 = 2.5
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        double median{0.0};
        if (n < m) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int lo = 0, hi = m;
        while (lo <= hi) {
            int i = lo + (hi -lo) / 2;
            int j = (m+n+1) / 2 - i;

            int maxLeftA = (i == 0) ? std::numeric_limits<int>::min() : nums1[i-1];
            int minRightA = (i == m) ? std::numeric_limits<int>::max() : nums1[i];

            int maxLeftB = (j == 0) ? std::numeric_limits<int>::min() : nums2[j-1];
            int minRightB = (j == n) ? std::numeric_limits<int>::max() : nums2[j];

            if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
                if ((m+n) % 2 == 0) {
                    return (double) (std::max(maxLeftA, maxLeftB) + std::min(minRightA,  minRightB)) / 2.0;
                } else {
                    return (double) std::max(maxLeftA, maxLeftB);
                }
            } else if (maxLeftA > minRightB) {
                hi = i-1;
            } else {
                lo = i+1;
            }
        }
        return 0.0;
    }
};
// @lc code=end
