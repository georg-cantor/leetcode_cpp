/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 *
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (51.86%)
 * Likes:    1349
 * Dislikes: 537
 * Total Accepted:    356.5K
 * Total Submissions: 675.6K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers that is already sorted in ascending order, find
 * two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they
 * add up to the target, where index1 must be less than index2.
 * 
 * Note:
 * 
 * 
 * Your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution and you may
 * not use the same element twice.
 * 
 * 
 * Example:
 * 
 * 
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
 * 
 */

// @lc code=start
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        std::vector<int> result{};
        while(true) {
            if (target==numbers[left] + numbers[right]) {
                result.push_back(left + 1);
                result.push_back(right + 1);
                return result;
            } else if (target > numbers[left] + numbers[right]) {
                left++;
            } else {
                right--;
            }
        }
    }
};
// @lc code=end
