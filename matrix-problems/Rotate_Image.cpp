/*
LeetCode Problem 48: Rotate Image

Approach:
1. Transpose the matrix.
2. Reverse each row.

This results in a 90-degree clockwise rotation.

Time Complexity: O(n^2)
Space Complexity: O(1) (in-place)
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
