/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 *
 * https://leetcode.com/problems/intersection-of-two-arrays/description/
 *
 * algorithms
 * Easy (57.91%)
 * Likes:    652
 * Dislikes: 1068
 * Total Accepted:    316.8K
 * Total Submissions: 528K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [9,4]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result must be unique.
 * The result can be in any order.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> intersection1(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> set1(nums1.begin(), nums1.end());
        std::vector<int> intersect{};
        for (auto num: nums2) {
            auto search = set1.find(num);
            if (search != set1.end()) {
                intersect.push_back(num);
                set1.erase(search);
            }
        }
        return intersect;
    }
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if (m > n) return intersection(nums2, nums1);
        std::unordered_map<int, int> u_map{};
        std::vector<int> res{};
        for (auto num: nums1) {
            u_map.insert_or_assign(num, 1);
        }
        for (auto num: nums2) {
            auto search = u_map.find(num);
            if (search != u_map.end()) {
                res.push_back(num);
                u_map.erase(search);
            }
        }
        return res;
    }
};
// @lc code=end
