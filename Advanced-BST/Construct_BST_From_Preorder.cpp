// LeetCode 1008: Construct BST from Preorder
// Approach: Bound-based Recursion
// Time: O(n), Space: O(h)


class Solution {
public:
int idx = 0;


TreeNode* build(vector<int>& preorder, int bound) {
if (idx == preorder.size() || preorder[idx] > bound)
return NULL;


TreeNode* root = new TreeNode(preorder[idx++]);
root->left = build(preorder, root->val);
root->right = build(preorder, bound);
return root;
}


TreeNode* bstFromPreorder(vector<int>& preorder) {
return build(preorder, INT_MAX);
}
};
