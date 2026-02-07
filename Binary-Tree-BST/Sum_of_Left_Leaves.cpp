/*
LeetCode 404 - Sum of Left Leaves

Approach: DFS
Time Complexity: O(n)
Space Complexity: O(h)
*/

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;

        int sum = 0;
        if (root->left && !root->left->left && !root->left->right)
            sum += root->left->val;

        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
