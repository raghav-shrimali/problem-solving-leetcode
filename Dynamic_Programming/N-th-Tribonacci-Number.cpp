/*
===============================================================================
LeetCode Problem: 1137. N-th Tribonacci Number
Difficulty: Easy

Topic:
- Dynamic Programming
- Math

Approach:
1. Handle the base cases:
      T0 = 0
      T1 = 1
      T2 = 1
2. Store the previous three Tribonacci numbers.
3. Iterate from 3 to n.
4. Calculate the current Tribonacci number as:
      current = first + second + third
5. Update the previous three numbers.
6. Return the final Tribonacci number.

Time Complexity: O(n)
- We traverse from 3 to n exactly once.

Space Complexity: O(1)
- Only four integer variables are used.
===============================================================================
*/

class Solution {
public:
    int tribonacci(int n) {

        // Base Cases
        if (n == 0)
            return 0;

        if (n == 1 || n == 2)
            return 1;

        int first = 0;
        int second = 1;
        int third = 1;

        // Compute Tribonacci Number
        for (int i = 3; i <= n; i++) {

            int current = first + second + third;

            first = second;
            second = third;
            third = current;
        }

        return third;
    }
};
