/*
-------------------------------------------------------
Problem Number : 53
Problem Name   : Maximum Subarray
LeetCode Link  : https://leetcode.com/problems/maximum-subarray/

Topic          : Arrays
Algorithm      : Kadane's Algorithm

Approach:
- Traverse the array once.
- Maintain currentSum as the maximum subarray ending at the current index.
- Update maxSum whenever a larger sum is found.

Time Complexity  : O(n)
Space Complexity : O(1)


-------------------------------------------------------
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
