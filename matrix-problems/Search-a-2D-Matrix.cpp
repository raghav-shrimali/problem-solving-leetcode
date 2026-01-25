// LeetCode Problem: 74 - Search a 2D Matrix
// Approach: Binary Search by treating matrix as a 1D sorted array
// ## Approach Explanation

// Since:
// - Each row is sorted
// - First element of each row is greater than the last of the previous row

// The matrix behaves like a single sorted 1D array.

// We apply binary search on indices from `0` to `(m × n) - 1`.

// Index mapping:
// - row = index / number_of_columns
// - col = index % number_of_columns

// This allows binary search without extra space.

// ## Complexity Analysis
// - Time Complexity: O(log(m × n))
// - Space Complexity: O(1)

// Time Complexity: O(log(m * n))
// Space Complexity: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // Edge case: empty matrix
        if (matrix.empty() || matrix[0].empty())
            return false;

        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        int start = 0;
        int end = n * m - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int row = mid / m;        // convert 1D index to row
            int col = mid % m;        // convert 1D index to column

            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};
