/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 *
 * https://leetcode.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (58.01%)
 * Likes:    3678
 * Dislikes: 82
 * Total Accepted:    853K
 * Total Submissions: 1.4M
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Reverse a singly linked list.
 * 
 * Example:
 * 
 * 
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
 * 
 * 
 * Follow up:
 * 
 * A linked list can be reversed either iteratively or recursively. Could you
 * implement both?
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
    ListNode* reverseList(ListNode* head) {
        ListNode* x = head;
        ListNode* y = head;
        ListNode* r = nullptr;
        while (y != nullptr) {
            x = y->next;
            y->next = r;
            r = y;
            y = x;
        }
        return r;
    }

    /* This recurse method is from haoel-陈皓 */
    /* https://github.com/haoel/leetcode/blob/master/algorithms/cpp/reverseLinkedList/reverseLinkedList.cpp */
    ListNode* reverseListRec(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* h = reverseListRec(head->next);
        head->next->next = head;
        head->next = nullptr;
        return h;
    }
};
// @lc code=end
