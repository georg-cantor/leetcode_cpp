/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 *
 * https://leetcode.com/problems/balanced-binary-tree/description/
 *
 * algorithms
 * Easy (42.54%)
 * Likes:    1807
 * Dislikes: 146
 * Total Accepted:    404.8K
 * Total Submissions: 950.1K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, determine if it is height-balanced.
 * 
 * For this problem, a height-balanced binary tree is defined as:
 * 
 * 
 * a binary tree in which the left and right subtrees of every node differ in
 * height by no more than 1.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * Given the following tree [3,9,20,null,null,15,7]:
 * 
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * Return true.
 * 
 * Example 2:
 * 
 * Given the following tree [1,2,2,3,3,null,null,4,4]:
 * 
 * 
 * ⁠      1
 * ⁠     / \
 * ⁠    2   2
 * ⁠   / \
 * ⁠  3   3
 * ⁠ / \
 * ⁠4   4
 * 
 * 
 * Return false.
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
class Solution1 {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        else if (isBalanced(root->left) && isBalanced(root->right) && abs(maxDepth(root->left),maxDepth(root->right)) <= 1) {
            return true;
        }
        return false;
    }

private:
    int abs(int a, int b) {
        return (a > b) ? (a-b) : (b-a);
    }
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        } else {
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
            return (leftDepth >= rightDepth) ? (leftDepth+1) : (rightDepth+1);
        }
    }
};

/*
 * This method is from haoel:https://github.com/haoel/leetcode/blob/master/algorithms/cpp/balancedBinaryTree/balancedBinaryTree.cpp
 * */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return isBalancedRec(root, height);
    }

private:
    int abs(int a, int b) {
        return (a > b) ? (a-b) : (b-a);
    }
    bool isBalancedRec(TreeNode* root, int&height) {
        if (!root) {
            height = 0;
            return true;
        }
        int left_height = 0;
        int right_height = 0;
        bool isLeft = isBalancedRec(root->left, left_height);
        bool isRight = isBalancedRec(root->right, right_height);
        height = (left_height > right_height ? left_height :  right_height) + 1;
        return ((abs(left_height, right_height) <= 1) && isLeft && isRight);
    }
};
// @lc code=end
