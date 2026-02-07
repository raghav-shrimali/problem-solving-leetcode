/*
LeetCode 653 - Two Sum IV (BST)

Approach: HashSet + DFS
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
    unordered_set<int> st;
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;

        if (st.count(k - root->val)) return true;

        st.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
