/*
============================================================
LeetCode Problem: 268. Missing Number
Platform: LeetCode
Difficulty: Easy

Approach (Optimal Approach - Sum Formula):
1. Let n be the size of the array.
2. Calculate the expected sum of numbers from 0 to n using the formula:
      Sum = n * (n + 1) / 2
3. Traverse the array and calculate the actual sum of its elements.
4. The difference between the expected sum and the actual sum is the missing number.
5. Return the missing number.

Time Complexity:
O(n)
- One traversal of the array is required.

Space Complexity:
O(1)
- No extra data structure is used; only a few integer variables are maintained.

Topics:
- Array
- Math
- Prefix Sum (Concept)
============================================================
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int actualSum = (n * (n + 1)) / 2;

        int currSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
        }

        int ans = actualSum - currSum;

        return ans;
    }
};
