/*
LeetCode Problem: 783
Title: Minimum Distance Between BST Nodes

Approach:
- Perform an inorder traversal of the BST.
- Inorder traversal of BST gives sorted node values.
- Track the previous visited node and compute the difference
  with the current node.
- Update the minimum difference.

Time Complexity: O(N)
Space Complexity: O(H)
*/

class Solution {
public:
    int ans = INT_MAX;
    TreeNode* prev = NULL;

    void inorder(TreeNode* root)
    {
        if(!root) return;

        inorder(root->left);

        if(prev)
            ans = min(ans, root->val - prev->val);

        prev = root;

        inorder(root->right);
    }

    int minDiffInBST(TreeNode* root) 
    {
        inorder(root);
        return ans;
    }
};
