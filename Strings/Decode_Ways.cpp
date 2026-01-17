/*
LeetCode Question: 91 - Decode Ways

Approach:
Base Case Handling

If the string is empty → return 0

If the string starts with '0' → return 0

If the string length is 1 → return 1

Initialize Variables

val1 → number of ways to decode till index i - 2

val2 → number of ways to decode till index i - 1

Both start as 1 because a valid single digit has one decoding

Iterate Through the String

For each position i, calculate:

d1 → current single digit

d2 → two-digit number formed with previous digit

Initialize val = 0 for current decoding count

Check Valid Decodings

If d1 >= 1, it can be decoded alone → add val2

If d2 is between 10 and 26, it can be decoded as a pair → add val1

Update Variables

Shift values:

val1 = val2

val2 = val

Final Answer

val2 contains the total number of valid decoding ways

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    int numDecodings(string s) {
        if(s.length() < 1)
        return 0;

        if(s[0] == '0')
        return 0;

        if(s.length() == 1)
        return 1;

        int val1 = 1;
        int val2 = 1;

        for(int i = 1; i < s.length(); i++){
            int d1 = s[i]-'0';
            int d2 = (s[i-1]-'0')*10+d1;
            int val = 0;

            if(d1 >= 1)
            val += val2;
            if(d2>=10 && d2<=26)
            val += val1;

            val1 = val2;
            val2 = val;
        }
        return val2;
    }
};
