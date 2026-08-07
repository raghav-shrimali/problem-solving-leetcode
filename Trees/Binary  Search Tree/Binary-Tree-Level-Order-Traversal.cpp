// # 102. Binary Tree Level Order Traversal

// ## Problem Link
// https://leetcode.com/problems/binary-tree-level-order-traversal/

// ## Difficulty
// Medium

// ## Topics
// - Binary Tree
// - Breadth-First Search (BFS)
// - Queue
// - Level Order Traversal

// ## Approach
// 1. Use a queue to perform Breadth-First Search (BFS).
// 2. Push the root node into the queue.
// 3. Process one level at a time.
// 4. Store all node values of the current level.
// 5. Push the left and right child of each node into the queue.
// 6. Add the current level to the final answer.

// ## Algorithm
// - Initialize an empty queue.
// - Push the root node.
// - While the queue is not empty:
//   - Store the number of nodes at the current level.
//   - Traverse all nodes of that level.
//   - Save their values in a vector.
//   - Push their children into the queue.
// - Return the result.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(n)**

// ## Example

// ### Input
// ```
// root = [3,9,20,null,null,15,7]
// ```

// ### Output
// ```
// [[3],[9,20],[15,7]]
// ```

// ## Key Concepts
// - Binary Tree
// - Breadth-First Search
// - Queue


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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
}
// - Level Order Traversal
