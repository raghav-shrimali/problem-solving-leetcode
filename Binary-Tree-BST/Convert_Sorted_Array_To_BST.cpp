// LeetCode 108: Convert Sorted Array to BST
// Approach: Divide and Conquer
// Time: O(n), Space: O(log n)


class Solution {
public:
TreeNode* buildBST(vector<int>& nums, int l, int r) {
if (l > r) return NULL;


int mid = l + (r - l) / 2;
TreeNode* root = new TreeNode(nums[mid]);


root->left = buildBST(nums, l, mid - 1);
root->right = buildBST(nums, mid + 1, r);
return root;
}


TreeNode* sortedArrayToBST(vector<int>& nums) {
return buildBST(nums, 0, nums.size() - 1);
}
};
