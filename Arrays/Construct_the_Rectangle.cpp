/*
LeetCode 492 - Construct the Rectangle

Approach:
- Start from sqrt(area) and find factors.

Time Complexity: O(sqrt(n))
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> constructRectangle(int area) {
        for (int i = sqrt(area); i >= 1; i--) {
            if (area % i == 0)
                return {area / i, i};
        }
        return {};
    }
};
