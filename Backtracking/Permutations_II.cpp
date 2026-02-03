/*
LeetCode 47 - Permutations II

Problem:
Given a collection of numbers that might contain duplicates,
return all possible unique permutations.

Approach:
- Sort the array first.
- Use backtracking with a visited array.
- Skip duplicates by checking previous element usage.

Time Complexity: O(n! * n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            temp.push_back(nums[i]);
            backtrack(nums, temp, used);
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        backtrack(nums, temp, used);
        return ans;
    }
};
