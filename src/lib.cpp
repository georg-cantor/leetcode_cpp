#include <solutions/lib.hpp>
#include <cmath>
#include <cstdlib>
#include <queue>

void show(TreeNode* x, int h) {
  if (x == nullptr) {
    //printNode(-1, h);
    return;
  }
  show(x->right, h+1);
  printNode(x->val, h);
  show(x->left, h+1);
}

void printNode(int val, int h) {
  for (int i = 0; i < h; i++) {
    printf("   ");
  }
  printf("%d\n", val);
}

TreeNode* build_from_level_order(std::vector<int>& arr) {
  int n = arr.size();
  if (n%2==0 && n != 0) arr.push_back(-1);
  std::queue<TreeNode *> q; // this is a queue of pointers to ~

  TreeNode* root = nullptr;
  for (int i = 0; i < n;) {
      if (arr[i]>0) {
          TreeNode* node = new TreeNode{arr[i]};
          if (root == nullptr)
              root = node;
          else if (q.front()->left == nullptr)
              q.front()->left = node;
          else {
              q.front()->right = node;
              q.pop();
          }
          q.push(node);
          i += 1;
      }
      else {
          if (!q.empty()) q.pop();
          i += 2;
      }
  }
  return root;
}

void destroyTree(TreeNode* root) {
    if (root == nullptr) return;
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
}

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
