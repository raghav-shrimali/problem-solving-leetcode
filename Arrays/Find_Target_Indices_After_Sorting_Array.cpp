/*
-------------------------------------------------------
Problem Number : 2089
Problem Name   : Find Target Indices After Sorting Array
LeetCode Link  : https://leetcode.com/problems/find-target-indices-after-sorting-array/

Topic          : Arrays
Algorithm      : Sorting + Linear Scan

Approach:
- Sort the given array.
- Traverse the sorted array.
- Store every index where nums[i] == target.

Time Complexity  : O(n log n)
Space Complexity : O(1) (excluding output array)

-------------------------------------------------------
*/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
