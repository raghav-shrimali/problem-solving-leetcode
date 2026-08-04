// # 145. Binary Tree Postorder Traversal

// ## Problem
// Given the root of a binary tree, return the postorder traversal of its nodes' values.

// ## Approach 1 (Recursive)
// - Traverse the left subtree.
// - Traverse the right subtree.
// - Visit the current node.

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(h)

// ## Alternative Approach (Iterative)
// - Use a stack to perform a modified preorder traversal (Root → Right → Left).
// - Reverse the result to obtain the postorder traversal (Left → Right → Root).

// Time Complexity: O(n)

// Space Complexity: O(n)

// ## Topics
// - Tree
// - Binary Tree
// - Depth-First Search (DFS)
// - Stack

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            ans.push_back(node->val);

            if (node->left)
                st.push(node->left);

            if (node->right)
                st.push(node->right);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
