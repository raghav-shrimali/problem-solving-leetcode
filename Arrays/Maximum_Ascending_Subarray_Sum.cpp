/*
============================================================
LeetCode Problem: 1800. Maximum Ascending Subarray Sum
Platform: LeetCode
Difficulty: Easy

Approach (Optimal - Single Pass):
1. Initialize the current sum and maximum sum with the first element.
2. Traverse the array from the second element.
3. If the current element is greater than the previous element,
   it continues the ascending subarray, so add it to the current sum.
4. Otherwise, start a new ascending subarray from the current element.
5. Update the maximum sum after each iteration.
6. Return the maximum ascending subarray sum.

Time Complexity:
O(n)

Space Complexity:
O(1)

Topics:
- Array
============================================================
*/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];
            } else {
                currentSum = nums[i];
            }

            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
