// # 2181. Merge Nodes in Between Zeros

// ## Problem
// Given the head of a linked list containing `0`-valued separator nodes, merge the values between every pair of consecutive zeros into a single node.

// ## Approach
// - Skip the first zero.
// - Traverse the list and accumulate the sum until the next zero.
// - Store the sum in the output list (or reuse existing nodes in the optimized solution).
// - Repeat until the end of the list.

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int sum = 0;
        head = head->next; // Skip the first zero

        while (head != nullptr) {
            if (head->val == 0) {
                tail->next = new ListNode(sum);
                tail = tail->next;
                sum = 0;
            } else {
                sum += head->val;
            }
            head = head->next;
        }

        return dummy->next;
    }
};
