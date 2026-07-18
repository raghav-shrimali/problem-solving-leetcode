/*
============================================================
LeetCode Problem: 319. Bulb Switcher
Platform: LeetCode
Difficulty: Medium

Approach (Optimal - Mathematical Observation):
1. A bulb is toggled once for every divisor it has.
2. Bulbs with an even number of divisors end up OFF.
3. Only perfect squares have an odd number of divisors.
4. Therefore, the number of bulbs that remain ON is equal to
   the number of perfect squares less than or equal to n.
5. Return the integer part of the square root of n.

Time Complexity:
O(1)

Space Complexity:
O(1)

Topics:
- Math
- Number Theory
============================================================
*/

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
