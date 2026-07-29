/*
    LeetCode: 867. Transpose Matrix
    Topic: Arrays, Matrix

    Approach:
    1. Create a new matrix with swapped dimensions.
    2. Traverse every element.
    3. Store matrix[i][j] at result[j][i].

    Time Complexity: O(m × n)
    Space Complexity: O(m × n)
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> result(cols, vector<int>(rows));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};
