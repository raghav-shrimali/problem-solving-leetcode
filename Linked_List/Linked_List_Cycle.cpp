/*
Question: 141. Linked List Cycle
Topic: Linked List, Two Pointers (Floyd's Cycle Detection)

Approach:
- Use slow and fast pointers.
- Slow moves one node at a time.
- Fast moves two nodes at a time.
- If they meet, a cycle exists.
- Otherwise, if fast reaches NULL, no cycle exists.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};
