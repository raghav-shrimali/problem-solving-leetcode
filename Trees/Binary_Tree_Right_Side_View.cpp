// # 199. Binary Tree Right Side View

// ## Problem Link
// https://leetcode.com/problems/binary-tree-right-side-view/

// ## Difficulty
// Medium

// ## Topic
// - Binary Tree
// - Breadth-First Search (BFS)
// - Queue
// - Level Order Traversal

// ## Approach
// - Use Level Order Traversal (BFS).
// - Traverse the tree level by level using a queue.
// - For each level, record the value of the last node processed.
// - Store these values in the answer vector.
// - Return the final vector containing the right side view.

// ## Algorithm
// 1. If the root is `NULL`, return an empty vector.
// 2. Push the root into a queue.
// 3. While the queue is not empty:
//    - Get the number of nodes at the current level.
//    - Process all nodes of that level.
//    - Push their left and right children into the queue.
//    - Save the value of the last node of the level.
// 4. Return the answer vector.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(n)**

// ## Tags
// `Tree` `Binary Tree` `BFS` `Queue` `Level Order Traversal`

// ## Solution
// See `solution.cpp`.

/**
 * LeetCode 199 - Binary Tree Right Side View
 * Topic: Binary Tree, BFS
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (i == size - 1)
                    ans.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
        }

        return ans;
    }
};


