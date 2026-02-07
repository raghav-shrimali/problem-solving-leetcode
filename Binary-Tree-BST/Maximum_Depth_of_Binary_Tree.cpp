/*
LeetCode 104 - Maximum Depth of Binary Tree

Approach: DFS (Recursion)
Time Complexity: O(n)
Space Complexity: O(h)
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
