/*
LeetCode 61: Rotate List

Approach:
- Count length of list.
- Make list circular.
- Break the circle at correct position.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            len++;
        }

        k %= len;
        if (k == 0) return head;

        tail->next = head; // circular list

        int steps = len - k;
        ListNode* newTail = tail;

        while (steps--)
            newTail = newTail->next;

        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};
