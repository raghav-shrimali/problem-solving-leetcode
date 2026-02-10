/*
LeetCode 370: Range Addition II

Approach:
- The minimum row and column among all operations
  gives the max value area.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow = m, minCol = n;

        for (auto &op : ops) {
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }
        return minRow * minCol;
    }
};
