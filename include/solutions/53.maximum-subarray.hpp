/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 *
 * https://leetcode.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Easy (45.05%)
 * Total Accepted:    788.4K
 * Total Submissions: 1.7M
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * Given an integer array nums, find the contiguous subarray (containing at
 * least one number) which has the largest sum and return its sum.
 * 
 * Example:
 * 
 * 
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 * 
 * 
 * Follow up:
 * 
 * If you have figured out the O(n) solution, try coding another solution using
 * the divide and conquer approach, which is more subtle.
 * 
 */
//#include <vector>
//using namespace std;

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int maxSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
      for (int j = i; j < nums.size(); ++j) {
        int thisSum = 0;
        for (int k = i; k <= j; ++k) {
          thisSum += nums[k];
        }
        if (thisSum > maxSum) {
          maxSum = thisSum;
        }
      }
    }
    return maxSum;        
    }
};
