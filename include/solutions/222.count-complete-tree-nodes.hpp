/*
 * @lc app=leetcode id=222 lang=cpp
 *
 * [222] Count Complete Tree Nodes
 *
 * https://leetcode.com/problems/count-complete-tree-nodes/description/
 *
 * algorithms
 * Medium (40.86%)
 * Likes:    2051
 * Dislikes: 198
 * Total Accepted:    228.2K
 * Total Submissions: 502.3K
 * Testcase Example:  '[1,2,3,4,5,6]'
 *
 * Given a complete binary tree, count the number of nodes.
 * 
 * Note: 
 * 
 * Definition of a complete binary tree from Wikipedia:
 * In a complete binary tree every level, except possibly the last, is
 * completely filled, and all nodes in the last level are as far left as
 * possible. It can have between 1 and 2^h nodes inclusive at the last level
 * h.
 * 
 * Example:
 * 
 * 
 * Input: 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   3
 * ⁠/ \  /
 * 4  5 6
 * 
 * Output: 6
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        int level = 0;
        countLevel(root, level);
        if (level == 0) return 1;
        std::vector<TreeNode*> lastLevel{};
        int subLevel = level;
        //printf("%d, %d\n",level, subLevel);
        generateLastLevel(root, subLevel, lastLevel);
        int lo = 0;
        int hi = lastLevel.size()-1;
        int mid{0};
        //printf("%d, %d, %d\n",lo, mid, hi);
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (lastLevel[mid] == nullptr) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        //printf("%d, %d, %d\n",lo, mid, hi);
        if (lastLevel[mid] == nullptr) {
            return std::pow(2, level) + mid - 1;
        } else {
            return std::pow(2, level) + mid;
        }
    }

private:
    void countLevel(TreeNode* root, int& level) {
        if (root->left != nullptr) {
            level += 1;
            countLevel(root->left, level);
        } else {
            return;
        }
    }
    void generateLastLevel(TreeNode* root, int level, std::vector<TreeNode*>& vec) {
        if (level == 1) {
            vec.push_back(root->left);
            vec.push_back(root->right);
        } else {
            level--;
            generateLastLevel(root->left, level, vec);
            generateLastLevel(root->right, level, vec);
        }
    }
};
// @lc code=end
