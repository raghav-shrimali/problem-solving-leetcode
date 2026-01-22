/*
------------------------------------------------------------
LeetCode Problem #42 : Trapping Rain Water
------------------------------------------------------------

Approach:
- Use the Two Pointer technique.
- Maintain two pointers: left and right.
- Track maximum height seen so far from both ends:
    leftMax and rightMax.
- Water trapped at any index depends on the minimum
  of leftMax and rightMax minus current height.

Steps:
1. Initialize left = 0, right = n-1.
2. Move the pointer with smaller height.
3. Update leftMax or rightMax.
4. Accumulate trapped water.

------------------------------------------------------------
Time Complexity:
- O(n), where n is the number of bars

Space Complexity:
- O(1), constant extra space
------------------------------------------------------------
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int waterTrapped = 0;

        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] >= leftMax)
                    leftMax = height[left];
                else
                    waterTrapped += leftMax - height[left];
                left++;
            } else {
                if (height[right] >= rightMax)
                    rightMax = height[right];
                else
                    waterTrapped += rightMax - height[right];
                right--;
            }
        }

        return waterTrapped;
    }
};
