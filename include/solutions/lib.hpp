#pragma once

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

TreeNode generateTreeFromArr(std::vector& arr);

unsigned int Factorial(unsigned int number);
