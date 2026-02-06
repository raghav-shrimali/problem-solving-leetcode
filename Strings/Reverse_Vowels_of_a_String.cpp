/*
LeetCode 345 - Reverse Vowels of a String

Approach:
- Use two-pointer technique.
- Swap vowels from left and right.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            while (l < r && !isVowel(s[l])) l++;
            while (l < r && !isVowel(s[r])) r--;

            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
};
