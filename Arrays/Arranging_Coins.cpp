/*
LeetCode 441 - Arranging Coins

Approach:
- Binary search for max k such that k*(k+1)/2 <= n.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int arrangeCoins(int n) {
        long l = 1, r = n;
        while (l <= r) {
            long mid = (l + r) / 2;
            long sum = mid * (mid + 1) / 2;
            if (sum == n) return mid;
            if (sum < n) l = mid + 1;
            else r = mid - 1;
        }
        return r;
    }
};
