/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (54.88%)
 * Likes:    713
 * Dislikes: 675
 * Total Accepted:    504.9K
 * Total Submissions: 914.3K
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an array of integers, find if the array contains any duplicates.
 * 
 * Your function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,1]
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input: [1,2,3,4]
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 * 
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate1(std::vector<int>& nums) {
        std::unordered_map<int, int> u_map{};
        for (auto num: nums) {
            if (u_map.count(num)) return true;
            else {
                u_map[num]++;
            }
        }
        return false;
    }
    bool containsDuplicate2(std::vector<int>& nums) {
        return std::set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i=0; i<int(nums.size())-1; i++) {
            if (nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};
// @lc code=end
