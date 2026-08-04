// # 1019. Next Greater Node In Linked List

// ## Problem
// Given the head of a linked list, return an array where each element is the value of the next greater node for the corresponding node in the linked list. If no greater node exists, return `0`.

// ## Approach
// 1. Convert the linked list into a vector.
// 2. Use a monotonic decreasing stack to find the next greater value for each element.
// 3. Update the answer whenever a greater value is found.
// 4. Remaining indices in the stack have no greater value, so their answer stays `0`.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(n)

// ## Topics
// - Linked List
// - Stack
// - Monotonic Stack

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;

        // Store linked list values in a vector
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }

        int n = values.size();
        vector<int> ans(n, 0);
        stack<int> st; // Stores indices

        for (int i = 0; i < n; i++) {
            while (!st.empty() && values[i] > values[st.top()]) {
                ans[st.top()] = values[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }
};
