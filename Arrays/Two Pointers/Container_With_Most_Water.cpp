/*
============================================================
LeetCode Problem: 11. Container With Most Water
Platform: LeetCode
Difficulty: Medium

Approach (Optimal - Two Pointers):
1. Initialize two pointers:
   - left = 0 (start of the array)
   - right = n - 1 (end of the array)
2. Calculate the width between the two pointers.
3. The height of the container is the minimum of the two heights.
4. Compute the area:
      area = min(height[left], height[right]) * (right - left)
5. Update the maximum area if the current area is larger.
6. Move the pointer pointing to the smaller height:
   - If height[left] < height[right], increment left.
   - Otherwise, decrement right.
7. Continue until the two pointers meet.

Time Complexity:
O(n)

Space Complexity:
O(1)

Topics:
- Array
- Two Pointers
- Greedy
============================================================
*/

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {

            int width = right - left;
            int currHeight = min(height[left], height[right]);
            int area = width * currHeight;

            maxWater = max(maxWater, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
