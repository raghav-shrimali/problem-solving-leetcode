/*
LeetCode 504 - Base 7

Approach:
- Repeated division by 7.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool neg = num < 0;
        num = abs(num);
        string res = "";
        while (num) {
            res = to_string(num % 7) + res;
            num /= 7;
        }
        return neg ? "-" + res : res;
    }
};
