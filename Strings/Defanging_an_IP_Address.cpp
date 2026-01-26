/*
LeetCode 1108 - Defanging an IP Address

Approach:
- Replace '.' with '[.]'

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";

        for (char c : address) {
            if (c == '.')
                result += "[.]";
            else
                result += c;
        }

        return result;
    }
};
