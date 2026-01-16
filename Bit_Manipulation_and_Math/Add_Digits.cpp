// 📌 Approach

// Use Digital Root formula

// If number is 0, answer is 0

// Otherwise: 1 + (num - 1) % 9

// ⏱ Time & Space

// Time: O(1)

// Space: O(1)



// LeetCode 258 - Add Digits

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;

        return 1 + (num - 1) % 9;
    }
};
