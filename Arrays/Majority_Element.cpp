/*
LeetCode 169 - Majority Element
Link: https://leetcode.com/problems/majority-element/

Approach: Moore’s Voting Algorithm
- Find a potential majority candidate in one pass
- Verify if it appears more than n/2 times

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1, count = 0;

        // Step 1: Find candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Step 2: Verify candidate
        count = 0;
        for (int num : nums) {
            if (num == candidate)
                count++;
        }

        return (count > nums.size() / 2) ? candidate : -1;
    }
};
