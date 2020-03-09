#include <solutions/lib.hpp>
#include <cmath>
#include <cstdlib>
#include <deque>

void show(TreeNode* x, int h) {
  if (x == nullptr) {
    printNode(-1, h);
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

TreeNode* build_from_level_order(std::vector<int> arr) {
  if (arr.size() == 0) return nullptr;
  int n = arr.size();
  std::deque<TreeNode&> q; // this is a queue of pointers to ~
  TreeNode *root = new TreeNode{arr[0]};
  root->left = root->right = nullptr;
  q.push_front(root);

  for (int i = 1; i < n; /* advancing of i is inside */)
  {
    TreeNode p = (q.pop_back());

    if (arr[i] > 0) {
      TreeNode *l = new TreeNode{arr[i]};
      l->left = l->right = nullptr;
      p.left = l;
      q.push_front(l);
    }
    i++;

    if (i < n) // last level could end in a left node, this test prevents to see an inexistent right node
    {
      if (arr[i] > 0) {
        TreeNode *r = new TreeNode{arr[i]};
        r->left = r->right = nullptr;
        p.right = r;
        q.push_front(r);
      }
      i++;
    }
  }
  return root;
}

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
