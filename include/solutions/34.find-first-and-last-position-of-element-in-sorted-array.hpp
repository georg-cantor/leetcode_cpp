/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 *
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 *
 * algorithms
 * Medium (35.08%)
 * Likes:    2831
 * Dislikes: 127
 * Total Accepted:    446.1K
 * Total Submissions: 1.3M
 * Testcase Example:  '[5,7,7,8,8,10]\n8'
 *
 * Given an array of integers nums sorted in ascending order, find the starting
 * and ending position of a given target value.
 * 
 * Your algorithm's runtime complexity must be in the order of O(log n).
 * 
 * If the target is not found in the array, return [-1, -1].
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [5,7,7,8,8,10], target = 6
 * Output: [-1,-1]
 * 
 */

// @lc code=start
#include <iterator>
class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        std::vector<int> res{-1, -1};
        auto lower = binary_find(nums.begin(), nums.end(), target);
        if(lower != nums.cend()) {
            res[0] = std::distance(nums.begin(), lower);
            auto upper = std::upper_bound(lower, nums.end(), target);
            if (upper != nums.cend()) {
                res[1] = (std::distance(nums.begin(), upper) - 1);
            } else {
                res[1] = nums.size()-1;
            }
        }
        return res;
    }

    template<class ForwardIt, class T, class Compare=std::less<>>
    ForwardIt binary_find(ForwardIt first, ForwardIt last, const T& value, Compare comp={})
    {
        // Note: BOTH type T and the type after ForwardIt is dereferenced
        // must be implicitly convertible to BOTH Type1 and Type2, used in Compare.
        // This is stricter than lower_bound requirement (see above)

        first = std::lower_bound(first, last, value, comp);
        return first != last && !comp(value, *first) ? first : last;
    }
};
// @lc code=end
