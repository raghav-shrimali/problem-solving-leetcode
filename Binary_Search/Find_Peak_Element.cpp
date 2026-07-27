/*
===============================================================================
LeetCode 162. Find Peak Element
===============================================================================

Approach:
- Use Binary Search to find a peak element.
- Compare the middle element with its next element.
- If nums[mid] < nums[mid + 1], the peak lies on the right side.
- Otherwise, the peak lies on the left side (including mid).
- Continue until start == end.
- Return the index of the peak.

Time Complexity: O(log n)
Space Complexity: O(1)

*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] < nums[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return start;
    }
};
