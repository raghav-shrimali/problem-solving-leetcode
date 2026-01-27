/*
LeetCode 415 - Add Strings

Approach:
- Simulate digit addition with carry

Time Complexity: O(max(n, m))
Space Complexity: O(1)
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';

            result += (sum % 10) + '0';
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
