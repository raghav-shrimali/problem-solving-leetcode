/*
============================================================
LeetCode Problem: 167. Two Sum II - Input Array Is Sorted
Platform: LeetCode
Difficulty: Medium

Approach (Optimal - Two Pointers):
1. Initialize two pointers:
   - left = 0 (beginning of the array)
   - right = n - 1 (end of the array)
2. Calculate the sum of elements at both pointers.
3. If the sum equals the target, return their 1-based indices.
4. If the sum is less than the target, move the left pointer to increase the sum.
5. If the sum is greater than the target, move the right pointer to decrease the sum.
6. Continue until the pair is found.

Time Complexity:
O(n)

Space Complexity:
O(1)

Topics:
- Array
- Two Pointers
- Binary Search
============================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
