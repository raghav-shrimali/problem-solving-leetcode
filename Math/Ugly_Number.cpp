/*
LeetCode 263 - Ugly Number

Approach:
- Keep dividing by 2, 3, and 5.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        for (int x : {2, 3, 5})
            while (n % x == 0) n /= x;
        return n == 1;
    }
};
