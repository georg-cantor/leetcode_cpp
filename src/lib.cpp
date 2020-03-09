#include <solutions/lib.hpp>

TreeNode* generateTreeRec(std::vector& arr, int left) {
    if (arr[left] <= 0 || left >= arr.size()) {
        return nullptr;
    }
    TreeNode* node = new TreeNode{arr[left]};
    node->left  = generateTreeRec(arr, 2*left+1);
    node->right = generateTreeRec(arr, 2*left+2);
}

TreeNode* generateTreeFromArr(std::vector& arr) {
    return generateTreeRec(arr, 0);
}

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
