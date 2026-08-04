// # 2095. Delete the Middle Node of a Linked List

// ## Problem
// Given the head of a singly linked list, delete the middle node and return the head of the modified linked list.

// ## Approach
// - Handle the single-node list separately.
// - Use the Fast & Slow Pointer technique to locate the middle node.
// - Maintain a `prev` pointer to the node before the middle.
// - Skip the middle node by updating `prev->next`.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(1)

// ## Topics
// - Linked List
// - Two Pointers
// - Fast & Slow Pointers

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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;

        return head;
    }
};
