/*
LeetCode 530 - Minimum Absolute Difference in BST

Approach: Inorder Traversal
Time Complexity: O(n)
Space Complexity: O(h)
*/

class Solution {
    int prev = -1, ans = INT_MAX;
public:
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);

        if (prev != -1)
            ans = min(ans, root->val - prev);

        prev = root->val;
        inorder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
