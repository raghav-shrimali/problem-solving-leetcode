// # 203. Remove Linked List Elements

// ## Problem
// Given the head of a linked list and an integer `val`, remove all the nodes of the linked list that have `Node.val == val`, and return the new head.

// ## Approach
// - Create a dummy node before the head.
// - Traverse the linked list.
// - If the next node contains the target value, skip it.
// - Otherwise, move to the next node.
// - Return `dummy.next`.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(1)

// ## Topics
// - Linked List
// - Simulation


/**
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* current = &dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return dummy.next;
    }
};
