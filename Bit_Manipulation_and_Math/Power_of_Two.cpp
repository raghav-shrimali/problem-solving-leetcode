// 📌 Approach

// A power of two has only one set bit

// n & (n - 1) removes the lowest set bit

// If result is 0, it's a power of two

// ⏱ Time & Space

// Time: O(1)

// Space: O(1)

// LeetCode 231 - Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        return (n & (n - 1)) == 0;
    }
};
