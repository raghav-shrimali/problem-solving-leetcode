/*
    LeetCode: 1572. Matrix Diagonal Sum
    Topic: Arrays, Matrix

    Approach:
    1. Traverse all rows.
    2. Add primary diagonal element.
    3. Add secondary diagonal element.
    4. If n is odd, subtract the center element once.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }

        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
