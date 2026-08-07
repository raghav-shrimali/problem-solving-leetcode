// # 1302. Deepest Leaves Sum

// ## Problem Link
// https://leetcode.com/problems/deepest-leaves-sum/

// ## Difficulty
// Medium

// ## Topics
// - Binary Tree
// - Breadth-First Search (BFS)
// - Queue
// - Tree Traversal

// ## Approach
// 1. Perform a level order traversal using a queue.
// 2. At each level, reset the current level sum.
// 3. Add all node values of the current level.
// 4. Continue until the last level.
// 5. Return the sum of the deepest level.

// ## Algorithm
// - Push the root into the queue.
// - Traverse each level one by one.
// - Reset the sum before processing a new level.
// - Store the sum of the current level.
// - The final stored sum is the answer.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(n)**

// ## Example

// ### Input
// ```
// root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
// ```

// ### Output
// ```
// 15
// ```

// ## Key Concepts
// - Binary Tree
// - Level Order Traversal
// - Breadth-First Search


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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int sum = 0;

        while (!q.empty()) {
            int size = q.size();
            sum = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
        }

        return sum;
    }
};
// - Queue
