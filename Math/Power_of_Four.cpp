/*
LeetCode 342 - Power of Four

Approach:
- Bit manipulation.

Time Complexity: O(1)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n-1)) == 0 && (n & 0x55555555);
    }
};
