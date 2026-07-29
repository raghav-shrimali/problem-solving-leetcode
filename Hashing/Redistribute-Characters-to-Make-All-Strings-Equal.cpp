/*
    LeetCode 1897. Redistribute Characters to Make All Strings Equal

    Approach:
    - Count the frequency of every character.
    - Every character count must be divisible by
      the total number of strings.

    Time Complexity: O(N × M)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> freq(26, 0);

        for (string &word : words) {
            for (char ch : word) {
                freq[ch - 'a']++;
            }
        }

        int n = words.size();

        for (int count : freq) {
            if (count % n != 0) {
                return false;
            }
        }

        return true;
    }
};
