// LeetCode 257: Binary Tree Paths
// Approach: DFS / Recursion
// Time: O(n), Space: O(h)

class Solution {
public:
    void dfs(TreeNode* root, string path, vector<string>& paths) {
        if (!root) return;

        if (!path.empty()) path += "->";
        path += to_string(root->val);

        if (!root->left && !root->right) {
            paths.push_back(path);
            return;
        }

        dfs(root->left, path, paths);
        dfs(root->right, path, paths);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        dfs(root, "", paths);
        return paths;
    }
};
