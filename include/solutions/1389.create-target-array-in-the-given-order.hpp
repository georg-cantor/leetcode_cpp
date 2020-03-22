/*
 * @lc app=leetcode id=1389 lang=cpp
 *
 * [1389] Create Target Array in the Given Order
 *
 * https://leetcode.com/problems/create-target-array-in-the-given-order/
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
 * Output: [0,4,1,3,2]
 * Explanation:
 * nums       index     target
 * 0            0        [0]
 * 1            1        [0,1]
 * 2            2        [0,1,2]
 * 3            2        [0,1,3,2]
 * 4            1        [0,4,1,3,2]
 *
 * Constraints:

 * 1 <= nums.length, index.length <= 100
 * nums.length == index.length
 * 0 <= nums[i] <= 100
 * 0 <= index[i] <= i
 *
 */

// @lc code=start
class Solution {
public:
  std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
      int len = nums.size();
      std::vector<int> target{};
      auto it = target.begin();
      for (int i = 0; i < len; i++) {
          target.insert(it+index[i], nums[i]);
          it = target.begin();
      }
      return target;
  }
};
// @lc code=end