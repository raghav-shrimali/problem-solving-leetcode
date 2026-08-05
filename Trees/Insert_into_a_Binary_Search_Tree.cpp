// # 701. Insert into a Binary Search Tree

// ## Problem Link
// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// ## Difficulty
// Medium

// ## Topic
// - Binary Search Tree (BST)
// - Binary Tree
// - Recursion

// ## Approach
// - If the tree is empty, create a new node with the given value.
// - Compare the value with the current node:
//   - If smaller, recursively insert into the left subtree.
//   - Otherwise, recursively insert into the right subtree.
// - Return the root after insertion.

// ## Algorithm
// 1. If `root == NULL`, create and return a new node.
// 2. If `val < root->val`, insert into the left subtree.
// 3. Otherwise, insert into the right subtree.
// 4. Return the root.

// ## Time Complexity
// - Average: **O(log n)**
// - Worst: **O(n)**

// ## Space Complexity
// - Average: **O(log n)**
// - Worst: **O(n)**

// ## Tags
// `Tree` `Binary Tree` `Binary Search Tree` `Recursion`

// ## Solution
// See `solution.cpp`.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr)
            return new TreeNode(val);

        if (val < root->val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);

        return root;
    }
};
