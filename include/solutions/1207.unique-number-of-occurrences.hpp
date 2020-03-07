/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 *
 * https://leetcode.com/problems/unique-number-of-occurrences/description/
 *
 * algorithms
 * Easy (71.22%)
 * Likes:    236
 * Dislikes: 15
 * Total Accepted:    37.6K
 * Total Submissions: 52.9K
 * Testcase Example:  '[1,2,2,1,1,3]'
 *
 * Given an array of integers arr, write a function that returns true if and
 * only if the number of occurrences of each value in the array is unique.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: arr = [1,2,2,1,1,3]
 * Output: true
 * Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two
 * values have the same number of occurrences.
 * 
 * Example 2:
 * 
 * 
 * Input: arr = [1,2]
 * Output: false
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
 * Output: true
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= arr.length <= 1000
 * -1000 <= arr[i] <= 1000
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::set<int> arr_set(arr.begin(), arr.end());
        std::map<int, int> occurrenceMap;
        for (auto it = arr_set.begin(); it != arr_set.end(); ++it) {
            int num = 0;
            for (int i = 0; i < arr.size(); ++i) {
                if (*it == arr[i]) {
                    num++;
                }
            }
            const auto [it_num, success] = occurrenceMap.insert({num, *it});
            if (!success) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
