#pragma once
#include <vector>
#include <cstdio>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void printNode(int val, int h);

void show(TreeNode* x, int h);

TreeNode* build_from_level_order(std::vector<int>& arr);
void destroyTree(TreeNode*);



unsigned int Factorial(unsigned int number);
