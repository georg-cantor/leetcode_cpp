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
  //if (n%2==0 && n != 0) arr.push_back(-1);
  std::queue<TreeNode *> q; // this is a queue of pointers to ~

  TreeNode* root = nullptr;
  bool leftLeaf = false;
  for (int i = 0; i < n;) {
      if (arr[i]>0) {
          TreeNode* node = new TreeNode{arr[i]};
          if (root == nullptr)
              root = node;
          else if (q.front()->left == nullptr && !leftLeaf) {
              q.front()->left = node;
              leftLeaf = true;
          }
          else if (q.front()->right == nullptr) {
              q.front()->right = node;
              q.pop();
              leftLeaf = false;
          }
          q.push(node);
      }
      else {
          if (!leftLeaf) {
              leftLeaf = true;
          } else {
              leftLeaf = false;
              if (!q.empty()) q.pop();
          }
      }
      i+=1;
  }
  return root;
}

std::vector<int> tree_to_vector(TreeNode* root) {
    std::vector<int> result{};
    std::queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* t = q.front();
        if (t != nullptr) {
            result.push_back(t->val);
            q.push(t->left);
            q.push(t->right);
            q.pop();
        } else {
            q.pop();
            result.push_back(-1);
        }
    }
    while (result.back() == -1) {
        result.pop_back();
    }
    return result;
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
