/*
LeetCode 409 - Longest Palindrome

Approach:
- Count character frequencies
- Use even counts completely
- Use one odd character in the center

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;

        int length = 0;
        bool hasOdd = false;

        for (auto it : freq) {
            if (it.second % 2 == 0)
                length += it.second;
            else {
                length += it.second - 1;
                hasOdd = true;
            }
        }

        return hasOdd ? length + 1 : length;
    }
};
