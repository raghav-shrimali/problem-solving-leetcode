/*
Question: 237. Delete Node in a Linked List

Topic:
- Linked List

Approach:
- Copy the value of the next node into the current node.
- Update the next pointer to skip the next node.
- Delete the skipped node.

Time Complexity: O(1)
Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};
