/*
    LeetCode 20. Valid Parentheses

    Approach:
    - Push opening brackets onto the stack.
    - For each closing bracket, verify it matches
      the top of the stack.
    - If not, return false.
    - At the end, the stack should be empty.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                if (st.empty()) {
                    return false;
                }

                if ((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
