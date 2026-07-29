/*
    LeetCode 443. String Compression

    Approach:
    - Use two pointers.
    - Read consecutive groups of the same character.
    - Write the character once.
    - If frequency > 1, write the digits of the frequency.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

            chars[index++] = currentChar;

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};
