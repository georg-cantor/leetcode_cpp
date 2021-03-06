/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (50.96%)
 * Likes:    2350
 * Dislikes: 62
 * Total Accepted:    526.1K
 * Total Submissions: 1M
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the level order traversal of its nodes' values.
 * (ie, from left to right, level by level).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its level order traversal as:
 * 
 * [
 * ⁠ [3],
 * ⁠ [9,20],
 * ⁠ [15,7]
 * ]
 * 
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> nodes;
        insertNode(nodes, root, 0);
        return nodes;
    }
private:
    void insertNode(std::vector<std::vector<int>>& nodes, TreeNode* node, int level) {
        if (node == nullptr) return;
        if (nodes.size() <= level) {
            std::vector<int> a{};
            nodes.push_back(a);
        }
        nodes[level].push_back(node->val);
        if (node->left != nullptr) {
            insertNode(nodes, node->left, level+1);
        }
        if (node->right != nullptr) {
            insertNode(nodes, node->right, level+1);
        }
    }
};
// @lc code=end
