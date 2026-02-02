/*
LeetCode 78 - Subsets

Approach:
- Use backtracking.
- At each index, choose to include or exclude the element.

Time Complexity: O(2^n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int idx, vector<int>& nums, vector<int>& temp) {
        ans.push_back(temp);

        for (int i = idx; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            backtrack(i + 1, nums, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        backtrack(0, nums, temp);
        return ans;
    }
};
