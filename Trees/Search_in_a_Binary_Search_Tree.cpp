/*
LeetCode 700 - Search in a Binary Search Tree

Approach:
- Use BST property to decide left or right traversal.
- Recursively search until value is found or root becomes NULL.

Time Complexity: O(h)
Space Complexity: O(h)
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;

        if (root->val == val)
            return root;
        else if (val < root->val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
};
