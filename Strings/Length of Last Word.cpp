/*
    LeetCode 58. Length of Last Word

    Approach:
    - Traverse from the end of the string.
    - Skip trailing spaces.
    - Count characters of the last word.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
