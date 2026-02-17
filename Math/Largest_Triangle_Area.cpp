/*
LeetCode 812: Largest Triangle Area

Problem:
Given an array of points on the 2D plane,
return the area of the largest triangle that can be formed
by any three different points.

----------------------------------------------------------

Approach:
- Use brute force:
  - Pick every combination of 3 points.
  - Compute area using Shoelace Formula:

  Area = | x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2) | / 2

- Keep track of maximum area.

----------------------------------------------------------

Time Complexity: O(N^3)
Space Complexity: O(1)
*/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {

                    double area = abs(
                        points[i][0] * (points[j][1] - points[k][1]) +
                        points[j][0] * (points[k][1] - points[i][1]) +
                        points[k][0] * (points[i][1] - points[j][1])
                    ) / 2.0;

                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
