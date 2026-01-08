// LeetCode 105: Construct Binary Tree from Preorder and Inorder Traversal
// Approach: DFS + Hash Map
// Time: O(n), Space: O(n)

class Solution {
public:
    unordered_map<int, int> inorderIndex;
    int preorderIndex = 0;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int left, int right) {
        if (left > right)
            return NULL;

        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int idx = inorderIndex[rootVal];

        root->left = build(preorder, inorder, left, idx - 1);
        root->right = build(preorder, inorder, idx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
            inorderIndex[inorder[i]] = i;

        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};
