/*
Question: 160. Intersection of Two Linked Lists

Topic:
- Linked List

Approach:
- Use two pointers traversing both lists.
- Redirect each pointer to the other list after reaching the end.
- The pointers will meet at the intersection node or nullptr.

Time Complexity: O(N + M)
Space Complexity: O(1)
*/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        ListNode* ptrA = headA;
        ListNode* ptrB = headB;

        while (ptrA != ptrB) {
            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
        }

        return ptrA;
    }
};
