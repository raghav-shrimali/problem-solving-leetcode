/*
LeetCode 876: Middle of the Linked List

Approach:
- Use slow and fast pointers.
- Slow moves one step, fast moves two steps.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
