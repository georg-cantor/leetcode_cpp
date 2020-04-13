/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 *
 * https://leetcode.com/problems/contiguous-array/description/
 *
 * algorithms
 * Medium (44.11%)
 * Likes:    1242
 * Dislikes: 60
 * Total Accepted:    67.4K
 * Total Submissions: 157.3K
 * Testcase Example:  '[0,1]'
 *
 * Given a binary array, find the maximum length of a contiguous subarray with
 * equal number of 0 and 1. 
 * 
 * 
 * Example 1:
 * 
 * Input: [0,1]
 * Output: 2
 * Explanation: [0, 1] is the longest contiguous subarray with equal number of
 * 0 and 1.
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: [0,1,0]
 * Output: 2
 * Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal
 * number of 0 and 1.
 * 
 * 
 * 
 * Note:
 * The length of the given binary array will not exceed 50,000.
 * 
 */

// @lc code=start
class Solution {
public:
    int findMaxLength1(std::vector<int>& nums) {
        int len = nums.size();
        std::vector<int> tree(len+1,0);
        for(int i=1;i<=len;++i) {
            update(tree,i,nums[i-1]);
        }
        int res{0};
        for (int i = 0; i < len; ++i) {
            for (int j = i+1; j < len; j+=2) {
                if (getSum(tree, i, j+1) == (j-i+1)/2) {
                    res = std::max(res, j-i+1);
                }
            }
        }
        return res;
    }

    int findMaxLength(std::vector<int>& nums) {
        std::unordered_map<int, int> umap{};
        umap[0] = -1;
        int max_gap{0};
        int sum{0};

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i] ? 1 : -1;
            if (umap.count(sum)) {
                max_gap = std::max(i - umap[sum], max_gap);
            } else {
                umap[sum] = i;
            }
        }

        return max_gap;
    }
private:
    void update(std::vector<int>& tree,int i,int val) {
        while(i<tree.size()) {
            tree[i]+=val;
            i+=(i&(-i));
        }
    }
    int getSum(std::vector<int>& tree, int i, int j) {
        if (i > j) return 0;
        int s1{0}, s2{0};
        while(i > 0) {
            s1 += tree[i];
            i -= (i&(-i));
        }
        while (j > 0) {
            s2 += tree[j];
            j -= (j&(-j));
        }
        return s2 - s1;
    }
};
// @lc code=end
