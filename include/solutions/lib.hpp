#pragma once
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* generateTreeFromArr(std::vector<int>& arr);

unsigned int Factorial(unsigned int number);
