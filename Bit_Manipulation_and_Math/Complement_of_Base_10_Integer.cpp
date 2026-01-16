// Approach

// Find a bitmask of all 1s having the same number of bits as n

// XOR the number with the mask to get the complement

// ⏱ Time & Space

// Time: O(log n)

// Space: O(1)

// LeetCode 1009 - Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        int mask = 0;
        int temp = n;

        // Create mask with all bits set to 1
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }

        // XOR with mask to get complement
        return n ^ mask;
    }
};
