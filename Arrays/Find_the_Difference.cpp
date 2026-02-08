/*
LeetCode 389 - Find the Difference

Approach:
- XOR all characters of both strings.
- Duplicate characters cancel out.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(char c : s) ans ^= c;
        for(char c : t) ans ^= c;
        return ans;
    }
};
