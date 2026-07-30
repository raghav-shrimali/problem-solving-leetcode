/*
-------------------------------------------------------
Question: 83. Remove Duplicates from Sorted List
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Approach:
1. Traverse the sorted linked list.
2. If the current node and next node have the same value,
   skip the duplicate node.
3. Otherwise, move to the next node.
4. Return the modified list.

Time Complexity: O(n)
Space Complexity: O(1)

Topic: Linked List
-------------------------------------------------------
*//**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == nullptr)
            return head;

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
