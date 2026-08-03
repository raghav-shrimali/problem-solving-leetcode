/*
Question: 2816. Double a Number Represented as a Linked List
Topic: Linked List, Recursion

Approach:
- Traverse to the end using recursion.
- Double each digit while propagating carry backwards.
- If carry remains after processing the head, create a new head.

Time Complexity: O(N)
Space Complexity: O(N)
*/
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
    int helper(ListNode* node) {
        if (node == nullptr)
            return 0;

        int carry = helper(node->next);

        int sum = node->val * 2 + carry;
        node->val = sum % 10;

        return sum / 10;
    }

    ListNode* doubleIt(ListNode* head) {
        int carry = helper(head);

        if (carry) {
            ListNode* newHead = new ListNode(carry);
            newHead->next = head;
            head = newHead;
        }

        return head;
    }
};
