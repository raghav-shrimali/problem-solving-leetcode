/*
LeetCode Problem: 38. Count and Say
Link: https://leetcode.com/problems/count-and-say/

Approach:
- Start with the base case "1"
- Repeat the process n-1 times:
  - Traverse the current string
  - Count consecutive identical characters
  - Append count followed by the character
- Return the final generated string

Time Complexity: O(n * m)
- n = number of iterations
- m = average length of the string at each iteration

Space Complexity: O(m)
- Extra space used to store the generated string
*/

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";

        for (int i = 2; i <= n; i++) {
            string temp = "";
            int count = 1;

            for (int j = 1; j < result.length(); j++) {
                if (result[j] == result[j - 1]) {
                    count++;
                } else {
                    temp += to_string(count);
                    temp += result[j - 1];
                    count = 1;
                }
            }

            // append last group
            temp += to_string(count);
            temp += result.back();

            result = temp;
        }

        return result;
    }
};

