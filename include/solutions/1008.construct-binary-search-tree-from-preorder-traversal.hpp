/*
 * @lc app=leetcode id=1008 lang=cpp
 *
 * [1008] Construct Binary Search Tree from Preorder Traversal
 *
 * https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/
 *
 * algorithms
 * Medium (74.13%)
 * Likes:    698
 * Dislikes: 23
 * Total Accepted:    51.7K
 * Total Submissions: 67.9K
 * Testcase Example:  '[8,5,1,7,10,12]'
 *
 * Return the root node of a binary search tree that matches the given preorder
 * traversal.
 * 
 * (Recall that a binary search tree is a binary tree where for every node, any
 * descendant of node.left has a value < node.val, and any descendant of
 * node.right has a value > node.val.  Also recall that a preorder traversal
 * displays the value of the node first, then traverses node.left, then
 * traverses node.right.)
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [8,5,1,7,10,12]
 * Output: [8,5,10,1,7,null,12]
 * 
 * 
 * 
 * 
 * 
 * Note: 
 * 
 * 
 * 1 <= preorder.length <= 100
 * The values of preorder are distinct.
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
    TreeNode* bstFromPreorder(std::vector<int>& preorder) {
        int n = preorder.size();
        std::queue<TreeNode *> q;
        TreeNode* root = nullptr;
        for (int i = 0; i < n; ++i) {
            TreeNode* node = new TreeNode{preorder[i]};
            if (root == nullptr)
                root = node;
            else if (node->val < q.front()->val) {
                q.front()->left = node;
            } else {
                TreeNode* t;
                while (!q.empty() && q.front()->val < node->val) {
                    t = q.front();
                    q.pop();
                }
                t->right = node;
            }
            q.push(node);
        }
        return root;
    }
};
// @lc code=end
