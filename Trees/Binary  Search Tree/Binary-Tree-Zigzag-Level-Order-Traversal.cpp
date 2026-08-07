// # 103. Binary Tree Zigzag Level Order Traversal

// ## Problem Link
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// ## Difficulty
// Medium

// ## Topics
// - Binary Tree
// - Breadth-First Search (BFS)
// - Queue
// - Level Order Traversal

// ## Approach
// 1. Perform a level order traversal using a queue.
// 2. Traverse each level one by one.
// 3. If the current level is left-to-right, store values normally.
// 4. If the current level is right-to-left, place values in reverse order.
// 5. Toggle the traversal direction after processing each level.
// 6. Return the final zigzag traversal.

// ## Algorithm
// - Push the root node into the queue.
// - Process one level at a time.
// - Create a vector for the current level.
// - Store node values using:
//   - Left to Right → `level[i]`
//   - Right to Left → `level[size - 1 - i]`
// - Push child nodes into the queue.
// - Flip the traversal direction after every level.

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
// [[3],[20,9],[15,7]]
// ```

// ## Key Concepts
// - Binary Tree
// - Breadth-First Search (BFS)
// - Queue
// - Zigzag Traversal



class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        // Declare the variable here
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                int index = leftToRight ? i : size - 1 - i;
                level[index] = node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            ans.push_back(level);

            // Toggle the direction
            leftToRight = !leftToRight;
        }

        return ans;
    }
};
// - Level Order Traversal
