// LeetCode 99: Recover Binary Search Tree
// Approach: Inorder Traversal
// Time: O(n), Space: O(h)


class Solution {
public:
TreeNode *first = NULL, *second = NULL, *prev = NULL;


void inorder(TreeNode* root) {
if (!root) return;


inorder(root->left);
if (prev && prev->val > root->val) {
if (!first) first = prev;
second = root;
}
prev = root;
inorder(root->right);
}


void recoverTree(TreeNode* root) {
inorder(root);
swap(first->val, second->val);
}
};
