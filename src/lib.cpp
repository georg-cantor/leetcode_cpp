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

ListNode* build_from_vec(std::vector<int>& arr) {
    if (arr.size() == 0) return nullptr;
    ListNode* t = new ListNode{arr.at(0)};
    ListNode* x = t;
    for (int i = 1; i < arr.size(); ++i) {
        x->next = new ListNode{arr.at(i)};
        x = x->next;
    }
    return t;
}

void printList(ListNode* t) {
    while (t!=nullptr) {
        printf("%d->",t->val);
        t = t->next;
    }
    printf("nullptr\n");
}

void destroyList(ListNode* t) {
    while (t !=nullptr) {
        delete t;
        t = t->next;
    }
}

std::vector<int> list_to_vector(ListNode* t) {
    std::vector<int> result{};
    while (t != nullptr) {
        result.push_back(t->val);
        t = t->next;
    }
    return result;
}

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
