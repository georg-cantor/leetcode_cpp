/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (48.94%)
 * Likes:    1060
 * Dislikes: 192
 * Total Accepted:    281.7K
 * Total Submissions: 561.9K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the bottom-up level order traversal of its
 * nodes' values. (ie, from left to right, level by level from leaf to root).
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
 * return its bottom-up level order traversal as:
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
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
  std::vector<std::vector<int>> levelOrderBottom(TreeNode* root) {
    std::vector<std::vector<int>> nodes;
    insertNode(nodes, root, 0);
    return nodes;
  }
 private:
  void insertNode(std::vector<std::vector<int>>& nodes, TreeNode* node, int level) {
    if (node == nullptr) return;
    if (nodes.size() <= level) {
      std::vector<int> a{};
      auto it = nodes.begin();
      nodes.insert(it, a);
    }
    nodes[nodes.size()-level-1].push_back(node->val);
    if (node->left != nullptr) {
      insertNode(nodes, node->left, level+1);
    }
    if (node->right != nullptr) {
      insertNode(nodes, node->right, level+1);
    }
  }
};
// @lc code=end
