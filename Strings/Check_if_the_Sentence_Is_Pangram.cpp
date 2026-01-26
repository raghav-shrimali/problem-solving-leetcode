/*
LeetCode 1832 - Check if the Sentence Is Pangram

Approach:
- Track presence of each alphabet character

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26, false);

        for (char c : sentence)
            seen[c - 'a'] = true;

        for (bool present : seen) {
            if (!present)
                return false;
        }
        return true;
    }
};
