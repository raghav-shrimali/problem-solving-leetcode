/*
===============================================================================
LeetCode Problem: 1518. Water Bottles
Difficulty: Easy

Topic:
- Simulation
- Math

Approach:
1. Initially, drink all the full bottles.
2. Keep track of the total bottles drunk.
3. Exchange empty bottles for new full bottles whenever possible.
4. After each exchange:
      - Add the newly obtained bottles to the total.
      - Update the number of empty bottles.
5. Continue until there are not enough empty bottles for another exchange.

Time Complexity: O(log n)
- In each iteration, the number of empty bottles decreases significantly.
- The loop executes only a limited number of times.

Space Complexity: O(1)
- Only constant extra space is used.
===============================================================================
*/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        // Initially drink all full bottles
        int totalBottles = numBottles;

        // Current empty bottles
        int emptyBottles = numBottles;

        while (emptyBottles >= numExchange) {

            // New bottles obtained after exchange
            int newBottles = emptyBottles / numExchange;

            // Add newly obtained bottles to answer
            totalBottles += newBottles;

            // Update empty bottles
            emptyBottles = (emptyBottles % numExchange) + newBottles;
        }

        return totalBottles;
    }
};
