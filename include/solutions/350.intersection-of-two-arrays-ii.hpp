/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 *
 * https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
 *
 * algorithms
 * Easy (49.64%)
 * Likes:    1104
 * Dislikes: 360
 * Total Accepted:    303K
 * Total Submissions: 600.1K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2,2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [4,9]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result should appear as many times as it shows in both
 * arrays.
 * The result can be in any order.
 * 
 * 
 * Follow up:
 * 
 * 
 * What if the given array is already sorted? How would you optimize your
 * algorithm?
 * What if nums1's size is small compared to nums2's size? Which algorithm is
 * better?
 * What if elements of nums2 are stored on disk, and the memory is limited such
 * that you cannot load all elements into the memory at once?
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if (m > n) return intersect(nums2, nums1);
        std::unordered_map<int, int> u_map{};
        std::vector<int> res{};
        for (auto num: nums1) {
            u_map.insert_or_assign(num, u_map.find(num) != u_map.end() ? u_map[num]+1 : 1);
        }
        for (auto num: nums2) {
            if (u_map.count(num) && u_map[num] > 0) {
                res.push_back(num);
                --u_map[num];
            }
        }
        return res;
    }
};
// @lc code=end
