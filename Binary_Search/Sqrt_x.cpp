/*
LeetCode: 69 - Sqrt(x)

Approach:
- Binary search in range [1, x]
- Find largest mid such that mid*mid <= x

Time Complexity: O(log x)
Space Complexity: O(1)
*/

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        long left = 1, right = x / 2, ans = 0;

        while (left <= right) {
            long mid = left + (right - left) / 2;

            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};
