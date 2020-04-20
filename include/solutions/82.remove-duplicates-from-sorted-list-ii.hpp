/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
 *
 * algorithms
 * Medium (35.32%)
 * Likes:    1387
 * Dislikes: 100
 * Total Accepted:    233K
 * Total Submissions: 651.7K
 * Testcase Example:  '[1,2,3,3,4,4,5]'
 *
 * Given a sorted linked list, delete all nodes that have duplicate numbers,
 * leaving only distinct numbers from the original list.
 * 
 * Return the linked list sorted as well.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2->3->3->4->4->5
 * Output: 1->2->5
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 1->1->1->2->3
 * Output: 2->3
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t = head;
        if (head == nullptr) return head;
        ListNode* res = new ListNode(head->val - 1);
        res->next = head;
        ListNode* s = res;
        bool dupFlag{false};
        while (t->next != nullptr) {
            if (t->val == t->next->val) {
                t->next = t->next->next;
                dupFlag = true;
            } else {
                t = t->next;
                if (dupFlag) {
                    s->next = t;
                    dupFlag = false;
                } else {
                    s = s->next;
                }
            }
        }
        if (dupFlag) {
            s->next = nullptr;
        }
        return res->next;
    }
};
// @lc code=end
