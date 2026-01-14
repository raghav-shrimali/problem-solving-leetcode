// LeetCode 101: Symmetric Tree
// Approach: Recursive DFS (Mirror Check)
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
bool isMirror(TreeNode* left, TreeNode* right) {
// Both nodes are null
if (!left && !right) return true;


// One is null and the other is not
if (!left || !right) return false;


// Values must match and subtrees must be mirrors
return (left->val == right->val) &&
isMirror(left->left, right->right) &&
isMirror(left->right, right->left);
}


bool isSymmetric(TreeNode* root) {
if (!root) return true;
return isMirror(root->left, root->right);
}
};
