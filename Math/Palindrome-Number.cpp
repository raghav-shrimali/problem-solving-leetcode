/*
===============================================================================
LeetCode Problem: 9. Palindrome Number
Difficulty: Easy

Approach:
1. Negative numbers cannot be palindrome, so return false.
2. Store the original number in a temporary variable.
3. Reverse the digits of the number.
4. Compare the reversed number with the original number.
5. If both are equal, return true; otherwise, return false.

Time Complexity: O(log10(n))
- We process each digit exactly once.

Space Complexity: O(1)
- No extra space is used except a few variables.
===============================================================================
*/

class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are never palindrome
        if (x < 0) {
            return false;
        }

        // Store original number
        int original = x;

        // Use long long to prevent integer overflow
        long long reversed = 0;

        // Reverse the number
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Compare original and reversed number
        return original == reversed;
    }
};
