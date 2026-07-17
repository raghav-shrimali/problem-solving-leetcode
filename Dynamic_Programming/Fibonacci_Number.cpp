// /*
// LeetCode 509 - Fibonacci Number

// Approach:
// - Iterative solution using two variables.

// Time Complexity: O(n)
// Space Complexity: O(1)
// */

// class Solution {
// public:
//     int fib(int n) {
//         if (n <= 1) return n;

//         int a = 0, b = 1;
//         for (int i = 2; i <= n; i++) {
//             int c = a + b;
//             a = b;
//             b = c;
//         }
//         return b;
//     }
// };


// Another Approach 

/*
===============================================================================
LeetCode Problem: 509. Fibonacci Number
Difficulty: Easy

Topic:
- Dynamic Programming
- Math
- Recursion

Approach:
1. Handle the base cases:
   - If n = 0, return 0.
   - If n = 1, return 1.
2. Use an iterative approach to calculate the Fibonacci sequence.
3. Maintain two variables representing the previous two Fibonacci numbers.
4. Update them until reaching the nth Fibonacci number.
5. Return the final result.

Time Complexity: O(n)
- We iterate from 2 to n exactly once.

Space Complexity: O(1)
- Only a few variables are used.
===============================================================================
*/

class Solution {
public:
    int fib(int n) {

        // Base cases
        if (n == 0)
            return 0;

        if (n == 1)
            return 1;

        int prev2 = 0;
        int prev1 = 1;

        // Compute Fibonacci iteratively
        for (int i = 2; i <= n; i++) {
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};
