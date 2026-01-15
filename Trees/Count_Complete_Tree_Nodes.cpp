// ## Approach
// We take advantage of the properties of a **complete binary tree**.

// 1. Calculate the height of the left-most path.
// 2. Calculate the height of the right-most path.
// 3. If both heights are equal:
//    - The tree is a **perfect binary tree**
//    - Number of nodes = `2^height - 1`
// 4. Otherwise:
//    - Recursively count nodes in left and right subtrees.

// This avoids traversing every node and improves performance.

// ---

// ## Time Complexity
// - **O(log² N)**
//   - Height calculation takes `O(log N)`
//   - Recursion depth is `O(log N)`

// ---

// ## Space Complexity
// - **O(log N)**
// - Due to recursive stack space


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
    // Function to calculate height of left-most path
    int leftHeight(TreeNode* root) {
        int h = 0;
        while (root) {
            h++;
            root = root->left;
        }
        return h;
    }

    // Function to calculate height of right-most path
    int rightHeight(TreeNode* root) {
        int h = 0;
        while (root) {
            h++;
            root = root->right;
        }
        return h;
    }

    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        // If left and right heights are same, it's a perfect binary tree
        if (lh == rh) {
            return (1 << lh) - 1;
        }

        // Otherwise, recurse on left and right subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
