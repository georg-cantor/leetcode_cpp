/*
 * @lc app=leetcode id=697 lang=cpp
 *
 * [697] Degree of an Array
 *
 * https://leetcode.com/problems/degree-of-an-array/description/
 *
 * algorithms
 * Easy (52.09%)
 * Likes:    755
 * Dislikes: 681
 * Total Accepted:    74.7K
 * Total Submissions: 140.6K
 * Testcase Example:  '[1,2,2,3,1]'
 *
 * Given a non-empty array of non-negative integers nums, the degree of this
 * array is defined as the maximum frequency of any one of its elements.
 * Your task is to find the smallest possible length of a (contiguous) subarray
 * of nums, that has the same degree as nums.
 * 
 * Example 1:
 * 
 * Input: [1, 2, 2, 3, 1]
 * Output: 2
 * Explanation: 
 * The input array has a degree of 2 because both elements 1 and 2 appear
 * twice.
 * Of the subarrays that have the same degree:
 * [1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
 * The shortest length is 2. So return 2.
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: [1,2,2,3,1,4,2]
 * Output: 6
 * 
 * 
 * 
 * Note:
 * nums.length will be between 1 and 50,000.
 * nums[i] will be an integer between 0 and 49,999.
 * 
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(std::vector<int>& nums) {
        std::map<int, int> mapCnt{};
        for (auto num: nums) {
            mapCnt.insert_or_assign(num, mapCnt.count(num) ? (mapCnt[num]+1) : 1);
        }

        std::vector<std::pair<int,int> > arr;
        for (std::map<int,int>::iterator it=mapCnt.begin(); it!=mapCnt.end(); ++it) {
            arr.push_back(std::make_pair(it->first, it->second));
        }
        std::sort(arr.begin(), arr.end(), [](const std::pair<int,int> &p1,const std::pair<int,int> &p2) {
            return p1.second < p2.second;
        });
        std::vector<int> maxCntEle{};

        maxCntEle.push_back(arr[arr.size()-1].first);
        int maxCnt = arr[arr.size()-1].second;
        for (int i = arr.size()-2; i >= 0; --i) {
            if (arr[i].second == maxCnt) {
                maxCntEle.push_back(arr[i].first);
            } else {
                break;
            }
        }
        int res{std::numeric_limits<int>::max()};
        for (auto ele: maxCntEle) {
            int diff = maxIdxDiff(nums, ele);
            if (diff < res) {
                res = diff;
            }
        }
        return res;
    }

    int maxIdxDiff(std::vector<int>& a, int x) {
        int first = -1;
        int last = -1;
        int res{0};
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == x) {
                first = i;
                break;
            }
        }
        for (int i = a.size()-1; i >=0; --i) {
            if (a[i] == x) {
                last = i;
                break;
            }
        }
        if (first != -1) {
            res = last - first + 1;
        }
        return res;
    }
};
// @lc code=end
