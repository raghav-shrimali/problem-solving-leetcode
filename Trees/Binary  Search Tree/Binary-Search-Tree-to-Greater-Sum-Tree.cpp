// # 1038. Binary Search Tree to Greater Sum Tree

// ## Problem Link
// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

// ## Difficulty
// Medium

// ## Topics
// - Binary Search Tree
// - Binary Tree
// - Depth-First Search (DFS)
// - Reverse Inorder Traversal
// - Recursion

// ## Approach
// 1. Traverse the BST using Reverse Inorder Traversal (Right → Root → Left).
// 2. Maintain a running sum of all previously visited nodes.
// 3. Update the current node's value with the running sum.
// 4. Continue recursively until all nodes are processed.

// ## Algorithm
// - Initialize `sum = 0`.
// - Visit the right subtree.
// - Add the current node's value to `sum`.
// - Update the node's value with `sum`.
// - Visit the left subtree.
// - Return the modified root.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(h)** (Recursive call stack)

// ## Example

// ### Input
// ```
// root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
// ```

// ### Output
// ```
// [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
// ```

// ## Key Concepts
// - Binary Search Tree
// - Reverse Inorder Traversal
// - Depth-First Search
// - Prefix Sum
// - Recursion


/*
Question: 1038. Binary Search Tree to Greater Sum Tree

Approach:
- Traverse the BST in Reverse Inorder (Right → Root → Left).
- Keep a running sum of visited nodes.
- Update each node with the accumulated sum.

Time Complexity: O(n)
Space Complexity: O(h)
*/

class Solution {
public:
    int sum = 0;

    void reverseInorder(TreeNode* root) {
        if (!root)
            return;

        reverseInorder(root->right);

        sum += root->val;
        root->val = sum;

        reverseInorder(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};
