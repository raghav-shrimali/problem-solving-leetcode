/*
-------------------------------------------------------
Question: 21. Merge Two Sorted Lists
Link: https://leetcode.com/problems/merge-two-sorted-lists/

Approach:
1. If either list is empty, return the other list.
2. Compare the first nodes of both lists.
3. Attach the smaller node to the result.
4. Recursively merge the remaining nodes.

Time Complexity: O(n + m)
Space Complexity: O(n + m)   // Recursive call stack

Topic: Linked List, Recursion
-------------------------------------------------------
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Base Case
        if (list1 == nullptr || list2 == nullptr) {
            return (list1 == nullptr) ? list2 : list1;
        }

        // Recursive Case
        if (list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
