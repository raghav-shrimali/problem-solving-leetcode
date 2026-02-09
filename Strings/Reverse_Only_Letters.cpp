/*
LeetCode 917 - Reverse Only Letters

Approach:
- Two pointers, swap only alphabetic characters.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (!isalpha(s[l])) l++;
            else if (!isalpha(s[r])) r--;
            else swap(s[l++], s[r--]);
        }
        return s;
    }
};
