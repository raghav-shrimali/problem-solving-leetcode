/*
================================================================================
LeetCode 334. Increasing Triplet Subsequence
================================================================================

Approach:
- Maintain two variables:
  1. first  -> Smallest element found so far.
  2. second -> Smallest element greater than first.
- Traverse the array:
    - If current element is smaller than or equal to first,
      update first.
    - Else if current element is smaller than or equal to second,
      update second.
    - Otherwise, we have found an element greater than both
      first and second, which forms an increasing triplet.

Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {

            if (num <= first) {
                first = num;
            }
            else if (num <= second) {
                second = num;
            }
            else {
                return true;
            }
        }

        return false;
    }
};
