/*
LeetCode 405 - Convert Number to Hexadecimal

Approach:
- Bit masking (4 bits at a time).

Time Complexity: O(1)
Space Complexity: O(1)
*/
class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string hex = "0123456789abcdef", res = "";
        unsigned int n = num;
        while(n) {
            res = hex[n & 15] + res;
            n >>= 4;
        }
        return res;
    }
};
