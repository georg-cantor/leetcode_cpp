/*
 * @lc app=leetcode id=993 lang=cpp
 *
 * [993] Cousins in Binary Tree
 *
 * https://leetcode.com/problems/cousins-in-binary-tree/description/
 *
 * algorithms
 * Easy (52.18%)
 * Likes:    578
 * Dislikes: 33
 * Total Accepted:    57.2K
 * Total Submissions: 108.1K
 * Testcase Example:  '[1,2,3,4]\n4\n3'
 *
 * In a binary tree, the root node is at depth 0, and children of each depth k
 * node are at depth k+1.
 * 
 * Two nodes of a binary tree are cousins if they have the same depth, but have
 * different parents.
 * 
 * We are given the root of a binary tree with unique values, and the values x
 * and y of two different nodes in the tree.
 * 
 * Return true if and only if the nodes corresponding to the values x and y are
 * cousins.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * 
 * Input: root = [1,2,3,4], x = 4, y = 3
 * Output: false
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * 
 * Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
 * Output: true
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * 
 * 
 * Input: root = [1,2,3,null,4], x = 2, y = 3
 * Output: false
 * 
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The number of nodes in the tree will be between 2 and 100.
 * Each node has a unique integer value from 1 to 100.
 * 
 * 
 * 
 * 
 * 
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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        int depthX = depthOfNode(root, x, 0);
        int depthY = depthOfNode(root, y, 0);
        int parentX = parentOfNode(root, x);
        int parentY = parentOfNode(root, y);
        //printf("%d, %d, %d, %d\n", depthX, depthY, parentX, parentY);
        return depthX != -1 && depthY != -1 && parentX != -1 && parentY != -1 && (depthX == depthY) && parentX != parentY;
    }
    int depthOfNode(TreeNode* node, int value, int depth) {
        if (node == nullptr) return -1;
        else if (node->val == value) return depth;
        else return std::max(depthOfNode(node->left, value, depth+1), depthOfNode(node->right, value, depth+1));
    }
    int parentOfNode(TreeNode* node, int value) {
        if (node->left == nullptr && node->right == nullptr) {
            return -1;
        } else if (node->left != nullptr && node->right != nullptr) {
            if (node->left->val == value || node->right->val == value) {
                return node->val;
            } else {
                return std::max(parentOfNode(node->left, value), parentOfNode(node->right, value));
            }
        } else if (node->left != nullptr) {
            if (node->left->val == value) {
                return node->val;
            } else {
                return parentOfNode(node->left, value);
            }
        } else {
            if (node->right->val == value) {
                return node->val;
            } else {
                return parentOfNode(node->right, value);
            }
        }
    }
};
// @lc code=end
