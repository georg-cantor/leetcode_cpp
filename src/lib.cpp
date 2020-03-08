#include <solutions/lib.hpp>
#include <cmath>

TreeNode* generateTreeFromArr(std::vector& arr) {
    int floor = 0, count = 0;
    TreeNode* treeNodes = new TreeNode[arr.size()];
    while (arr != null && count < array.length) {
        int start = (int) std::pow(2, floor) - 1;
        int end = (int) Math.pow(2, floor + 1) - 1;
        if (end > array.length) {
            end = array.length;
        }
        for (int i = start; i < end; i++) {
            if (array[i] != null) {
                treeNodes[i] = new TreeNode(array[i]);
            } else {
                treeNodes[i] = null;
            }
            if (i > 0) {
                int parent = (i - 1) / 2;
                if (parent >= 0) {
                    TreeNode pNode = treeNodes[parent];
                    if (pNode != null) {
                        if (i % 2 == 1) {
                            pNode.left = treeNodes[i];
                        } else {
                            pNode.right = treeNodes[i];
                        }
                    }
                }
            }
            count++;
        }
        floor++;
    }
    return treeNodes[0];
}

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
