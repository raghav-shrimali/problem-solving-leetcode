/*
LeetCode 463 - Island Perimeter

Problem:
You are given a grid representing an island (1 = land, 0 = water).
Return the perimeter of the island.

Approach:
- For every land cell, start with 4 edges.
- Subtract 2 for every adjacent land cell (shared edge).

Time Complexity: O(m * n)
Space Complexity: O(1)
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    perimeter += 4;
                    if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2;
                    if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2;
                }
            }
        }
        return perimeter;
    }
};
