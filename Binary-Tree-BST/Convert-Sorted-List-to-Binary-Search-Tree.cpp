// # 109. Convert Sorted List to Binary Search Tree

// ## Problem Link
// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/

// ## Difficulty
// Medium

// ## Topic
// - Linked List
// - Binary Search Tree
// - Binary Tree
// - Divide and Conquer
// - Recursion

// ## Approach
// 1. Use the slow and fast pointer technique to find the middle node of the linked list.
// 2. The middle node becomes the root of the BST.
// 3. Recursively construct the left subtree using the left half of the list.
// 4. Recursively construct the right subtree using the right half of the list.
// 5. Continue until the list becomes empty.

// ## Time Complexity
// - **O(n log n)**

// ## Space Complexity
// - **O(log n)** (Recursion stack)

// ## Example

// **Input**
// ```
// head = [-10,-3,0,5,9]
// ```

// **Output**
// ```
// [0,-3,9,-10,null,5]
// ```

// ## Concepts Learned
// - Slow and Fast Pointer
// - Divide and Conquer
// - Recursion
// - Height Balanced BST



/*
Question: 109. Convert Sorted List to Binary Search Tree

Approach:
- Find the middle node using slow and fast pointers.
- Make the middle node the root.
- Recursively build the left subtree from the left half.
- Recursively build the right subtree from the right half.

Time Complexity: O(n log n)
Space Complexity: O(log n)
*/

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr)
            return nullptr;

        if (head->next == nullptr)
            return new TreeNode(head->val);

        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev)
            prev->next = nullptr;

        TreeNode* root = new TreeNode(slow->val);

        if (head != slow)
            root->left = sortedListToBST(head);

        root->right = sortedListToBST(slow->next);

        return root;
    }
};
