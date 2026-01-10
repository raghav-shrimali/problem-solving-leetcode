// LeetCode 173: BST Iterator
// Approach: Stack-based Inorder
// Time: O(1) amortized, Space: O(h)


class BSTIterator {
stack<TreeNode*> st;


void pushLeft(TreeNode* node) {
while (node) {
st.push(node);
node = node->left;
}
}


public:
BSTIterator(TreeNode* root) {
pushLeft(root);
}


int next() {
TreeNode* node = st.top(); st.pop();
pushLeft(node->right);
return node->val;
}


bool hasNext() {
return !st.empty();
}
};
