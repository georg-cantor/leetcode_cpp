#pragma once

struct TreeNode {
    TreeNode(const int x) : val{ x } {}
    int val;
    TreeNode* left;
    TreeNode* right;
}

TreeNode* generateTreeFromArr(std::vector& arr);

unsigned int Factorial(unsigned int number);
