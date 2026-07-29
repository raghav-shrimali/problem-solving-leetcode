/*
    LeetCode: 242. Valid Anagram
    Topic: Strings, Hash Table (Frequency Counting)

    Approach:
    1. If lengths are different, return false.
    2. Count frequency of each character in s.
    3. Decrease frequency using characters of t.
    4. If any count becomes negative, return false.
    5. Otherwise, return true.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        for (char c : t) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0)
                return false;
        }

        return true;
    }
};
