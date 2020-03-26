#pragma once
#include <vector>
#include <cstdio>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

void printNode(int val, int h);

void show(TreeNode* x, int h);

TreeNode* build_from_level_order(std::vector<int>& arr);
std::vector<int> tree_to_vector(TreeNode*);
void destroyTree(TreeNode*);

ListNode* build_from_vec(std::vector<int>& arr);
void destroyList(ListNode*);
void printList(ListNode*);
std::vector<int> list_to_vector(ListNode*);



unsigned int Factorial(unsigned int number);
