// 📌 Approach

// Extract digits using % 10

// Build reversed number

// Check for overflow before updating result

// ⏱ Time & Space

// Time: O(log n)

// Space: O(1)

// LeetCode 7 - Reverse Integer

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check overflow
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
};
