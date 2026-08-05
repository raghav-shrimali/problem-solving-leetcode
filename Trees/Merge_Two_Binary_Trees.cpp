// # 617. Merge Two Binary Trees

// ## Problem Link
// https://leetcode.com/problems/merge-two-binary-trees/

// ## Difficulty
// Easy

// ## Topic
// - Binary Tree
// - Depth-First Search (DFS)
// - Recursion

// ## Approach
// - Traverse both trees simultaneously using recursion.
// - If one node is `NULL`, return the other node.
// - If both nodes exist:
//   - Add the value of the second node to the first node.
//   - Recursively merge the left children.
//   - Recursively merge the right children.
// - Return the merged tree.

// ## Algorithm
// 1. If `root1` is `NULL`, return `root2`.
// 2. If `root2` is `NULL`, return `root1`.
// 3. Add `root2->val` to `root1->val`.
// 4. Merge the left subtrees recursively.
// 5. Merge the right subtrees recursively.
// 6. Return `root1`.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(h)**
//   - Balanced Tree: **O(log n)**
//   - Skewed Tree: **O(n)**

// ## Tags
// `Tree` `Binary Tree` `DFS` `Recursion`

// ## Solution



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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr)
            return root2;

        if (root2 == nullptr)
            return root1;

        root1->val += root2->val;

        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);

        return root1;
    }
};
// See `solution.cpp`.
