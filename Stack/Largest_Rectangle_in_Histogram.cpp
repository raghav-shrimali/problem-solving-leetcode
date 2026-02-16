/*
LeetCode 84: Largest Rectangle in Histogram

Problem:
Given an array of heights representing histogram bars,
return the area of the largest rectangle.

-------------------------------------------------------

Approach:
- Use a monotonic increasing stack.
- Store indices.
- When current height is smaller than stack top:
    - Pop from stack
    - Calculate area
- Continue until stack empty.

-------------------------------------------------------

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        heights.push_back(0); // sentinel

        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
