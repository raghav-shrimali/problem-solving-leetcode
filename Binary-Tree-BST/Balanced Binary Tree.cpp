// # 110. Balanced Binary Tree

// ## Problem
// Determine whether a binary tree is height-balanced.

// ## Approach
// - Use DFS (postorder traversal).
// - Compute the height of each subtree.
// - Return `-1` immediately if any subtree is unbalanced.
// - Otherwise, return the subtree height.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(h)

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
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftHeight = height(root->left);
        if (leftHeight == -1)
            return -1;

        int rightHeight = height(root->right);
        if (rightHeight == -1)
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
