// LeetCode 235: Lowest Common Ancestor of BST
// Approach: BST Property
// Time: O(h), Space: O(1)


class Solution {
public:
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
while (root) {
if (p->val < root->val && q->val < root->val)
root = root->left;
else if (p->val > root->val && q->val > root->val)
root = root->right;
else
return root;
}
return NULL;
}
};
