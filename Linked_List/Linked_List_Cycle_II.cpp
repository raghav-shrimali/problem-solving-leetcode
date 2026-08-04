// # 142. Linked List Cycle II

// ## Problem
// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return `null`.

// ## Approach
// - Use Floyd's Tortoise and Hare Algorithm.
// - First, detect whether a cycle exists.
// - If a cycle is found, move one pointer to the head.
// - Move both pointers one step at a time until they meet.
// - The meeting point is the starting node of the cycle.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(1)

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
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Find the starting node of the cycle
                ListNode* entry = head;

                while (entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }

                return entry;
            }
        }

        return nullptr;
    }
};
