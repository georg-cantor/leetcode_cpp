/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
 *
 * https://leetcode.com/problems/reverse-linked-list-ii/description/
 *
 * algorithms
 * Medium (36.56%)
 * Likes:    1864
 * Dislikes: 121
 * Total Accepted:    245.1K
 * Total Submissions: 655.5K
 * Testcase Example:  '[1,2,3,4,5]\n2\n4'
 *
 * Reverse a linked list from position m to n. Do it in one-pass.
 * 
 * Note: 1 ≤ m ≤ n ≤ length of list.
 * 
 * Example:
 * 
 * 
 * Input: 1->2->3->4->5->NULL, m = 2, n = 4
 * Output: 1->4->3->2->5->NULL
 * 
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m == n) return head;
        ListNode* x = head;
        ListNode* y = head;
        ListNode* r = nullptr;
        ListNode* first = nullptr;
        ListNode* second = head;
        int cnt = 1;
        while (x != nullptr && cnt <= n) {
            x = y->next;
            if (cnt == m-1) {
                first = y;
                second = x;
            }
            if (cnt >= m) {
                y->next = r;
                r = y;
            }
            y = x;
            cnt++;
        }
        second->next = y;
        if (first) {
            first->next = r;
            return head;
        } else {
            return r;
        }
    }
};
// @lc code=end
