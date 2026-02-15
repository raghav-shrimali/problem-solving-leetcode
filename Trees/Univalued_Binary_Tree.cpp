/*
LeetCode 965: Univalued Binary Tree

Problem Statement:
A binary tree is univalued if every node in the tree
has the same value.

Return true if the given tree is univalued,
otherwise return false.

--------------------------------------------------------

Approach:
1. Store the root value.
2. Traverse the tree using recursion (DFS).
3. At each node:
   - If node value != root value → return false.
4. Recursively check left and right subtree.

--------------------------------------------------------

Time Complexity:
O(N)
Where N = number of nodes (we visit each node once)

Space Complexity:
O(H)
Where H = height of tree (recursion stack)
Worst case: O(N) (skewed tree)
Best case: O(log N) (balanced tree)
*/

class Solution {
public:
    
    bool dfs(TreeNode* node, int value) {
        if (!node)
            return true;

        if (node->val != value)
            return false;

        return dfs(node->left, value) && dfs(node->right, value);
    }

    bool isUnivalTree(TreeNode* root) {
        if (!root)
            return true;

        return dfs(root, root->val);
    }
};
