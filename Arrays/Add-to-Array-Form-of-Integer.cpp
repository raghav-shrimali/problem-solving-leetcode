/*
===============================================================================
LeetCode Problem: 989. Add to Array-Form of Integer
Difficulty: Easy

Topic:
- Arrays
- Math

Approach:
1. Start traversing the array from the last digit.
2. Add the current digit, k, and carry together.
3. Store the last digit of the sum in the answer.
4. Update k by removing its last digit.
5. Continue until all digits and carry are processed.
6. Reverse the answer before returning it.

Time Complexity: O(max(n, log₁₀(k)))
- We process each digit of the array and each digit of k once.

Space Complexity: O(max(n, log₁₀(k)))
- Extra space is used to store the resulting array.
===============================================================================
*/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        vector<int> ans;
        int i = num.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0 || carry) {

            int sum = carry;

            if (i >= 0) {
                sum += num[i];
                i--;
            }

            sum += k % 10;
            k /= 10;

            ans.push_back(sum % 10);
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
