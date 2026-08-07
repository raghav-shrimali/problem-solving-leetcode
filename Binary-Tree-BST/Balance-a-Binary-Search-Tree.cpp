// # 1382. Balance a Binary Search Tree

// ## Problem Link
// https://leetcode.com/problems/balance-a-binary-search-tree/

// ## Difficulty
// Medium

// ## Topics
// - Binary Search Tree
// - Binary Tree
// - Recursion
// - Inorder Traversal
// - Divide and Conquer

// ## Approach
// 1. Perform an inorder traversal of the BST to collect all nodes in sorted order.
// 2. Since inorder traversal of a BST produces a sorted sequence, use this sequence to construct a height-balanced BST.
// 3. Recursively choose the middle node as the root to ensure the tree remains balanced.

// ## Algorithm
// - Traverse the BST using inorder traversal.
// - Store each node in a vector.
// - Recursively build the balanced BST using the middle element as the root.
// - Connect the left and right subtrees.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(n)**

// ## Example

// ### Input
// ```
// root = [1,null,2,null,3,null,4,null,null]
// ```

// ### Output
// ```
// [2,1,3,null,null,null,4]
// ```

// ## Key Concepts
// - BST Inorder Traversal
// - Height Balanced BST
// - Divide and Conquer


/*
Question: 1382. Balance a Binary Search Tree

Approach:
1. Store all BST nodes using inorder traversal.
2. Build a balanced BST from the sorted nodes.
3. Pick the middle node as the root recursively.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<TreeNode*> nodes;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
    }

    TreeNode* buildBalancedBST(int left, int right) {
        if (left > right)
            return nullptr;

        int mid = left + (right - left) / 2;

        TreeNode* root = nodes[mid];
        root->left = buildBalancedBST(left, mid - 1);
        root->right = buildBalancedBST(mid + 1, right);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return buildBalancedBST(0, nodes.size() - 1);
    }
};
// - Recursion
