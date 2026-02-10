/*
LeetCode 206: Reverse Linked List

Approach:
- Use three pointers (prev, curr, next).
- Reverse links one by one.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
