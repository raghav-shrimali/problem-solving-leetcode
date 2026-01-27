/*
LeetCode 2785 - Sort Vowels in a String

Approach:
- Collect vowels, sort them, and reinsert

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};

        for (char c : s)
            if (st.count(c))
                vowels += c;

        sort(vowels.begin(), vowels.end());

        int index = 0;
        for (char &c : s) {
            if (st.count(c))
                c = vowels[index++];
        }
        return s;
    }
};
