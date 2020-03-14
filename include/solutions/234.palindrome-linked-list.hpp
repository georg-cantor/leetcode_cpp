/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (37.38%)
 * Likes:    2494
 * Dislikes: 323
 * Total Accepted:    360.5K
 * Total Submissions: 947.1K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2
 * Output: false
 * 
 * Example 2:
 * 
 * 
 * Input: 1->2->2->1
 * Output: true
 * 
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int len = length_of_list(head);
        if (len == 0 || len == 1) return true;
        ListNode* x;
        ListNode* y = head;
        ListNode* r = nullptr;
        for (int i = 1; i <= len/2; i++) {
          x = y->next;
          y->next = r;
          r = y;
          y = x;
        }
        if (len%2 == 1) x = x->next;
        while (r && x) {
          if (r->val != x->val)
            return false;
          r = r->next;
          x = x->next;
        }
        return true;
    }
 private:
    int length_of_list(ListNode* t) {
        int cnt = 0;
        while (t) {
            cnt++;
            t = t->next;
        }
        return cnt;
    }
};
// @lc code=end
