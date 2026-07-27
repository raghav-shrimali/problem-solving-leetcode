/*
-------------------------------------------------------
Problem Number : 75
Problem Name   : Sort Colors
LeetCode Link  : https://leetcode.com/problems/sort-colors/

Topic          : Arrays
Technique      : Two Pointers
Algorithm      : Dutch National Flag Algorithm

Approach:
- Maintain three pointers:
    low  -> next position for 0
    mid  -> current element
    high -> next position for 2
- Traverse the array only once.
- Place 0s at the beginning, 2s at the end,
  and 1s automatically remain in the middle.

Time Complexity  : O(n)
Space Complexity : O(1)

Author : Raghav Shrimali
-------------------------------------------------------
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
