/*
-------------------------------------------------------
Problem Number : 540
Problem Name   : Single Element in a Sorted Array
LeetCode Link  : https://leetcode.com/problems/single-element-in-a-sorted-array/

Approach:
- Binary Search
- Make mid even.
- Compare nums[mid] with nums[mid + 1].
- If equal, answer lies on the right.
- Otherwise, answer lies on the left.

Time Complexity  : O(log n)
Space Complexity : O(1)

Author : Raghav Shrimali
-------------------------------------------------------
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1])
                left = mid + 2;
            else
                right = mid;
        }

        return nums[left];
    }
};
