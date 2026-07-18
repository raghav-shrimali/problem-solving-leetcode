/*
============================================================
LeetCode Problem: 238. Product of Array Except Self
Platform: LeetCode
Difficulty: Medium

Approach (Optimal - Prefix & Suffix Product):
1. Create an answer array initialized with 1.
2. Traverse from left to right and store the product of all elements
   to the left of the current index.
3. Traverse from right to left while maintaining a suffix product.
4. Multiply the stored prefix product with the suffix product for
   each index to obtain the final result.
5. Return the answer array.

Time Complexity:
O(n)

Space Complexity:
O(1)
(Note: The output array is not counted as extra space.)

Topics:
- Array
- Prefix Sum
============================================================
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};
