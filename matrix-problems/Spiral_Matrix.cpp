/*
LeetCode Problem 54: Spiral Matrix

Approach:
Use four pointers (top, bottom, left, right) to traverse
the matrix layer by layer in spiral order.

Time Complexity: O(m * n)
Space Complexity: O(1) (excluding output vector)
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Left to Right
            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);
            top++;

            // Top to Bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // Right to Left
            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);
                bottom--;
            }

            // Bottom to Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};
