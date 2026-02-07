/*
LeetCode 226 - Invert Binary Tree

Approach: DFS
Time Complexity: O(n)
Space Complexity: O(h)
*/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;

        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
