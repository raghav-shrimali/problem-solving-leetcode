/*
=========================================================
LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
=========================================================

Approach:
1. The array is already sorted.
2. Use lower_bound() to find the first index of 0 (or first non-negative).
3. Use upper_bound() to find the first index greater than 0.
4. Number of negative elements = firstNonNegative.
5. Number of positive elements = n - firstPositive.
6. Return the maximum of the two counts.

Time Complexity : O(log n)
Space Complexity: O(1)

Topic: Binary Search, Array

=========================================================
*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // First index where element >= 0
        int firstNonNegative = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();

        // First index where element > 0
        int firstPositive = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();

        int negative = firstNonNegative;
        int positive = n - firstPositive;

        return max(negative, positive);
    }
};
